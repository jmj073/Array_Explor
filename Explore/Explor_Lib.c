#include "Explor_H.h"

//정수 배열 전진 탐색
int Array_MoveToFrant(int arr[], int Target, int Length) {
	int i, Result = -1;
	for (i = 0; i < Length; i++) {
		if (arr[i] == Target) {
			Result = i;
			memmove(arr + 1, arr, sizeof(int) * i);
			arr[0] = Target;
			break;
		}
	}
	return Result;
}


//정수 배열 전위 탐색
int Array_Transpose(int arr[], int Target, int Length) {
	int i, Result = -1, tmp;
	for (i = 0; i < Length; i++) {
		if (arr[i] == Target) {
			if (i) {
				tmp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = tmp;
				i--;
			}
			Result = i;
			break;
		}
	}
	return Result;
}

// 이진 탐색
int BinarySearch(int arr[], int Target, int Length) {
	int Left, Right, Mid;
	Left = 0, Right = Length - 1;

	while (Left <= Right) {
		Mid = (Left + Right) / 2;
		//printf("%d\n", Mid);
		if (Target == arr[Mid])
			return Mid;
		else if (Target > arr[Mid])
			Left = Mid + 1;
		else
			Right = Mid - 1;
	}
	return -1;
}