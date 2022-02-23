/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:01:25 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/23 16:18:17 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*t;
// 	t_list	*tmp;
// 	t = *lst;
// 	while (t)
// 	{
// 		tmp = t->next;
// 		ft_lstdelone(t, del);
// 		t = tmp;
// 	}
// 	*lst = NULL;
// }
