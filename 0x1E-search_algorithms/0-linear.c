#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {
	if (array == NULL) {
		return -1;
	}
	for (size_t i = 0; i < size; i++) {
		if (array[i] == value) {
			return i; // Return the index of the element
		}
	}
	return -1;  // Return -1 if the element is not found
}
