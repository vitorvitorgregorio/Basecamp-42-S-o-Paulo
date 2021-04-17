/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:14:07 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/14 21:53:17 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int v;

	i = 0;
	v = 0;
	while (str[i] != '\0')
	{
		if (v == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			v++;
		}
		else if (v > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if ((str[i] < 0 || str[i] > 9) &&
		(str[i] < 'A' || str[i] > 'Z') &&
		(str[i] < 'a' || str[i] > 'z'))
		{
			v = 0;
		}
		else
			v++;
		i++;
	}
	return (str);
}
