/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:49:51 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/15 16:10:30 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int low;

	low = 0;
	while (str[low] != '\0')
	{
		if (str[low] >= 'A' && str[low] <= 'Z')
			str[low] += 32;
		low++;
	}
	return (str);
}
