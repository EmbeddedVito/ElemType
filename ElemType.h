/*
 * ElemType.h
 *
 *      Author: vitomannone
 *
 * This software module allows to implement a project that is data type independent:
 * it is sufficient to define different implementation in the .c file and different
 * data types in this file to handle different data types for your project. This
 * module handles every data type dependent function, so the main code does not have
 * to change.
 *
 * This module does not let you define different data types for a single project.
 */
#ifndef ELEMTYPE_H_
#define ELEMTYPE_H_

#include <stdio.h> //for elemWrite() function

/*
 * Define your data type here
 * Note:
 * This is just an example
 */
#define NAME_LEN 16
struct UserDataStruct_t {
	unsigned char age;
	char name[NAME_LEN];
	double height;
	double weight;
};

typedef struct UserDataStruct_t ElemType_t;
/* End of data type definition */

/*
 * Returns a value > 0 if el1 is greater than el2, value = 0 if inputs are equal, value < 0 if el1 < el2
 * No control of NULL value inputs
 */
int elemCompare(const ElemType_t *el1, const ElemType_t *el2);

/*
 * Returns a copy of the input elements
 */
void elemCopy(const ElemType_t *src, ElemType_t *dest);

/*
 * Swaps the elements content
 */
void elemSwap(ElemType_t *el1, ElemType_t *el2);

/*
 * Free the memory allocated for the element
 */
void elemDel(ElemType_t *el);

/*
 * Print element on file
 */
void elemWrite(const ElemType_t *el, FILE *f);


#endif /* ELEMTYPE_H_ */
