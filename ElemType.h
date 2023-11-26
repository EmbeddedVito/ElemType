/*
 * @file ElemType.h
 * @author Mannone Vito
 *
 * @brief This software implements data type dependent functions to make a project data-type independent.
 *
 * This software module allows to implement a project that is data type independent:
 * it is sufficient to define different implementation in the .c file and different
 * data types in this file to handle different data types for your project. This
 * module handles every data type dependent function, so the main code does not have
 * to change.
 *
 * This module does not let you define different data types for a single project.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
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
 * @brief Compare two elements.
 * Returns a value > 0 if el1 is greater than el2, value = 0
 * 		if inputs are equal, value < 0 if el1 < el2
 *
 * @param el1, pointer to the first element
 * @param el2, pointer to the second element to be compared
 * @return int, a value > 0 if el1 > el2, value == 0 if el1 == el2,
 * 		value < 0 otherwise
 */
int elemCompare(const ElemType_t *el1, const ElemType_t *el2);

/*
 * @brief Returns a copy of the input elements
 *
 * @param src, pointer to the element to be copied
 * @params dest, pointer in which the element will be copied
 */
void elemCopy(const ElemType_t *src, ElemType_t *dest);

/*
 * @brief Swaps the elements content
 *
 * @param el1, pointer to the first element
 * @param el2, pointer to the second element
 * @return void
 */
void elemSwap(ElemType_t *el1, ElemType_t *el2);

/*
 * @brief Free the memory allocated for the element
 *
 * @param el, pointer to the element to be freed
 */
void elemDel(ElemType_t *el);

/*
 * @brief Print element on file
 *
 * @param el, pointer to the element to be printed
 * @param f, pointer to the file to be used to print the element
 */
void elemWrite(const ElemType_t *el, FILE *f);


#endif /* ELEMTYPE_H_ */
