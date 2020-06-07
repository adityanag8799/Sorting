#include<stdio.h>
void BubbleSort(int *array,int size)
{
int e,f,g,m;
m=size-2;
while(m>=0)
{
e=0;
f=1;
while(m>=e)
{
if(array[f]<array[e])
{
g=array[e];
array[e]=array[f];
array[f]=g;
}
e++;
f++;
}
m--;
}
}
int main()
{
int array[10],size;
printf("Enter the size of array to be sort :");
scanf("%d",&size);
int x;
for(x=0;x<=size-1;x++)
{
printf("Enter a number :");
scanf("%d",&array[x]);
}
BubbleSort(array,size);
x=0;
for(x=0;x<=size-1;x++)
{
printf("%d\n",array[x]);
}
return 0;
}
