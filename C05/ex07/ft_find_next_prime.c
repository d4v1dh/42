/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 11:04:37 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/26 04:29:05 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_prime(int nb)
{
	int c;

	c = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (c < nb && c < 46341)
	{
		if (nb % c == 0)
		{
			return (0);
		}
		c++;
	}
	return (1);
}

int			ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb) != 0)
		{
			return (nb);
		}
		else
		{
			nb++;
		}
	}
}
