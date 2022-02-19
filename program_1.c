//Write a program to find sum of n natural number using for loop

#include<stdio.h>

int main() {
    int num,sum = 0;

    printf("Enter the value of number\n");
    scanf("%d",&num);

    for(int i = 1;i <= num;i++) {
        sum+=i;
    }
    
    printf("Sum of %d natural numbers is %d",num,sum);

    return 0;
}