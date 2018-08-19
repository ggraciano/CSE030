#ifndef FindMin_h

#define FindMin_h

// Declare and define the findMin function here
int findMin(int numbers[], int start, int end) {
	int min = numbers[start], minNum = start;

	for (int i = start; i < end; i++) {
		if (min > numbers[i]) {
			min = numbers[i];
			minNum++;
		}
	}
	return minNum;
}


// Do not write any code below this line
#endif
