/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-d <nsouza-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 21:55:53 by nsouza-d          #+#    #+#             */
/*   Updated: 2021/04/04 21:56:11 by nsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_rectangle(int x, int y, int i, int j);
void	ft_print_outer_rectangle(int x, int y, int i, int j);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j <= x)
		{
			ft_print_rectangle(x, y, i, j);
			j++;
		}
		i++;
	}
}

void	ft_print_rectangle(int x, int y, int i, int j)
{
	if (j != x)
	{
		if (i == 0 | i == (y - 1) | j == 0 | j == (x - 1))
		{
			ft_print_outer_rectangle(x, y, i, j);
		}
		else
		{
			ft_putchar(' ');
		}
	}
	else
	{
		ft_putchar('\n');
	}
}

void	ft_print_outer_rectangle(int x, int y, int i, int j)
{
	if (i == 0 & j == 0)
	{
		ft_putchar('A');
	}
	else if (i == 0 & j == (x - 1))
	{
		ft_putchar('C');
	}
	else if (i == (y - 1) & j == 0)
	{
		ft_putchar('C');
	}
	else if (i == (y - 1) & j == (x - 1))
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}
}
