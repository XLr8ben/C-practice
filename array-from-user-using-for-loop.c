 //Array from user using for loop
  
  #include <stdio.h>
  int main(){
      
  int marks[5];
  
  for(int i=0; i<=4; i++){
      printf("Enter students %d marks: ", i + 1 );
      scanf("%d",&marks[i]);
      
  }
  
    for(int i=0; i<=4; i++){
      printf("Marks of student %d is : %d \n", i + 1, marks[i]);
      
  }
  return 0;
  }
  