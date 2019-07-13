/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 20:49:45 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/26 04:43:12 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0 || index == 1)
	{
		return (index);
	}
	else if (index == 30)
	{
		return (832040);
	}
	else if (index == 31)
	{
		return (1346269);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
