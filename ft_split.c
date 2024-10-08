/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:36:47 by nrey              #+#    #+#             */
/*   Updated: 2024/10/08 17:11:28 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*wordcpy(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static int	fill_result(char **result, const char *s, char c, int i)
{
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = -1;
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if (s[i] == c)
				result[j] = wordcpy(s, start, i);
			else
				result[j] = wordcpy(s, start, i + 1);
			if (!result[j])
				return (0);
			j++;
			start = -1;
		}
		i++;
	}
	result[j] = NULL;
	return (1);
}

static int	countwords(char const *s, char c)
{
	int	insideword;
	int	count;

	count = 0;
	insideword = 0;
	while (*s)
	{
		if (*s != c && insideword == 0)
		{
			insideword = 1;
			count++;
		}
		else if (*s == c)
			insideword = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		n;

	if (!s)
		return (NULL);
	n = countwords(s, c);
	result = (char **)malloc((n + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!fill_result(result, s, c, 0))
		return (NULL);
	return (result);
}
