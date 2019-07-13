/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_below_1000.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrlemai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:13:57 by cyrlemai          #+#    #+#             */
/*   Updated: 2019/06/23 16:19:40 by cyrlemai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int			ft_print0to9(char *str, char *before, t_dict_entry *dict)
{
	char	repr[2];
	char	*name;

	if (str[0] == '0')
		return (1);
	repr[0] = str[0];
	repr[1] = '\0';
	name = get_dict(repr, dict);
	if (name == NULL)
		return (0);
	ft_print_with_particle(name, before);
	return (1);
}

int			ft_print0to99(char *str, int size, char *before, t_dict_entry *dict)
{
	char	repr[3];
	char	*name;

	if (size < 2)
		return (ft_print0to9(str, before, dict));
	if (str[0] == '0')
		return (ft_print0to9(&str[1], before, dict));
	repr[0] = str[0];
	repr[1] = str[1];
	repr[2] = '\0';
	name = get_dict(repr, dict);
	if (name != NULL)
	{
		ft_print_with_particle(name, before);
		return (1);
	}
	repr[1] = '0';
	name = get_dict(repr, dict);
	if (name == NULL)
		return (0);
	ft_print_with_particle(name, before);
	return (ft_print0to9(&str[1], "-", dict));
}

int			ft_print0to999(char *str, int size, char *before,
					t_dict_entry *dict)
{
	char	*name;

	if (size < 3)
		return (ft_print0to99(str, size, before, dict));
	if (str[0] == '0')
		return (ft_print0to99(&str[1], 2, before, dict));
	if (ft_print0to9(&str[0], before, dict) == 0)
		return (0);
	name = get_dict("100", dict);
	if (name == NULL)
		return (0);
	ft_print_with_particle(name, " ");
	return (ft_print0to99(&str[1], 2, " ", dict));
}
