/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:02:20 by eguler            #+#    #+#             */
/*   Updated: 2022/01/06 13:32:08 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 127 || c < 32)
		return (0);
	return (1);
}
/*
int main()
{
	char	c;
	c = 31;
	printf("%d", ft_isprint(c));
}
*/
