/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:17:59 by nrey              #+#    #+#             */
/*   Updated: 2024/10/03 18:12:27 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	void	*start;

	start = b;
	if (!b)
		return (0);
	i = 0;
	while (len--)
		*(unsigned char *)b++ = (unsigned char)c;
	return (start);
}
