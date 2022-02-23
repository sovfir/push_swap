/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:21:42 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/23 16:37:28 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap_function(t_list	**stack)
{
	t_list	*top;
	t_list	*next;
	int		tmp_val;
	int		tmp_i;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	top = *stack;
	next = top->next;
	if (!top && !next)
		ft_error("Error\n", 1);
	tmp_val = top->content;
	tmp_i = top->index;
	top->content = next->content;
	top->index = next->index;
	next->content = tmp_val;
	next->index = tmp_i;
	return (0);
}

int	sa(t_list **stack_a)
{
	if (swap_function(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_list **stack_b)
{
	if (swap_function(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{	
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	swap_function(stack_a);
	swap_function(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}
