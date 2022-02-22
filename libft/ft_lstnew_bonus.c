/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:10:54 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/18 18:15:26 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*rtn;

	rtn = (t_list *)malloc(sizeof(*rtn));
	if (!rtn)
		return (NULL);
	rtn->content = content;
	rtn->index = -1;
	rtn->next = NULL;
	return (rtn);
}
