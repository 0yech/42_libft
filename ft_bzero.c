/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:39:58 by nrey              #+#    #+#             */
/*   Updated: 2024/10/03 18:02:53 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*p;

	p = (unsigned char *)s;
	if (n != 0)
	{
		while (n--)
			*p++ = 0;
	}
}
