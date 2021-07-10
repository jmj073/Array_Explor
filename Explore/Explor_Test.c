#include <stdio.h>
#include "Explor_H.h"

int main() {
	int arr[6] = { 1, 2, 3, 4, 5, 6}, Target, Length;
	Length = sizeof(arr) / sizeof(int);
	Target = Array_Transpose(arr, 4, Length);
	printf("%d\n", Target);
	for (int i = 0; i < 6; i++)
		printf("%d ", arr[i]);
}