//program to check whether a given matrix is magic matrix or not
#include <stdio.h>
#include <stdbool.h>  // to use bool datatype


// Returns true if mat[][] is magic square, else returns false.
bool isMagicSquare(int mat[3][3])
{
	int n = 3;
	int i = 0, j = 0;

	// sumd1 and sumd2 are the sum of the two diagonals
	int sumd1 = 0, sumd2=0;
	for (i = 0; i < n; i++)
	{
		// (i, i) is the diagonal from top-left -> bottom-right
		// (i, n - i - 1) is the diagonal from top-right -> bottom-left
		sumd1 += mat[i][i];
		sumd2 += mat[i][n-1-i];
	}

	// if the two diagonal sums are unequal then it is not a magic square
	if(sumd1!=sumd2)
		return false;

	// For sums of Rows
	for (i = 0; i < n; i++) {
		int rowSum = 0, colSum = 0; 
		for (j = 0; j < n; j++)
		{
			rowSum += mat[i][j];
			colSum += mat[j][i];
		}
		if (rowSum != colSum || colSum != sumd1)
			return false;
	}
	return true; //as all conditions are satisfied
}

int main()
{
	int mat[3][3] = {{ 2, 7, 6 },
					{ 9, 5, 1 },
					{ 4, 3, 8 }};
	int mat1[3][3] = {{ 2, 6, 7 },
					{ 9, 5, 1 },
					{ 4, 3, 8 }};
	
	if (isMagicSquare(mat))
		printf("mat is a Magic Square\n");
	else
		printf("mat is not a magic Square\n");
	if (isMagicSquare(mat1))
		printf("mat1 is a Magic Square\n");
	else
		printf("mat1 is not a magic Square\n");
	
	return 0;
}

// This code is contributed by kothavvsaakash.

