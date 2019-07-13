/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 12:09:45 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/25 03:06:29 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_power(int nb, int power)
{
	int i;
	int r;

	i = 1;
	r = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		while (i < power)
		{
			r = r * nb;
			i++;
		}
		return (r);
	}
}
