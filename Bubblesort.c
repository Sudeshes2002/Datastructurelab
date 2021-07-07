#include <stdio.h>
int main()
{
    int a[15],i,j,n,temp;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("\n Array before sorting");
    for(i=1;i<=n;i++)
    printf("%d\t",a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n Array after sorting");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    return(0);
}