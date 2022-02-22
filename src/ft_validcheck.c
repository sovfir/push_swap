/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:00:37 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/17 18:40:53 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_repeatcheck(int	number,t_arguments *data, int i)
{
	i++;
	while (data->argv[i])
	{
		if (ft_atoi(data->argv[i]) == number)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[0] == '-')
		i++;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_validcheck(t_arguments	*data)
{
	long	number;

	data->i = 1;
	if (data->argc == 2)
		exit(EXIT_FAILURE);
	while (data->argv[data->i])
	{
		number = ft_atoi(data->argv[data->i]);
		if (!ft_isnum(data->argv[data->i]))
			ft_error("ERROR", 1);
		if (ft_repeatcheck(number, data, data->i))
			ft_error("ERROR", 1);
		if (number < INT32_MIN || number > INT32_MAX)
			ft_error("ERROR", 1);
		data->i++;
	}
}