/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:16:49 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/11 23:51:10 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <limits.h>
# include <stdlib.h>

void    *ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strcpy(char *dest, const char *src);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *src);
int		ft_strcmp(const char *s1, const char *s2);

# endif
