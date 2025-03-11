/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:58:51 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/11 15:28:45 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}

void print_array(int *tab, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
	printf("\n");
}

int main()
{
	int tab[] = {5, 3, 8, 1, 2};
	int size = sizeof(tab) / sizeof(tab[0]);

	printf("Before: ");
	print_array(tab, size);

	ft_sort_int_tab(tab, size);

	printf("After: ");
	print_array(tab, size);

	return 0;
}
