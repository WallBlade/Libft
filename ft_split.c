/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:21:08 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/06 18:04:08 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *str, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
		{
			count++;
			while (str[i] && str[i] != sep)
				i++;
		}
	}
	return (count);
}

static size_t	ft_wordlen(char const *str, char sep, int i)
{
	size_t	len;

	len = 0;
	while (str[i] && str[i] != sep)
	{
		i++;
		len++;
	}
	return (len);
}

static char	**ft_freetab(char **s, size_t n)
{
	while (n > 0)
	{
		free(s[n]);
		n--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**split;

	split = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < ft_countwords(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		k = 0;
		split[j] = (char *)malloc(sizeof(char) * (ft_wordlen(s, c, i) + 1));
		if (!split[j])
			return (ft_freetab(split, j), NULL);
		while (s[i] && s[i] != c)
			split[j][k++] = s[i++];
		split[j][k] = '\0';
	}
	split[j] = 0;
	return (split);
}

// int main()
// {
// 	char *str = "  tripouille  42  ";
// 	char sep = ' ';
// 	char **split = ft_split(str, sep);
// 	int i = 0;
// 	printf("wrd_count = %ld\n", ft_countwords(str, sep));
// 	//printf("%ld\n", ft_wordlen(str, sep, 9));
// 	// while (split[i])
// 	// {
// 	// 	printf("%s\n", split[i]);
// 	// 	i++;
// 	// }
// 	return (0);
// }
