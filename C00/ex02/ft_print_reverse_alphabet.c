/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 23:17:58 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/08 14:50:44 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_reverse_alphabet(void)
{
	char d;

	d = 'z';
	while (d >= 'a')
	{
		ft_putchar(d);
		d--;
	}
}
