/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skycraper_backtrack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:20:43 by aguilher          #+#    #+#             */
/*   Updated: 2021/04/12 01:09:40 by aguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		is_valid_constraint(char elem, char *list_of_skyscrapers, int nn)
{
	int i;
	char max_height;
	char quantity_of_skyscrapers;
	int list_complete;

	i = 0;
	while (list_of_skyscrapers[i] != '\0')
	{
		if (list_of_skyscrapers[i] == '0')
			return (1);
		i++;
	}
	if (i != nn)
		return (0);
	i = 0;
	max_height = '0';
	quantity_of_skyscrapers = '0';
	list_complete = 1;
	while (i < nn)
	{
		if (list_of_skyscrapers[i] != '0')
		{
			if (max_height < list_of_skyscrapers[i])
			{
				max_height = list_of_skyscrapers[i];
				quantity_of_skyscrapers++;
			}
			else
				list_complete = 0;
		}
		i++;
	}
	if (elem != quantity_of_skyscrapers && list_complete)
		return (0);
	return (1);
}

int		ft_validate_matrix(char **matrix, char *cnst)
{
	int nn;
	int i;
	int j;
	char *lx;
	char *ly;
	
	nn = ft_get_dim(cnst);
	if (!(lx = (char *)malloc(sizeof(char *) * nn)))
		return (0);
	if (!(ly = (char *)malloc(sizeof(char *) * nn)))
		return (0);
	i = 0;
	while (i < nn)
	{
		j = 0;
		while (j < nn)
		{
			ly[j] = matrix[j][i];
			lx[j] = matrix[i][j];
			j++;
		}
		//printf("ly = %s\n", ly);
		//printf("pos 12 str on: %c\n",*((cnst + i)));
		if (!(is_valid_constraint(*((cnst + i)), ly, nn)) ||
			!(is_valid_constraint(*((cnst + i + nn)), ft_rev_arr(ly), nn)) ||
			!(is_valid_constraint(*((cnst + i + 2 * nn)), lx, nn))
			|| !(is_valid_constraint(*((cnst + i + 3 * nn)), ft_rev_arr(lx), nn)))
		{
			return (0);
		}
		i++;
	}
	free (lx);
	free (ly);
	return (1);
}

char		**ft_resolve(char **matrix, char *cnst, int x, int y)
{
	int i;
	int max_dim;
	int next[2];
	char prev_xy;
	char **next_solve;
	
	if (!(ft_validate_matrix(matrix, cnst)))
	{
		//printf("ERRADO eh correto");
		return (0);
	}
	max_dim = ft_get_dim(cnst);
	if (x > (max_dim - 1))
		return (matrix);
	if (y >= max_dim - 1)
	{
		next[1] = 0;
		next[0] = x + 1;
	}
	else
	{
		next[1] = y + 1;
		next[0] = x;
	}
	//printf("sky... l95: height = %d \n", ft_get_height(cnst));
	//printf("sky... l95: x = %d y = %d \n", next[0], next[1]);
	i = 1;
	while (i < ft_get_height(cnst))
	{
		prev_xy = matrix[x][y];
		matrix[x][y] = i + '0';
		next_solve = ft_resolve(matrix, cnst, next[0], next[1]);
		//printf("matrix = %c\n", matrix[i][1]);
		//printf("next_solve = %c\n", next_solve[x][y]);
		if (next_solve != 0)
		{
			//printf("if next_solve: x = %d y = %d \n", next[0], next[1]);
			return (next_solve);
		}
		matrix[x][y] = prev_xy;
		i++;
	}
	return (0);
}
