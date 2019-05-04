#include <iostream>

void printMatrix(double**values, int numberOfRows, int numberOfColumns, double* solutions)
{
	for (int i = 0; i < numberOfRows; ++i)
	{
		for (int j = 0; j < numberOfColumns; ++j)
		{
			std::cout << values[i][j] << " ";
		}
		std::cout << solutions[i] << std::endl;
	}
}