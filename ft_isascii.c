/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:42:23 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/22 13:26:53 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int impt)
{
	if ((impt >= 0) && (impt <= 127))
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
//	int spotify = 9;
//	printf("%d", ft_isascii(spotify));
//}
