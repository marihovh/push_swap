/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:40:27 by marihovh          #+#    #+#             */
/*   Updated: 2023/02/02 18:13:14 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = ft_strlen(s1) + 1;
	ptr = malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr = ft_memcpy(ptr, s1, len);
	return (ptr);
}
