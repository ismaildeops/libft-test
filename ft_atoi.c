/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +#+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:22:00 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/10/12 18:22:00 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long	result;
	// if(str == NULL)
	// 	return 0;
	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = sign * -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (9223372036854775807 - (str[i] - '0')) / 10)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

#include<stdlib.h>
#include <stdio.h>
int main()
{
	// atoi(NULL);
	// printf("%d", atoi(NULL));
	// ft_atoi(NULL);
	// printf("%d", ft_atoi(NULL));
}