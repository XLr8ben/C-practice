/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, rem, rev=0, original;
    
    printf("Enter no: ");
    scanf("%d", &n);
    
    original = n;
    
    while (n!=0){
        rem = n % 10;
        
        rev = rev*10 + rem;
        
        n = n/10;
        
    }
    
    if(original == rev){
        printf("palindrome");
        
    }
    else{
        printf("not");
}

    return 0;
}
