#include<stdio.h>
#include<ctype.h>
int main()
{
        int h[26]={0};
        int c; 

        printf("Enter text : \n"); //use Ctrl+D on Unix or Ctrl+Z on Windows to terminate if EOF is used for multiline text
        while((c=getchar())!='\n') // '\n' to read a single line, use EOF to read multiple lines
        {
            //check if c is an alphabet
            if((c >='A' && c <= 'Z')||(c >='a' && c <= 'z'))
            {
                //if c is in upper case, convert to lower case 
                //c = tolower(c); // OR, use if() as shown below
                if(c >='A' && c <= 'Z')
                    c=c+'a'-'A'; //add the difference in the ASCII values of lower and upper case = 32 to convert to lower case
                h[c-'a']++; //'a' index = 0, 'b' index = 1, ...
            }
        }
        printf("The histogram of characters is: ");
        for(int i=0; i<26; i++)
            printf("%c:%d ",i+'a', h[i]);
}
