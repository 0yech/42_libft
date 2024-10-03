/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:49:30 by nrey              #+#    #+#             */
/*   Updated: 2024/10/03 18:08:16 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*srdst;

	*srdst = dst;
	if (dst == 0 || src == 0)
		return (0);
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (srdst);
}
