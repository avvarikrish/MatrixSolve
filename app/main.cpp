#include <iostream>
#include "input.hpp"
#include "output.hpp"
#include "calculations.hpp"

int main()
{
	int numberOfRows;
	int numberOfColumns;
	std::cin >> numberOfRows >> numberOfColumns;
	double** values = new double*[numberOfRows];
	double* solutions = new double[numberOfRows];
	getMatrixValues(values, numberOfRows, numberOfColumns, solutions);
	std::cout << "INITIAL MATRIX:" << std::endl;
	printMatrix(values, numberOfRows, numberOfColumns, solutions);
	getToEchelon(values, numberOfRows, numberOfColumns, solutions);
	std::cout << "ECHELON FORM MATRIX:" << std::endl;
	printMatrix(values, numberOfRows, numberOfColumns, solutions);
	getToReducedEchelon(values, numberOfRows, numberOfColumns, solutions);
	std::cout << "REDUECED ECHELON FORM MATRIX" << std::endl;
	printMatrix(values, numberOfRows, numberOfColumns, solutions);
    return 0;
}

