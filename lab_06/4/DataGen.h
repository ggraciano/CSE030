#ifndef DataGen_h
#define DataGen_h

#include "RandomSupport.h"

void insertion_sort(long list[], long start, long end) {
	for (long i = start + 1; i < end + 1; i++) {
		long j = i;
		while (j > 0 && list[j - 1] > list[j]) {
			long temp = list[j];
			list[j] = list[j - 1];
			list[j - 1] = temp;
			j--;
		}
	}
	return;
}

long partition(long list[], long start, long end) {
	long pivot = list[start];
	while (start < end) {
		while (list[end] >= pivot && start < end) {
			end--;
		}
		if (start != end) {
			list[start] = list[end];
			start++;
		}
		while (list[start] <= pivot && start < end) {
			start++;
		}
		if (start != end) {
			list[end] = list[start];
			end--;
		}
	}
	list[start] = pivot;
	return start;
}

void quick_sort(long list[], long start, long end) {
	if (end - start < 10) {
		insertion_sort(list, start, end);
	}
	else {
		long pi = partition(list, start, end);
		if (start < pi - 1) {
			quick_sort(list, start, pi - 1);
		}
		if (end > pi + 1) {
			quick_sort(list, pi + 1, end);
		}
	}
	return;
}

void efficientRandomSortedList(long temp[], long s) {
	// Get a new random device
	randomizer device = new_randomizer();
	// Get a uniform distribution from 1 to 1000000
	uniform_distribution range = new_distribution(1, 1000000);

	for (long i = 0; i < s; i++) {
		// At every cell of the array, insert a randomly selected number
		// from distribution defined above
		temp[i] = sample(range, device);
	}

	// Now sort the array using insertion_sort
	// insertion_sort)temp, s);
	quick_sort(temp, 0, s - 1);
}


#endif /* DataGen_h */
