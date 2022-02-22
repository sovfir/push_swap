/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:47:15 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/18 18:36:44 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <inttypes.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_arguments
{
	int			argc;
	char		**argv;
	int			i;
}	t_arguments;

void	ft_error(char *str, int	fd);
void	ft_validcheck(t_arguments	*data);
int		ft_sortedstack(t_list	**stack);
void	ft_stackfree(t_list	**stack);
int		ft_distance_to_nbr(t_list	**stack, int	i);
void	ft_index(t_list	**stack);

void	ft_simplesort(t_list	**stack_a,t_list	**stack_b);
void	ft_radix(t_list	**stack_a, t_list	**stack_b);
void	ft_sort_three2(t_list	**stack_a,t_list	*top,int min);

int		push_function(t_list	**stack_to, t_list	**stack_from);
int		pb(t_list	**stack_a, t_list	**stack_b);
int		pa(t_list	**stack_a, t_list	**stack_b);

int		reverse_function(t_list	**stack);
int		rra(t_list	**stack_a);
int		rrb(t_list	**stack_b);
int		rrr(t_list	**stack_a, t_list	**stack_b);

int		rotate_function(t_list	**stack);
int		rb(t_list **stack_b);
int		ra(t_list **stack_a);
int		rr(t_list **stack_a, t_list **stack_b);

int		swap_function(t_list	**stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);


#endif