/*Program to find find if there is a triplet in array whose sum is equal to the given value*/
#include <stdio.h>

int main() 
{
    int n, j, i, k, sum;
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
              for (k=j+1; k<n; k++)
              {
                          if (a[i]+a[j]+a[k]==sum)
                          {
                              printf("%d, %d, and %d give %d.", a[i], a[j], a[k], sum);
                              
                          }
                  
              }
          }
     
    }
     return 0;
}


    return 0;
}
