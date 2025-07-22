/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:22:29 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/23 01:01:43 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Type definition and variable declaration together
*/

#include <stdio.h>
#include <string.h>

struct book{
	char title[20];
	char author[20];
	double price;
	int pages;
} book1;

int main(void)
{
	book1.pages = 230;
	strcpy(book1.title, "All about C");
	printf("Title is : %s\n", book1.title);
	printf("There are : %d pages.\n", book1.pages);
}
