/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbougher <sbougher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:35:44 by sbougher          #+#    #+#             */
/*   Updated: 2022/03/28 19:26:27 by sbougher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

static int	check_char(char a, char b)
{
	if (a == b)
		return (1);
	return (0);
}

static unsigned int	word_nb(char const *s, char c)
{
	unsigned int	i;
	unsigned int	mots;

	if (s[0] == '\0' && c == '\0')
		return (1);
	i = 0;
	mots = 0;
	while (s[i] != '\0')
	{
		if (check_char(s[i], c) && s[i] != '\0')
		{
			while (check_char(s[i], c) && s[i] != '\0')
				i = i + 1;
			mots = mots + 1;
		}
		if (i == ft_strlen(s))
			break ;
		i = i + 1;
	}
	if (s[0] == c)
		mots = mots - 1;
	if (s[ft_strlen(s) - 1] == c)
		mots = mots - 1;
	return (mots + 1);
}

static char	*copie(char const *s, char c, unsigned int i)
{
	unsigned int	j;
	unsigned int	tmp;
	char			*str;

	j = 0;
	tmp = i;
	while (s[i] != c && s[i] != '\0')
	{
		i = i + 1;
		j = j + 1;
	}
	str = malloc((j + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = tmp;
	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		str[j] = s[i];
		i = i + 1;
		j = j + 1;
	}
	str[j] = '\0';
	return (str);
}

static char	**fastexit(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
	{
		free(strs[i]);
		i = i + 1;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**strs;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	strs = ft_calloc((word_nb(s, c) + 1), sizeof(char *));
	if (strs == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (check_char(s[i], c) == 1)
			i = i + 1;
		if (i < ft_strlen(s))
		{
			strs[j] = copie(s, c, i);
			if (strs[j] == NULL)
				return (fastexit(strs));
			i = i + ft_strlen(strs[j]);
			j = j + 1;
		}
	}
	return (strs);
}
