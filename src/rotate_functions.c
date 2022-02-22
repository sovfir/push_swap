/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:15:33 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/16 18:21:28 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rotate_function(t_list	**stack)
{
	t_list	*head;
	t_list	*remain;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	remain = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	remain->next = head;
	return (0);
}

int	rb(t_list **stack_b)
{
	if (rotate_function(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	ra(t_list **stack_a)
{
	if (rotate_function(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	rotate_function(stack_a);
	rotate_function(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}