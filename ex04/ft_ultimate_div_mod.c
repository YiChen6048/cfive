/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:35:29 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/09 16:02:17 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	if (b == 0 || *b == 0) 
		return;

	int temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

int main()
{
	int x = 10;
	int y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("x (quotient) = %d, y (remainder) =  %d\n", x, y);
	return 0;
}
