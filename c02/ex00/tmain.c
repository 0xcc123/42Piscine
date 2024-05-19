/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:47:33 by ccavagli          #+#    #+#             */
/*   Updated: 2021/07/05 12:47:47 by ccavagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	dest[6];
	char	*t;

	src = "Teste";
	t = ft_strcpy(dest, src);
	printf("%s", t);
	return (0);
}
