/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkramer <mkramer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:50:54 by mkramer           #+#    #+#             */
/*   Updated: 2022/12/04 11:36:55 by mkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSH_H
# define RUSH_H

int		start_board(int *input);
int		check_syntax(char *input);
int		check_input(char *arg, int *input);
void	ft_putchar(char c);
void	print(int board[4][4]);
int		check_col_up(int board[4][4], int col, int num);
int		check_col_down(int board[4][4], int col, int num);
int		check_row_left(int board[4][4], int row, int num);
int		check_row_right(int board[4][4], int row, int num);
int		check_board(int board[4][4], int *inner_num);
int		check_board(int board[4][4], int *inner_num);
int		find_zero(int board[4][4], int *row, int *col);
int		safe_row(int board[4][4], int row, int num);
int		check_safe(int board[4][4], int row, int col, int num);
int		create(int board[4][4], int *input);
#endif