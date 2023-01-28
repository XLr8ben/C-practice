//Array input from user
#include <stdio.h>
int main(){
    
  int marks[6];
  printf("Enter student 1 marks: ");
  scanf("%d",&marks[0]);
  printf("Enter student 2 marks: ");
  scanf("%d",&marks[1]);
  printf("Enter student 3 marks: ");
  scanf("%d",&marks[2]);
  printf("Enter student 4 marks: ");
  scanf("%d",&marks[3]);
  printf("Enter student 5 marks: ");
  scanf("%d",&marks[4]);
  
  printf("Entered no.s are %d, %d,%d, %d, %d", marks[0], marks[1], marks[2], marks[3], marks[4]);

return 0;
}