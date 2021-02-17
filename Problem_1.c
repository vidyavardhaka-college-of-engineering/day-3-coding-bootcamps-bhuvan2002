//You will be given a number 'N'. Your task is to calculate the sum of first N natural numbers(1 to N)
//Example
//input: 
//4
//output: 
//10

#include<stdio.h>
int main()
{
    int n, sum , i;
    printf("Enter the value for N\n");
    scanf("%d", &n);


    //Write your code here
    sum=0;
    for(i=1; i<=n; i++)
    {
      sum=sum+i;
    }   
       
     printf("The sum is %d" , sum);  
       
       
    return 0;
}
