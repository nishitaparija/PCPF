#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main() {
   int a[10][10], transpose[10][10], row, column, i, j;
cout << "Enter rows and columns of matrix: ";
cin >> row >> column;

cout << "\nEnter elements of matrix: " << endl;

for (int i = 0; i < row; ++i) { // Storing matrix elements
    for (int j = 0; j < column; ++j) {
    cout << "Enter element a" << i + 1 << j + 1 << ": ";
    cin >> a[i][j];
    }
}

cout << "\nEntered Matrix: " << endl; // Printing the a matrix
for (int i = 0; i < row; ++i) {
    for (int j = 0; j < column; ++j) {
    cout << " " << a[i][j];
    if (j == column - 1)
	  cout << endl << endl;
    }
}

for (int i = 0; i < row; ++i) // To formulate transpose
    for (int j = 0; j < column; ++j) {
    transpose[j][i] = a[i][j];
}
      
cout << "\nTranspose of Matrix: " << endl; // Printing the transpose
for (int i = 0; i < column; ++i)
for (int j = 0; j < row; ++j) {
    cout << " " << transpose[i][j];
    if (j == row - 1)
    cout << endl << endl;
    }
return 0;
}
