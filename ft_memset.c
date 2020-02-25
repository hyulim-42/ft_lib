/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulim <hyulim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:16:56 by hyulim            #+#    #+#             */
/*   Updated: 2020/02/25 20:05:27 by hyulim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned	char	*ptr;
	unsigned	char	val;

	val = (unsigned char)c;
	ptr = (unsigned char*)b;
	while (len-- > 0)
		*ptr++ = val;
	return (b);
}
