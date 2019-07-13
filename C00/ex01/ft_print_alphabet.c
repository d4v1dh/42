/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 21:15:55 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/08 14:51:46 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_alphabet(void)
{
	char d;

	d = 'a';
	while (d <= 'z')
	{
		ft_putchar(d);
		d++;
	}
}
