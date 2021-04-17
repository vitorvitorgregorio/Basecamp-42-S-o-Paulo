/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:20:35 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/15 16:13:05 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int a;
	int is_lowercase;

	a = 0;
	is_lowercase = 1;
	while (str[a] != '\0')
	{
		if (str[a] < 'a' || str[a] > 'z')
		{
			is_lowercase = 0;
			break ;
		}
		a++;
	}
	return (is_lowercase);
}
