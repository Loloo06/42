/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:21:57 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/26 14:32:33 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
/*
int	main()
{
	char str[4] = "TEST";
	char *dst = calloc(5, sizeof(char));
	printf("%d\n", ft_strlcpy(dst, str, 2));
	printf("%s, %s\n", dst, str);
	return 0;
}*/