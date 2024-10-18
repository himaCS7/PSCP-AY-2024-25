#include<stdio.h>
main(){
	char year[]="2024";
	int y; //to store the integer year
	int  i;
	//to extract digit from year and build y
	y = 0;
	for(i=0; year[i]!='\0';i++){
		int digit = year[i]-'0';//digit value as int
		y = y*10+digit;
	}
	printf("year as string=%s, year as int =%d\n",year, y);
	printf("year as string size=%lu, year as int size=%lu\n",sizeof(year), sizeof(y));

}
