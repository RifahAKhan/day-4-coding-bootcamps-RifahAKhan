//Write a C program to get the integer array from the user and print it in the given order.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements in the given order with space separated.
//Example:
//Input:
//5 
//1 5 10 50 123
//Output: 
//1 5 10 50 123
#include<stdio.h> 

int main()
{
   //Declare all the variables[N, array a, i] used in the code
   //Read the Value of N using scanf statement
   //Read the array elements using for loop and scanf statment
   //Print the array elements in using printf statement
  int N,a[100],i;
  printf("Enter the size of array\n");
  scanf("%d",&N);
  printf("Enter the array elements\n");
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("The array elements are\n");
  for(i=0;i<N;i++)
  {
    printf("%d\t",a[i]);
  }
     return 0; 
}
