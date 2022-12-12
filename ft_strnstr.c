/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:37:24 by lpollino          #+#    #+#             */
/*   Updated: 2022/12/05 12:47:48 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str2[i] == 0)
		return ((char *)str1);
	while (str1[i] != '\0' && len != 0)
	{
		j = 0;
		while (str1[i + j] == str2[j] && len > (i + j))
		{
			j++;
			if (ft_strlen(str2) == j)
				return ((char *)str1 + i);
		}
		i++;
	}
	return (NULL);
}
