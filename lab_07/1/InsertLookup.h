#ifndef InsertLookup_h
#define InsertLookup_h

// bool find(long* list, long size, long value){
// for (long i = 0; i < size; i++) {
// if (list[i] == value){
// return true;
// }
// }

// return false;
// }

bool binary_search(long* list, long start, long end, long value) {
	long mid = start + (end - start) / 2;
	if (end >= start) {
		if (list[mid] == value) {
			return true;
		}
		else if (list[mid] > value) {
			binary_search(list, 0, mid - 1, value);
		}
		else if (list[mid] < value) {
			binary_search(list, mid + 1, end, value);
		}
		else {
			return false;
		}
	}
}

bool find(long* list, long size, long value) {
	long mid = size / 2;
	if (list[mid] == value) {
		return true;
	}
	else if (list[mid] > value) {
		binary_search(list, 0, mid - 1, value);
	}
	else if (list[mid] < value) {
		binary_search(list, mid + 1, size, value);
	}
	else {
		return false;
	}
}

void insertion_sort(long list[], long size, long value) {
	long j = size - 1;
	while (j > 0 && list[j - 1] > value) {
		long temp = list[j];
		list[j] = list[j - 1];
		list[j - 1] = temp;
		j--;
	}
}

void insert(long* list, long size, long value) {
	list[size - 1] = value;
	insertion_sort(list, size, value);
}

#endif
