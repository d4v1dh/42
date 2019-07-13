/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 15:23:22 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/23 18:43:44 by cyrlemai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char		*ft_get_power_of_1000(int power, t_dict_entry *dict)
{
	char	repr[128];
	int		i;
	char	*name;

	repr[0] = '1';
	if (power < 1 || power > 41)
		return (NULL);
	i = 1;
	while (i <= power)
	{
		repr[i * 3 - 2] = '0';
		repr[i * 3 - 1] = '0';
		repr[i * 3] = '0';
		++i;
	}
	repr[power * 3 + 1] = '\0';
	name = get_dict(repr, dict);
	if (name == NULL)
		return (NULL);
	return (name);
}

int			ft_is_zero(char *str, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (str[i] != '0')
		{
			return (0);
		}
		++i;
	}
	return (1);
}

int			ft_printnbr(char *str, char *before, t_dict_entry *dict)
{
	int		len;
	int		next_small_len;
	int		power;
	char	*power_name;

	len = ft_strlen(str);
	power = (len - 1) / 3;
	next_small_len = (len - 1) % 3 + 1;
	if (ft_is_zero(str, next_small_len) == 0)
	{
		power_name = ft_get_power_of_1000(power, dict);
		if (power > 0 && power_name == NULL)
			return (0);
		if (ft_print0to999(str, next_small_len, before, dict) == 0)
			return (0);
		if (power > 0)
			ft_print_with_particle(power_name, " ");
	}
	if (power > 0)
		return (ft_printnbr(&str[next_small_len], " ", dict));
	return (1);
}

int			ft_print_zero(t_dict_entry *dict)
{
	char	*name;

	name = get_dict("0", dict);
	if (name == NULL)
		return (0);
	ft_putstr(name);
	return (1);
}
