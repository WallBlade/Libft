/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:21:08 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/15 18:00:57 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_issep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

size_t	ft_countwords(char const *str, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_issep(str[i], sep))
			i++;
		if (str[i] && !ft_issep(str[i], sep))
		{
			count++;
			while (str[i] && !ft_issep(str[i], sep))
				i++;
		}
	}
	return (count);
}

size_t	ft_wordlen(char const *str, char sep, int i)
{
	size_t	len;

	len = 0;
	while (str[i] && !ft_issep(str[i], sep))
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**split;

	split = (char **)malloc(sizeof(char *) * ft_countwords(s, c) + 1);
	if (!split)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < ft_countwords(s, c))
	{
		while (s[i] && ft_issep(s[i], c))
			i++;
		k = 0;
		split[j] = (char *)malloc(sizeof(char) * ft_wordlen(s, c, i));
		if (!split[j])
			return (NULL);
		while (s[i] && !ft_issep(s[i], c))
			split[j][k++] = s[i++];
		split[j][k] = '\0';
	}
	split[j] = 0;
	return (split);
}

/*int main()
{
	char *str = "coucou soundous";
	char sep = 'o';
	char **split = ft_split(str, sep);
	int i = 0;
	printf("wrd_count = %ld\n", ft_countwords(str, sep));
	//printf("%ld\n", ft_wordlen(str, sep, 9));
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}*/
