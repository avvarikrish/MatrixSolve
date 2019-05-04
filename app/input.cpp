#include <iostream>

void getMatrixValues(double** values, int numberOfRows, int numberOfColumns, double* solutions)
{
	for (int i = 0; i < numberOfRows; ++i)
	{
		double* currentColumn = new double[numberOfColumns];
		for (int j = 0; j < numberOfColumns; ++j)
		{
			double currentValue;
			std::cin >> currentValue;
			std::cin.ignore(1);
			currentColumn[j] = currentValue;
		}
		values[i] = currentColumn;
	}
	for (int i = 0; i < numberOfRows; ++i)
	{
		double currentValue;
		std::cin >> currentValue;
		solutions[i] = currentValue;
	}
}
