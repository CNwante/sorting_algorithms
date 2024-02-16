/*
 * Authors:
 *      Solomon Nwante
 *      Loïc Kami
 */

#ifndef _SWAP_H_
#define _SWAP_H_

/*===== Swap Function Definition =====*/
/**
 * swap - Swaps the values pointed to by the pointers
 * @a: Pointer to int values
 * @b: Pointer to int values
 */
void swap(int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}

#endif /*_SWAP_H_*/
