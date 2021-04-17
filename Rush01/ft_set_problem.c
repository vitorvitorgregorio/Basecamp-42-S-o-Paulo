/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_problem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 05:01:05 by aguilher          #+#    #+#             */
/*   Updated: 2021/04/12 00:51:38 by aguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**ft_set_grid(int nn)//, char *param)
{
	char **grid;
	int i;
	int j;

	if (NULL == (grid = (char **)malloc(sizeof(char) * nn)))
		return (0);
	i = -1;
	while (++i < nn)
	{
		if (NULL == (grid[i] = (char *)malloc(sizeof(char) * nn)))
			return (0);
	}
	i = -1;
	while (++i < nn)
	{
		j = -1;
		while (++j < nn)
		{
			grid[i][j] = '0';
		}
	}
	return (grid);
}
