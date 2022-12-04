#ifndef RUSH_H
#define RUSH_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_get_size(char *str);
int		ft_size(char *str, int size);
char	**ft_init(char *str, int size);
void	ft_print_tab(char **tab, int size);
int		ft_solve(char **tab, int size);
#endif