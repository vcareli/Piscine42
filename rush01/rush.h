/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/02 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSH_H
#define RUSH_H
void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_get_size(char *str);
int     ft_size(char *str, int size);
char    **ft_init(char *str, int size);
void    ft_print_tab(char **tab, int size);
int     ft_solve(char **tab, int size);
int     ft_resolv(char **tab, int n, int size);
int     ft_is_valid_value(char **tab, int x, int y, int size);
int     ft_height_col(char **tab, int x, int delta, int size);
int     ft_height_row(char **tab, int y, int delta, int size);
int     ft_is_duplicate(char **tab, int x, int y, int size);
#endif