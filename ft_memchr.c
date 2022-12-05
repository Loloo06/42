/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:18:12 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/29 15:18:15 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	size_t	i;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
