/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:33:17 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/15 16:07:16 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int strup;

	strup = 0;
	while (str[strup] != '\0')
	{
		if (str[strup] >= 'a' && str[strup] <= 'z')
		{
			str[strup] = str[strup] - 32;
		}
		strup++;
	}
	return (str);
}
