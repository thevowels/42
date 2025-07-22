/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 01:23:30 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/23 01:46:16 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Pasing Struct as Pointer
*/

#include <stdio.h>

struct Rectangle{
	int length;
	int height;
	int area;
};

void area(struct Rectangle *rect);

void printRect(struct Rectangle);

int main(void)
{
	struct Rectangle rect;

	rect.length = 7;
	rect.height = 6;
	area(&rect);
	printRect(rect);
}

void area(struct Rectangle *rect)
{
	rect->area = rect->length * rect->height;
}
void printRect(struct Rectangle rect)
{
	printf("Length: %i\n", rect.length);
	printf("Heigt:  %i\n", rect.height);
	printf("Area:   %i\n", rect.area);
}
