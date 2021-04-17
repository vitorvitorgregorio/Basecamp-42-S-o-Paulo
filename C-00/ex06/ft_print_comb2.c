/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:22:12 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/14 19:40:06 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char n1;
	char n2;

	n1 = 0;
	n2 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			ft_putchar(n1 / 10 + '0');  
			ft_putchar(n1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(n2 / 10 + '0'); 
			ft_putchar(n2 % 10 + '0'); 
			if (n1 != 98) 
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}
