#include<stdio.h>
#define n 6
int main()
{
   int arr[10],i,j,c;
   printf("enter the array elements\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
     c=1;
     for(j=i+1;j<n;j++)
     {
       if(arr[i]==arr[j])
       {
         c++;
         arr[j]=' ';
       }
     }
    if(arr[i]!=' ')
      printf("array element %d occurs - %d times\n",arr[i],c);
   }
}
