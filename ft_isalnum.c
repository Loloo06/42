/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:12:40 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/22 14:44:30 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_isalnum(int inpt)
{
	if ((((inpt >= '0') && (inpt <= '9')) || ((inpt >= 'A')
				&& (inpt <= 'Z'))) || ((inpt >= 'a') && (inpt <= 'z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
//#include <stdio.h>
//int main()
//{
//	int spotify = 'M';
//	printf("%d", ft_isalnum(spotify));
//}
