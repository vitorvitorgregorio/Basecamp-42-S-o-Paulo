/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:06:25 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/15 16:12:34 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int v;
	int is_upercase;

	v = 0;
	is_upercase = 1;
	while (str[v] != '\0')
	{
		if (str[v] < 'A' || str[v] > 'Z')
		{
			is_upercase = 0;
			break ;
		}
		v++;
	}
	return (is_upercase);
}
