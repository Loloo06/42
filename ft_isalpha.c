/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:59:41 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/22 13:26:56 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int impt)
{
	if (((impt >= 65) && (impt <= 90)) || ((impt >= 97) && (impt <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
//
//#include <stdio.h>
//int main()
//{
//	int spotify = 'Z';
//	printf("%d", ft_isalpha(spotify));
//}
