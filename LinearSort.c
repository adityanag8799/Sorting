#include<stdio.h>
void linearSort(int *array,int size)
{
int e,f,g,m;
e=0;
while(e<=size-2)
{
f=e+1;
while(f<=size-1)
{
if(array[e]>array[f])
{
g=array[e];
array[e]=array[f];
array[f]=g;
}
f++;
}
e++;
}
}
int main()
{
int j,size;
printf("Enter the size of the array to be sort :");
scanf("%d",&size);
int array[size];
for(j=0;j<size;j++)
{
printf("enter the %d number bruh : ",j+1);
scanf("%d",&array[j]);
}
linearSort(array,size);
for(j=0;j<size;j++) printf("%d \n",array[j]);
return 0;
}
