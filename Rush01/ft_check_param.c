/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 06:16:29 by aguilher          #+#    #+#             */
/*   Updated: 2021/04/11 20:38:21 by aguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_get_height(char *str)
{
	int height;

	height = (int)(*str - '0');
	while (*(str + 1))
	{
		if (*str < *(str + 1))
			height = (*(str + 1) - '0');
		str++;
	}
	return (height);
}

int		ft_get_dim(char *str)
{
	int c;
	int n;

	c = 0;
	n = 0;
	while (str[c])
	{
		if (str[c] >= '0' && str[c] <= '9')
			n++;
		c++;
	}
	if (n != c || n % 4 != 0)
		return (999999999);
	else
		return (n / 4);
}

void	ft_remove_space(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			j = i;
			while (str[j] == ' ' && str[j] != '\0')
				j++;
			str[i] = str[j];
			str[j] = ' ';
		}
		else
			i++;
	}
}

int		ft_validate(char *str)
{
	int i;
	int n;

	i = 0;
	ft_remove_space(str);
	n = ft_get_dim(str);
	if (n == 999999999)
		return (999999999);
	return (ft_get_height(str));
}
