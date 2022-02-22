/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:14:15 by gjacinta          #+#    #+#             */
/*   Updated: 2021/10/11 16:14:18 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_ispace(const char *s)
{
	while (((*s == ' ') || (*s == '\t') || (*s == '\n')
			 || (*s == '\v') || (*s == '\f') || (*s == '\r')))
		s++;
	return ((char *)s);
}

int	ft_atoi(const char *s)
{
	int			sign;
	long int	n;
	long int	prev;

	n = 0;
	sign = 1;
	s = ft_ispace(s);
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		prev = n;
		n = n * 10 + sign * (*s - '0');
		if (sign == 1 && prev > n)
			return (-1);
		else if (sign == -1 && prev < n)
			return (0);
		s++;
	}
	return (n);
}
