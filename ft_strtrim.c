/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:05:03 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/14 15:52:11 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_countset(char const *str, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_isset(set, str[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*trim;

	len = ft_strlen(s1) - ft_countset(s1, set) + 1;
	trim = (char *)malloc(sizeof(char) * len);
	if (!trim)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!ft_isset(set, s1[i]))
		{
			while (!ft_isset(set, s1[i]))
				trim[j++] = s1[i++];
		}
		i++;
	}
	trim[j] = '\0';
	return (trim);
}

/*int main()
{
	char *s1 = "coucou soundous";
	char *set = "cou";
	printf("og  str = %s\n", s1);
	printf("removed = %ld\n", ft_countset(s1, set));
	printf("trimmed = %s\n", ft_strtrim(s1, set));
	return (0);
}*/
