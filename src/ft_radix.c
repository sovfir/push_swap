/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:01:50 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/17 19:59:12 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_bits( t_list	**stack)
{
	t_list	*top;
	int		maximal;
	int		bits;

	top = *stack;
	maximal = top->index;
	bits = 0;
	while (top)
	{
		if (top->index > maximal)
			maximal = top->index;
		top = top->next;
	}
	while ((maximal >> bits) != 0)
		bits++;
	return (bits);
}

void	ft_radix(t_list	**stack_a, t_list	**stack_b)
{
	t_list	*top_a;
	int		i;
	int		j;
	int		size;
	int		bits;

	i = 0;
	top_a = *stack_a;
	size = ft_lstsize(top_a);
	bits = ft_bits(stack_a);
	while (i < bits)
	{
		j = 0;
		while (j++ < size)
		{
			top_a = *stack_a;
			if (((top_a->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
