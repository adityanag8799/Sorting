#include<stdio.h>
void selectionSort(int *array,int size)
{
int e,f,g,m;
e=0;
while(e<=size-2)
{
m=e;
f=e+1;
while(f<=size-1)
{
if(array[m]>array[f])
{
m=f;
}
f++;
}
g=array[m];
array[m]=array[e];
array[e]=g;
e++;
}
}
int main()
{
int j,size;
printf("Enter the size of array to be sort :");
scanf("%d",&size);
int array[size];
for(j=0;j<size;j++)
{
printf("enter %d number bruh :",j+1);
scanf("%d",&array[j]);
}
selectionSort(array,size);
for(j=0;j<size;j++) printf("%d \n",array[j]);
return 0;
}
