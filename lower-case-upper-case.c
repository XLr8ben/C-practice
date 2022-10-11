/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{    
    //a-z(97-122)
    //A-Z(65-90)
    char ch;
    printf("Enter character:\n");
    scanf("%c", &ch);
    
    if(ch>=97 && ch<=122){
        printf("it is lower case");
    }
       else if(ch>=65 && ch<=90){
           printf("it is upper case");
       }
       else{
           printf("invalid input");
       }

    return 0;
}
