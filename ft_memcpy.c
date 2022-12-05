/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:07:18 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/29 14:07:23 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)dst;
	if (dst == 0 && src == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		s1[i] = *(unsigned char *)src;
		src++;
		i++;
	}
	return (dst);
}
