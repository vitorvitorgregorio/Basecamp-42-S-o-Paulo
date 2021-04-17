/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:19:20 by aguilher          #+#    #+#             */
/*   Updated: 2021/04/12 01:07:15 by aguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_grid(char **matrix, int nn)
{
	int x;
	int y;

	x = 0;
	while (x < nn)
	{
		y = 0;
		while (y < nn)
		{
			ft_putchar(matrix[x][y]);
			if (y != nn - 1)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

int		main(int ac, char **av)
{
	char **matrix;
	char **solved_matrix;
	int height;
	//int N;
	if (ac < 2)
	{
		ft_print_error();
		return (1);
	}
	//ft_print_grid(array, N);
	height = ft_validate(av[1]);
	//printf("str: %s, height: %d", av[1], height);
	if (height > 4 || height == 0)
	{
		ft_print_error();
		return (1);
	}
	//printf("av[1]: %s\n",av[1]);
	//printf("reversed av[1]: %s\n",ft_rev_arr(av[1]));
	//printf("av[1]: %s\n",av[1]);
	matrix = ft_set_grid(4); //,av[1]);
	solved_matrix = ft_resolve(matrix, av[1], 0, 0);
	ft_print_grid(solved_matrix, 4);
	free (solved_matrix);
	return (0);
}
