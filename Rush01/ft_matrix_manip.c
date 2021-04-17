/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_manip.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:15:59 by aguilher          #+#    #+#             */
/*   Updated: 2021/04/11 22:57:18 by aguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_rev_arr(char *str)
{
	int l;
	char aux;
	int size;

	size = 0;
	while (str[size])
		size++;
	l = 0;
	while (l < size)
	{
		aux = str[l];
		str[l] = str[size - 1];
		str[size - 1] = aux;
		size--;
		l++;
	}
	return (str);
}
