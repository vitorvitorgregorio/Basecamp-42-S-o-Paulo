/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:09:30 by acarneir          #+#    #+#             */
/*   Updated: 2021/04/04 23:37:18 by vgregori         ###   ########.fr       */
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
		ft_putchar('A');
	}
	else if (i == (y - 1) & j == 0)
	{
		ft_putchar('C');
	}
	else if (i == (y - 1) & j == (x - 1))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}
