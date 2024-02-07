/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbier <rbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:46:09 by rbarbier          #+#    #+#             */
/*   Updated: 2024/02/07 17:48:13 by rbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MAX_BUFFER_SIZE 1000

void	*ft_memmove(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	buffer[MAX_BUFFER_SIZE];

	if (dst == NULL && src == NULL)
		return (dst);
	if (len > MAX_BUFFER_SIZE)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buffer[i] = src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst[i] = buffer[i];
		i++;
	}
	return (dst);
}
