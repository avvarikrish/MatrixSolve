#include <iostream>

void replaceRow(double** values, int rowNumber, double* replaceRowValue)
{
	values[rowNumber] = replaceRowValue;
}

void divideRow(double* rowValue, double divideValue, int numberOfColumns, double* solutions, int rowIndex)
{
	for (int i = 0; i < numberOfColumns; ++i)
	{
		rowValue[i] = rowValue[i]/divideValue;
	}
	solutions[rowIndex] = solutions[rowIndex]/divideValue;
}

void eliminateRow(double* initialRow, double* finalRow, int columnIndex, int numberOfColumns, double* solutions, int finalIndex)
{
	double eliminateValue = finalRow[columnIndex];
	for (int i = columnIndex; i < numberOfColumns; ++i)
	{
		finalRow[i] = initialRow[i] * (-eliminateValue) + finalRow[i];
	}
	solutions[finalIndex] = solutions[columnIndex] * (-eliminateValue) + solutions[finalIndex];
}

void getToEchelon(double** values, int numberOfRows, int numberOfColumns, double* solutions)
{
	for (int i = 0; i < numberOfRows-1; ++i)
	{
		divideRow(values[i], values[i][i], numberOfColumns, solutions, i);
		for (int j = i+1; j < numberOfRows; ++j)
		{
			eliminateRow(values[i], values[j], i, numberOfColumns, solutions, j);
		}
	}
}

void getToReducedEchelon(double** values, int numberOfRows, int numberOfColumns, double* solutions)
{
	for (int i = numberOfRows-1; i > 0; --i)
	{
		divideRow(values[i], values[i][i], numberOfColumns, solutions, i);
		for (int j = i-1; j > -1; --j)
		{
			eliminateRow(values[i], values[j], i, numberOfColumns, solutions, j);
		}
	}
}