/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 05:17:48 by aguilher          #+#    #+#             */
/*   Updated: 2021/04/11 22:50:33 by aguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	**ft_set_grid(int nn);

void	ft_print_error(void);

int		ft_validate(char *str);

int     ft_get_height(char *str);

int		ft_get_dim(char *str);

char	*ft_get_col(char **m, int nn, int row, int rev);

char	*ft_get_row(char **m, int nn, int col, int rev);

char    *ft_rev_arr(char *str);

char	**ft_resolve(char **matrix, char *cnst, int x, int y);

#endif
