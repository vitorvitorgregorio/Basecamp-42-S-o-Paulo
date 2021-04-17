/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:18:06 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/15 16:13:31 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int b;
	int is_num;

	b = 0;
	is_num = 1;
	while (str[b] != '\0')
	{
		if (str[b] < '0' || str[b] > '9')
		{
			is_num = 0;
			break ;
		}
		b++;
	}
	return (is_num);
}
