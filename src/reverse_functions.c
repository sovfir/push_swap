/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:03:38 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/23 16:43:42 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	reverse_function(t_list	**stack)
{
	t_list	*head;
	t_list	*remain;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	remain = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	remain->next = *stack;
	*stack = remain;
	return (0);
}

int	rra(t_list	**stack_a)
{
	if (reverse_function(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_list	**stack_b)
{
	if (reverse_function(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list	**stack_a, t_list	**stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	reverse_function(stack_a);
	reverse_function(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
