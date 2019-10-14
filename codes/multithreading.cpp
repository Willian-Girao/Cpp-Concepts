// CPP program to demonstrate multithreading 
// using three different callables. 
#include <iostream>
#include <thread>
using namespace std;

int M[3][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};

// return a reference to the (i,j) element
int& setValues(int i, int j) {
   return M[i][j];
}

void initMatrixRow(int i) {
	for (int j = 0; j < 5; ++j)	{
		setValues(i, j) = 1;
	}
	cout << "\nRow " << i << " initialized.";
}

void printMatrix() {
	cout << "\n";
	for (int i = 0; i < 3; ++i)	{
		for (int j = 0; j < 5; ++j)	{
			cout << M[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	// launching threads
	thread th0(initMatrixRow, 0);
	thread th1(initMatrixRow, 1);
	thread th2(initMatrixRow, 2);
	// waiting for threads to finish
	th0.join();
	th1.join();
	th2.join();

	printMatrix();

	return 0;
}