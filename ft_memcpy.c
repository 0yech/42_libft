/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:49:30 by nrey              #+#    #+#             */
/*   Updated: 2024/10/04 23:42:11 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (n == 0 || dst == src)
		return (dst);
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	while (n--)
		*dest++ = *source++;
	return (dst);
}
