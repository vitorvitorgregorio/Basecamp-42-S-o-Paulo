/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:57:44 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/12 20:19:30 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char um;
	char dois;
	char tres;

	um = '0' - 1;
	while (++um <= '9')
	{
		dois = um;
		while (++dois <= '9')
		{
			tres = dois + 1;
			while (tres <= '9')
			{
				ft_putchar(um);
				ft_putchar(dois);
				ft_putchar(tres);
				if (um != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				tres++;
			}
		}
	}
}
