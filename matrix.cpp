#include <iostream>
#include <cstdlib>


using namespace std;

void get_matrix_size(int* size) {
	while (*size < 3) {
		cout << "Enter matrix size more than or equal to 3: ";
		cin >> *size;
	}
}

int gen_rand(int start, int end) {
	return rand() % (end - start) + start;
}

void fill_matrix(int** matrix, int row, int column) {
	for (int i = 0; i < row; i++) {
		for (int g = 0; g < column; g++) {
			matrix[i][g] = gen_rand(10, 100);
		}
	}
}


void output_matrix(int** matrix, int row, int column) {
	for (int i = 0; i < row; i++) {
		for (int g = 0; g < column; g++) {
			cout << matrix[i][g] << " ";
		}
		cout << endl;
	}
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap_columns(int** matrix, int row, int column_1, int column_2) {
	for (int i = 0; i < row; i++) {
		swap(&matrix[i][column_1], &matrix[i][column_2]);
	}
}

void swap_rows(int** matrix, int column, int row_1, int row_2) {
	for (int i = 0; i < column; i++) {
		swap(&matrix[row_1][i], &matrix[row_2][i]);
	}
}
