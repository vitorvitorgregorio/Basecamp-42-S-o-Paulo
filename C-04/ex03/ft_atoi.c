/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:23:36 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/17 01:51:12 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_space(char c)
{
	return ((c == '\n' || c == '\t' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ') ? 1 : 0);
}

int		ft_atoi(char *str)
{
	int sign;
	int numbers;

	sign = 1;
	numbers = 0;
	while (ft_space(*str))
		str++;
	while (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? sign * -1 : sign * 1;
	while (*str >= '0' && *str <= '9')
		numbers = numbers * 10 + (*str++ - '0');
	return (numbers * sign);
}
