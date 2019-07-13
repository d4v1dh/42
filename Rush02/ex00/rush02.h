/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 17:02:54 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/24 03:22:33 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# define BUFFER_SIZE 4096
# define DICT_PATH "numbers.dict"
# include <stddef.h>

typedef struct	s_dict_entry
{
	char	*digits;
	char	*name;
}				t_dict_entry;

typedef struct	s_buffer
{
	char	mem[BUFFER_SIZE];
	int		i;
	int		len;
}				t_buffer;

int				create_entry(char *str, t_dict_entry *arrx);
char			*create_entry_name(char *s);
t_dict_entry	*ft_create_dict(t_dict_entry **dict, char *path);
t_dict_entry	*ft_fill_dict(char *path, t_dict_entry *dict);
t_dict_entry	*new_dict(char *path);
char			*get_dict(char *digits, t_dict_entry *dict);
void			del_dict(t_dict_entry *dict);
void			print_dict(t_dict_entry *dict);
int				ft_checknbr(char *str);
int				ft_is_zero(char *str, int size);
int				ft_print_zero(t_dict_entry *dict);
int				ft_printnbr(char *str, char *before, t_dict_entry *dict);
int				ft_print0to9(char *str, char *before, t_dict_entry *dict);
int				ft_print0to99(char *str, int size, char *before,
						t_dict_entry *dict);
int				ft_print0to999(char *str, int size, char *before,
						t_dict_entry *dict);
char			*ft_get_power_of_1000(int power, t_dict_entry *dict);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
void			ft_print_with_particle(char *name, char *particle);

#endif
