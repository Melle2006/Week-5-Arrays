/*Program to find the occurance of a number in an array*/
#include <stdio.h>
int main() 
{
    int n, i, j, t, c=0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("Enter number to search for: ");
    scanf("%d", &j);
    for (i=0; i<n; i++)
    {
     if (a[i]==j)
     c++;
    }
    printf("The number of times elements are repeated is %d.", c);
 

    return 0;
}

