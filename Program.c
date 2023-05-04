// Write a program to check whether a triangle is valid or not, 
// if three angles of the triangle are entered through the keyboard.
// A triangle is valid if the sum of all the three angles is equal to 180 degrees.


#include<stdio.h>
#include<conio.h>
int main()
{
    int a1, a2, a3, sum;
    printf("Enter Three Sides of a Triangler : \n");
    scanf("%d %d %d", &a1, &a2, &a3);
    sum = a1 + a2 + a3;

    if (sum<=180)
        printf("Valid Triangle");
    else
        printf("Not Valid Triangle");
    return 0;
}
