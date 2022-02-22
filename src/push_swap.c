/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:52:12 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/21 20:17:19 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_sorting(t_list	**stack_a, t_list	**stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		ft_simplesort(stack_a, stack_b);
	else
		ft_radix(stack_a, stack_b);
}

static void	ft_stackmaker(t_list **stack, t_arguments *data)
{
	t_list	*list_new;

	data->i = 1;
	while (data->argv[data->i])
	{
		list_new = ft_lstnew(ft_atoi(data->argv[data->i]));
		ft_lstadd_back(stack, list_new);
		data->i++;
	}
	ft_index(stack);
}

int	main(int	argc, char **argv)
{
	t_list		**stack_a;
	t_list		**stack_b;
	t_arguments	data;

	data.argv = argv;
	data.argc = argc;
	data.i = 0;
	if(argc < 2)
	{
		ft_error("Error\n", 1);
		return(-1);
	}
	ft_validcheck(&data);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_stackmaker(stack_a, &data);
	if (ft_sortedstack(stack_a))
	{
		ft_stackfree(stack_a);
		ft_stackfree(stack_b);
		return (0);
	}
	ft_sorting(stack_a, stack_b);
	ft_stackfree(stack_b);
	ft_stackfree(stack_a);
	return(0);
}
