#include<stdio.h>
int ask(int arr[5]);

int main()
{
    int arr1[5];
   ask(arr1);
for (int i=0;i<5;i++)
printf("%d",arr1[i]);
return 0;
}

int ask(int arr[5])
{
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
}