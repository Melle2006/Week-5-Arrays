/*Program to print each average of elements in array*/
#include <stdio.h>

int main() 
{
    int n, i, j, k, sum=0;
    float avg;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    float b[100]={0};
    printf("Enter elemnets of array: ");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {sum=sum+a[i];
        avg = (float)(sum/(i+1));
          b[i]=avg;
    }
    for (i=0; i<n; i++)
    printf("%.2f\n", b[i]);

    return 0;
}




    return 0;
}
