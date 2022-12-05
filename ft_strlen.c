/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:55:02 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/22 13:25:01 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str[i] == 0)
	{
		return (0);
	}
	else
	{
		while (str[i])
		{
			i++;
		}
		return (i);
	}
}
//
//#include <stdio.h>
//
//int main()
//{
//	char *spotify = "zoui";
//	printf("%d", ft_strlen(spotify));
//}
