/*Program to print pair in array whose sum is equal to the given value*/
#include <stdio.h>

int main() 
{
    int n, j, i, sum;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elemnets of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("Enter sum: ");
    scanf("%d", &sum);
    for(i=0; i<n; i++)
    {
          for(j=i+1; j<n; j++)
          {
              if (a[i]<sum)
              {
                  if(a[j]==sum-a[i])
                 { printf("%d and %d give %d.\n", a[i], a[j], sum);
                     return 0;}
              }
              else
              printf("Not possible");
          }
     
    }

    return 0;
}


