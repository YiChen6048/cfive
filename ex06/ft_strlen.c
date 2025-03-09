/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:06:40 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/09 18:38:08 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	return count;
}

int main()
{
	char test[] = "Hello, World!";
	printf("Length: %d\n",ft_strlen(test));
	return 0;
}
