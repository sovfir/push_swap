/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:11:29 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/23 16:26:13 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push_function(t_list	**stack_to, t_list	**stack_from)
{
	t_list	*tmp;
	t_list	*top_to;
	t_list	*top_from;

	if (ft_lstsize(*stack_from) == 0)
		return (-1);
	top_to = *stack_to;
	top_from = *stack_from;
	tmp = top_from;
	top_from = top_from->next;
	*stack_from = top_from;
	if (!top_to)
	{
		top_to = tmp;
		top_to->next = NULL;
		*stack_to = top_to;
	}
	else
	{
		tmp->next = top_to;
		*stack_to = tmp;
	}
	return (0);
}

int	pb(t_list	**stack_a, t_list	**stack_b)
{
	if (push_function(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

int	pa(t_list	**stack_a, t_list	**stack_b)
{
	if (push_function(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}
