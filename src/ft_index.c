/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:43:35 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/23 14:52:26 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	t_list	*ft_getmin(t_list **stack)
{
	t_list	*top;
	t_list	*min;
	int		minint;

	min = NULL;
	minint = 0;
	top = *stack;
	if (top)
	{
		while (top)
		{
			if ((top->index == -1) && (!minint || top->content < min->content))
			{
				min = top;
				minint = 1;
			}
			top = top->next;
		}
	}
	return (min);
}

void	ft_index(t_list	**stack)
{
	t_list	*top;
	int		index;

	index = 0;
	top = ft_getmin(stack);
	while (top)
	{
		top->index = index++;
		top = ft_getmin(stack);
	}
}
