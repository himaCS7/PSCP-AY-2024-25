// CHECK IF THE GIVEN SUDOKU IS CORRECT
//Fill in the grid: Fill in the 4x4 grid with the numbers 1–4. 
//No repeats: No number can be repeated in any row, column, or 2x2 square.
// valid ex:4231134224133124  no spaces should be given as we are using getchar() to read:
//4231134224133214 is a wrong ex
#include<stdio.h>

int main()
{
	char a[4][4]; //let's use char array as only 1,2,3,4 are permitted
	int i,j, s;
	const int SUM = 4*5/2;  //sum of all digits 1,2,3,4 = sigma(4) 
	printf("enter your Sudoku values: ");
	for(i=0; i<4; i++)
		for(j=0; j<4; j++)
			a[i][j] = getchar();

	//check every row
	for(i=0; i<4; i++){
		s=0;
		for(j=0; j<4; j++)
			s+=a[i][j]-'0'; //to get int values from the char in a[i][j]
		if(s != SUM){ // some digit is repeated in row i
			printf("wrong entries in row %d\n", i);
			return 0;
		}
	}
				
	//check every col
	for(i=0; i<4; i++){
		s=0;
		for(j=0; j<4; j++)
			s+=a[j][i]-'0'; //to get int values from the char a[j][i]
		if(s != SUM){ // some digit is repeated in col i
			printf("wrong entries in col %d\n", i);
			return 0;
		}
	}
	//check every 2X2 grid
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			//CHECK the (i,j)th grid
			s=0;
			for(int k=i*2; k<(i*2+2); k++)
				for(int l=j*2; l<(j*2+2); l++)
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
