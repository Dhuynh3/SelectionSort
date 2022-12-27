#include <iostream>
#include <vector>


class SelectionSort {
public:

	std::vector<int> Array;

	void SSort();
	void InsertElement(int val);
	void PrintArray();
};

void SelectionSort::SSort() {

	for (int i = 0; i < Array.size(); i++) {

		int SmallestIndex = i;

		for (int j = i + 1; j < Array.size(); j++) {

			if (Array[j] < Array[SmallestIndex]) {
				SmallestIndex = j;
			}

		}

		std::swap(Array[i], Array[SmallestIndex]);

	}

}

void SelectionSort::InsertElement(int val) {
	this->Array.push_back(val);
}

void SelectionSort::PrintArray() {
	
	for (int i = 0; i < Array.size(); i++) {
		std::cout << Array[i] << " ";
	}
	std::cout << std::endl;
}

int main() {


	SelectionSort * Sort = new SelectionSort;

	Sort->InsertElement(7);
	Sort->InsertElement(9);
	Sort->InsertElement(3);
	Sort->InsertElement(18);
	Sort->InsertElement(8);

	Sort->PrintArray();

	Sort->SSort();

	Sort->PrintArray();
	
	delete Sort;
	return 0;
}