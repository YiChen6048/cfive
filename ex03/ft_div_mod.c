/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:17:03 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/08 17:32:02 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0){
		*div = a / b;
		*mod = a % b;

	}
}

int main()
{
	int x = 10, y = 3;
	int div_result, mod_result;

	ft_div_mod(x, y, &div_result, &mod_result);

	printf("Remainder: %d, modulus: %d\n", div_result, mod_result);

	return 0;
}
