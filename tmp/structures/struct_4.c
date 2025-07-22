/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 01:08:56 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/23 01:13:49 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Structure Pointers
*/

#include <stdio.h>
#include <string.h>

struct Book{
	char title[20];
	char author[20];
	int book_id;
};

void printBook( struct Book *book);

int main(void)
{
	struct Book Book1;
	struct Book *Book2;

	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	Book1.book_id = 6495407;

	Book2 = &Book1;

	printBook(Book2);
	strcpy(Book1.title, "ANSI C Programming");
	printf("-----------------------\n");
	printBook(Book2);
	strcpy(Book2->title, "ANSI C ");
	printf("-----------------------\n");
	printBook(Book2);
}

void printBook(struct Book *book)
{
	printf("Book Title: %s\n", book->title);
	printf("Author is : %s\n", book->author);
	printf("Book ID: %i\n", book->book_id);
}
