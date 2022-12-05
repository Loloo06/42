/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:42:31 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/22 13:26:45 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int inpt)
{
	if ((inpt <= 126) && (inpt >= 32))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
//#include <stdio.h>
//
//int main()
//{
//	int spotify = 0;
//	printf("%d", ft_isprint(spotify));
//}
