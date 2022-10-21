//palindrome-no.

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
        printf("%d is not a palindrome no.", rev);
}

    return 0;
}
