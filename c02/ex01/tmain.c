/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:47:33 by ccavagli          #+#    #+#             */
/*   Updated: 2021/07/06 20:23:10 by ccavagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *srci, unsigned int n);

int	main(void)
{
	char	*src;
	char	dest[10];
	char	*t;

	src = "Testee";
	t = ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
	printf("%s\n", t);
	printf("%s\n", &t[7]);
	return (0);
}
