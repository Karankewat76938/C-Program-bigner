#include<stdio.h>

int main()
{
    int i,n,ans;
    printf("Enter the number : ");
    scanf("%d",n);
    for(i=1;i<n;i++)
    {
        ans=i++;
        printf("%d",ans);
    }
    return 0;
}
