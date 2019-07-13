/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 19:53:30 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/26 20:26:47 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int			ft_word(char c, char before, char *charset)
{
	return (!(ft_separator(c, charset) && ft_separator(before, charset)));
}

int			ft_count_words(char *str, char *charset)
{
	int	cw;
	int	i;

	i = 0;
	cw = 0;
	while (str[i] != '\0')
	{
		if (ft_word(str[i],str[i - 1], charset) ||
				(!ft_separator(str[i], charset) && i == 0))
		{
			cw++;
			i++;
		}
		return (cw);
	}

}

int			*ft_size_words(char *str, char *charset)
{
	int	index;
	int	i;
	int	cw;
	int	sw;

	i = 0;
	cw = ft_count_words(str, charset);
	sw = malloc(cw * sizeof(int));
	while (i <= cw)
	{
		sw[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (!ft_separator(str[i], charset))
		{
			sw++;
		}
		else if (i > 0 && !ft_separator(str[i - 1], charset))
		{
			index++;
		}
		i++;
	}
	return (&sw);
}

char		**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;
	int		index;
	int		sw;

	words = malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
	sw = *ft_size_words(str, charset);
	index = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!ft_separator(str[i], charset))
		{
			if (i == 0 || ft_word(str[i], str[i - 1], charset))
			{
				words[index] = malloc(ft_size_words[index] * sizeof(char));
				words[index][j] = str[i];
				words[index][++j] = '\0';
			}
			else if (i > 0 && !ft_separator(str[i - 1], charset) && ++index)
			{
				j = 0;
			}
			words[ft_count_words(str, charset)] = 0;
			return (words);
		}
	}
}

#include <stdio.h>

int			main(void)
{
	char *str = "bonjoru testa asda ad a";
	char *charset = "s//";
	printf("%s", *ft_split(str, charset));
}
