// CHECK IF THE GIVEN SUDOKU IS CORRECT
//Fill in the grid: Fill in the 9x9 grid with the numbers 1–9. 
//No repeats: No number can be repeated in any row, column, or 3x3 square.
// 123456789759183426648297315374915268896372154512864973931528647265749831487631592 is a smaple input
// check for the input at https://gyazo.com/49a7f0055f296bedb78230653317d885 for valid row, cols but wrong in 3X3 grid!
#include<stdio.h>

int main()
{
	char a[9][9]; //let's use char array as only 1,2,...,9 are permitted
	int i,j, s;
	const int SUM = 9*10/2;  //sum of all digits 1...9 = sigma(9) 
	printf("enter your Sudoku values: ");
	for(i=0; i<9; i++)
		for(j=0; j<9; j++)
			a[i][j] = getchar();

	//check every row
	for(i=0; i<9; i++){
		s=0;
		for(j=0; j<9; j++)
			s+=a[i][j]-'0'; //to get int values from the char in a[i][j]
		if(s != SUM){ // some digit is repeated in row i
			printf("wrong entries in row %d\n", i);
			return 0;
		}
	}
				
	//check every col
	for(i=0; i<9; i++){
		s=0;
		for(j=0; j<9; j++)
			s+=a[j][i]-'0'; //to get int values from the char a[j][i]
		if(s != SUM){ // some digit is repeated in col i
			printf("wrong entries in col %d\n", i);
			return 0;
		}
	}
	//check every 3X3 grid
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			//CHECK the (i,j)th grid
			s=0;
			for(int k=i*3; k<(i*3+3); k++)
				for(int l=j*3; l<(j*3+3); l++)
					s+=a[k][l]-'0';
			if(s != SUM){ // some digit is repeated in grid(i,j)
				printf("wrong entries in grid(%d,%d)\n", i,j);
				return 0;
			}
		}
	}
	printf("CONGRATULATIONS! The sudoku is correct!!\n");		
	return 0;
}
