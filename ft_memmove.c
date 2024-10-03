/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:35:19 by nrey              #+#    #+#             */
/*   Updated: 2024/10/03 20:01:54 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*srdst;
	const unsigned char	*srccpy;

	srdst = (unsigned char *)dst;
	srccpy = (unsigned char *)src;
	if (srdst == 0 || srccpy == 0)
		return (0);
	if (srccpy < srdst && srdst < srccpy + n)
	{
		srdst += n;
		srccpy += n;
		while (n--)
			*(--srdst) = *(--srccpy);
	}
	else
	{
		while (n--)
			*srdst++ = *srccpy++;
	}
	return (dst);
}
