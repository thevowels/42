/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 03:28:10 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/23 03:34:42 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct rectangle{
	float length, height;
	double area;
};

void area(struct rectangle *);
void printRect(struct rectangle);
int main()
{
	struct rectangle rect;
	rect.length = 7;
	rect.height = 6;
	area(&rect);
	printRect(rect);

}

void area(struct rectangle *rect)
{
	rect->area = rect->length * rect->height;	
}

void printRect(struct rectangle rect)
{
	printf("Length: %f\n", rect.length);
	printf("Height: %f\n", rect.height);
	printf("Area :  %lf\n", rect.area);
}
