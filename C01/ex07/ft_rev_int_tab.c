/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 06:45:10 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/11 03:08:34 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size-1-i]);
		i++;
	}
}

int main (void)
{
	int i = 0;
	int tab[10] = {13,234234432,15,4,44444,6,7,8,9,-23432343};

	for(; i < 10; i++)
	{
		printf("%i ", tab[i]);
	}
	printf("\n");
	i=0;

	ft_rev_int_tab(tab, 10);
	for(; i < 10; i++)
	{
		printf("%i ", tab[i]);
	}
	printf("\n");

}
