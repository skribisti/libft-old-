/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:50:45 by norabino          #+#    #+#             */
/*   Updated: 2024/11/12 16:18:41 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((char *)s)[i] = c;
	return (s);
}
/*
int main(void)
{
	int tab[] = {54, 85, 20, 63, 21}; 

	printf("Og func : %p\n", memset(tab, 1, 5));
	int	i = 0;
	while (tab[i])
	{
		//printf("%d,\n", tab[i]);
		i++;
	}

	i = 0;
	printf("My func : %p\n", ft_memset(tab, 1, 5));
	while (tab[i])
	{
		//printf("%d,\n", tab[i]);
		i++;
	}
}
*/