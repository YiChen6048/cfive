/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:53:52 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/10 16:52:22 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int left = 0;
	int right = size - 1;
	int temp;
	
	
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;

		left++;
		right--;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;

	ft_rev_int_tab(arr, size);

	for(int i = 0; i < size; i++)
		printf("%d", arr[i]);

	return 0;
}

