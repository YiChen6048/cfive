/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:51:28 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/08 14:58:15 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = 5;
	int y = 10;

	printf("before: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("after: x = %d, y = %d\n", x, y);

	return 0;
}
