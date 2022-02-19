//Write a program to find a number is divided by 2,7,11 or not

#include<stdio.h>

int main() {
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);

    if((n%2 == 0) && (n%7 == 0) && (n%11 == 0)){
        printf("%d is divisible by 2,7 and 11\n",n);
    }
    else {
        printf("%d is not divisible by 2,7 and 11\n",n);
    }

    return 0;
}