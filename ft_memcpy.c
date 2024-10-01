/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:49:30 by nrey              #+#    #+#             */
/*   Updated: 2024/10/01 16:02:52 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dst, const void *src, size_t n)
{
	void *srdst = dst;
	
	if (dst == 0 || src == 0)
		return (0);
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (srdst);
}
