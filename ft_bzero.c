/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:33:55 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/22 13:27:04 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_bzero(void *s, size_t n)
{
	char	*vtr;
	char	ch;

	vtr = (char *)s;
	ch = 0;
	while (n--)
		vtr[n] = ch;
	return (*vtr);
}
/*int main()
{
	char buffer[80];
	printf("%d \n", bzero(buffer, 80))
	printf("%d ", ft_bzero(buffer, 80))
}
*/