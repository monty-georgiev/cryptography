#include <iostream>

int main()
{

    //zero based indexing
    int matrixSize = 3;

    //adjustment of zero based indexing
    int outputMatrix[matrixSize + 1][matrixSize + 1];

    //predefined input for testing
    int matrix[4][4] =
	{
	    {1, 2, 3, 4},
	    {5, 6, 7, 8},
	    {9, 10, 11, 12},
	    {13, 14, 15, 16}

	};

    //Rotate the matrix
    for (int i = 0; i <= matrixSize; i++)
    {
	for (int j = 0; j <= matrixSize; j++)
	{
	    std::cout << matrix[i][j] << " ";
	    outputMatrix[j][matrixSize - i] = matrix[i][j];
	}
	std::cout << std::endl;
    }

    //Print the result for verification
    std::cout << std::endl;
    for (int i = 0; i <= matrixSize; i++)
    {
	for (int j = 0; j <= matrixSize; j++)
	{
	    std::cout << outputMatrix[i][j] << " ";
	}
	std::cout << std::endl;
    }

    return 0;
}