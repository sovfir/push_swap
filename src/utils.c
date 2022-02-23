/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:07:41 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/23 16:43:19 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *str, int fd)
{
	ft_putendl_fd(str, fd);
	exit(0);
}

int	ft_sortedstack(t_list	**stack)
{
	t_list	*top;

	top = *stack;
	while (top && top->next)
	{
		if (top->content > top->next->content)
			return (0);
		top = top->next;
	}
	return (1);
}

void	ft_stackfree(t_list	**stack)
{
	t_list	*top;
	t_list	*tmp;

	top = *stack;
	while (top)
	{
		tmp = top;
		top = top->next;
		free(tmp);
	}
	free(stack);
}

void	ft_sort_three2(t_list **stack_a, t_list *top, int min)
{
	if (top->next->index == min)
		ra(stack_a);
	else
	{
		sa(stack_a);
		rra(stack_a);
	}
}

int	ft_distance_to_nbr(t_list **stack, int i)
{
	t_list	*top;
	int		distance;

	distance = 0;
	top = *stack;
	while (top)
	{
		if (top->index == i)
			break ;
		distance++;
		top = top->next;
	}
	return (distance);
}
