/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgregori <vgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:40:15 by vgregori          #+#    #+#             */
/*   Updated: 2021/04/15 18:26:11 by vgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int v;
	int is_alpha;

	v = 0;
	is_alpha = 1;
	while (str[v] != '\0')
	{
		if (!((str[v] >= 'a' && str[v] <= 'z')
					|| (str[v] >= 'A' && str[v] <= 'Z')))
		{
			is_alpha = 0;
			break ;
		}
		v++;
	}
	return (is_alpha);
}
