#include<stdio.h>//starting of code
int main()
{
    int a[10],b[10],n,i,j,count=0;
     int k=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("\n%d",&a[i]);
    for(i=0;i<n;i++)
        b[i]=0;
    for(i=0;i<n;i++)
     {  for(j=2;j<=a[i];j++)
            {
                if(a[i]%j==0)
                count++;
            }
        if(count==1)
            b[k++]+=a[i];

    }
    printf("\nPrime number are:");
    for(i=0;i<k;i++)
        printf("%d\t",b[i]);
    return 0;

}
