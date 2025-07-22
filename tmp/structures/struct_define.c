/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:18:19 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/23 00:21:53 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct book{
	char title[20];
	char author[20];
	double price;
	int pages;
};


int main(void)
{
	struct book book1 = {"ABC", "Dennnis", 123.40, 75};

	printf("Title : %s\n", book1.title);
	printf("Price : %lf\n", book1.price);
}
