/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:51:23 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/18 19:08:10 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_minimalnbr(t_list	**stack,int	num)
{
	t_list	*top;
	int		minimal_value;

	top = *stack;
	minimal_value = top->index;
	while (top->next)
	{
		top = top->next;
		if ((top->index < minimal_value) && top->index != num)
			minimal_value = top->index;
	}
	return (minimal_value);
}

static void	ft_sort_three(t_list	**stack_a)
{
	t_list	*top;
	int		min;
	int		next_minimal;

	top = *stack_a;
	min = ft_minimalnbr(stack_a, -1);
	next_minimal = ft_minimalnbr(stack_a, min);
	if (ft_sortedstack(stack_a))
		return ;
	if (top->index == min && top->next->index != next_minimal)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if (top->index == next_minimal)
	{
		if (top->next->index == next_minimal)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
		ft_sort_three2(stack_a, top, min);
}

static void	ft_sort_four(t_list	**stack_a,t_list	**stack_b)
{
	int	num;

	if (ft_sortedstack(stack_a))
		return ;
	num = ft_distance_to_nbr(stack_a, ft_minimalnbr(stack_a, -1));
	if (num == 1)
		ra(stack_a);
	else if (num == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (num == 3)
		rra(stack_a);
	if (ft_sortedstack(stack_a))
		return ;
	pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	pa(stack_a, stack_b);
}

static void	ft_sort_five(t_list	**stack_a,t_list	**stack_b)
{
	int	num;

	if (ft_sortedstack(stack_a))
		return ;
	num = ft_distance_to_nbr(stack_a, ft_minimalnbr(stack_a, -1));
	if (num == 1)
		ra(stack_a);
	else if (num == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (num == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (num == 4)
		rra(stack_a);
	if (ft_sortedstack(stack_a))
		return ;
	pb(stack_a, stack_b);
	ft_sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}	
	

void	ft_simplesort(t_list	**stack_a,t_list	**stack_b)
{
	int	length;

	if (ft_sortedstack(stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1)
		return ;
	length = ft_lstsize(*stack_a);
	if (length == 2)
		sa(stack_a);
	else if (length == 3)
		ft_sort_three(stack_a);
	else if (length == 4)
		ft_sort_four(stack_a, stack_b);
	else if (length == 5)
		ft_sort_five(stack_a, stack_b);
}