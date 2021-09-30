#include <iostream>
#include <vector>
#include <functional>
using namespace std;

template <typename iter, typename func>
void selection_sort(iter begin, iter end, func comp) {
	while (begin != end) {
		iter min = begin;
		iter search = begin;
		while (++search != end)
			if (comp(*min, *search))
				min = search;
		auto temp = move(*min);
		*min = move(*begin);
		*begin = move(temp);
		begin++;
	}
}

int main() {
	vector<int> arr{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	for (auto i : arr)
		cout << i << ' ';
	cout << endl;

	selection_sort(arr.begin(), arr.end(), [](int a, int b) ->bool { return a > b; });

	for (auto i : arr)
		cout << i << ' ';
	cout << endl;
}