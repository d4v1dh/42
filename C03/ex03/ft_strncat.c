/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 21:38:04 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/16 02:24:30 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (a < nb && src[a] != '\0')
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
