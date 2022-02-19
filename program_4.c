//write a program to calculate nth term of fibonacci series

#include<stdio.h>

int main() {
    int n,a = 0,b = 1,c,i;

    printf("Enter the number\n");
    scanf("%d",&n);

    for(i=2;i<n;i++) {
        c = a;
        a = b;
        b = b + c;
    }
    printf("The nth term of fibonacci series is %d",b);

    return 0;
}