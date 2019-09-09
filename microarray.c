
#include <stdio.h>

void main()
{
    int i,j,t,n,k,a[100],small,count=0;
    printf("enter number of test cases");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("enter the number of elements");
        scanf("%d",&n);
        printf("enter the value of k");
        scanf("%d",&k);
        printf("enter the array elements");
    
            for(i=0;i<n;i++)
            {
             scanf("%d",&a[i]);
            }
        small=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<a[0])
            {
            small=a[i];
            }
        }

for(j=small;j<k;j++)
{
    count++;
}
printf("The min. time required for the element which is >= k is %d\n",count);
}
}
   
    
    

