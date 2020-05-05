//Program to Swapping of 2 Values, without use of extra variable
#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2;
    printf("Before Swapping \n");      //We can understand values before swapping
    printf("Enter First Number : ");
    scanf("%d",&num1);                //Take 1st Number From the User
    printf("Enter Second Number : ");
    scanf("%d",&num2);            //Take 2nd Number From the User
    
    //Logic for swapping values
    num1=num1-num2; 
    num2=num1+num2;
    num1=num2-num1;
    
    printf("After Swapping \n");      //shows swapped values 
    printf("First Number : %d \n",num1);  
    printf("Second Number : %d",num2);
}


Output:

Before Swapping
Enter First Number : 12
Enter Second Number : 22
After Swapping
First Number : 22
Second Number : 12
