#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"

// Declare and define the insertion sort function below
// You *MUST* use the swap operation defined in Swap.h to swap elements
void insertion_sort(int numbers[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int j = i;
		while (j > 0 && numbers[j] < numbers[j - 1]) {
			swap(numbers, j, j - 1);
			j--;
	//	for (int j = 0; j < len - 1; j++) {
	//		if (numbers[j] > numbers[j + 1]) {
	//			swap(numbers, j, j + 1);
	//		}
	//	}
	//}
}



// Do not write any code below this line
#endif
