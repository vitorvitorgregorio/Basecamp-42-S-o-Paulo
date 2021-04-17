/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:30:19 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/15 16:11:46 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int is_printable;

	i = 0;
	is_printable = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			is_printable = 0;
			break ;
		}
		i++;
	}
	return (is_printable);
}
