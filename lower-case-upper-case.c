//lower-case-upper-case

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
