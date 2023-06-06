#include <iostream>
#include <cstdlib>
#include <ctime>

#include "matrix.h"

using namespace std;


int main() {
	srand(time(nullptr));

	int size;
	get_matrix_size(&size);

	int** matrix = new int* [size];

	for (int i = 0; i < size; i++) {
		matrix[i] = new int[size];
	}

	fill_matrix(matrix, size, size);
	output_matrix(matrix, size, size);

	cout << endl;
	swap_columns(matrix, size, 0, 2);
	cout << endl;

	output_matrix(matrix, size, size);
	cout << endl;

	for (int i = 0; i < size; i++) {
		delete[] matrix[i];
		matrix[i] = nullptr;
	}
	delete[] matrix;
	matrix = nullptr;

	size = 0;
	get_matrix_size(&size);

	matrix = new int* [size];

	for (int i = 0; i < size; i++) {
		matrix[i] = new int[size];
	}

	fill_matrix(matrix, size, size);
	output_matrix(matrix, size, size);
	cout << endl;

	swap_rows(matrix, size, 0, 2);
	cout << endl;

	output_matrix(matrix, size, size);

	for (int i = 0; i < size; i++) {
		delete[] matrix[i];
		matrix[i] = nullptr;
	}
	delete[] matrix;
	matrix = nullptr;

	return 0;
}