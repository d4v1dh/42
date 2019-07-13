/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:03:31 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/21 11:09:43 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	long int;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * (-1);
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putchar((i % 10) + '0');
	}
	else
	{
		ft_putchar(i % 10 + '0');
	}
}
