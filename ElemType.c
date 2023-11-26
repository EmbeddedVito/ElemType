/*
 * ElemType.c
 *      Author: vitomannone
 *
 *  Note:
 *  This is just an example of implementation: to handle your own data type
 *  rewrite the functions for your custom data type.
 */
#include "ElemType.h"

//return a value > 0 if el1 age is greater than el2 age, value = 0 if equal, value < 0 otherwise
int elemCompare(const ElemType_t *el1, const ElemType_t *el2) {
	unsigned char retval = (el1->age > el2->age) - (el1->age < el2->age);
	return retval;
}

//returns a copy of the input elements
void elemCopy(const ElemType_t *src, ElemType_t *dest) {
	if(src == NULL || dest == NULL) return;
	dest->age = src->age;
	dest->height = src->height;
	dest->weight = src->weight;
	for(int i = 0; i < NAME_LEN; i++) {
		dest->name[i] = src->name[i];
	}
}

//swaps the elements content
void elemSwap(ElemType_t *el1, ElemType_t *el2) {
	ElemType_t tmp = *el1;
	*el1 = *el2;
	*el2 = tmp;
}

//free the memory allocated for the element
void elemDel(ElemType_t *el) {
	(void)el;
}

//print element on file
void elemWrite(const ElemType_t *el, FILE *f) {
	fprintf(f, "%s is %d years old and is %.2fm tall and weigths %.1fKg", el->name, el->age, el->height, el->weight);
}
