// lb stands for lower bound,
// ub stands for upper bound

#include<stdio.h>
void insertionSort(int *array,int lb,int ub)
{
int y,j,p,num;
y=lb+1;
while(y<=ub)
{
p=y;
j=p-1;
num=array[p];
while(j>=lb)
{
if(num>=array[j])break;
array[j+1]=array[j];
j--;
p--;
}
array[p]=num;
y++;
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
insertionSort(array,0,size-1);
for(j=0;j<size;j++) printf("%d \n",array[j]);
return 0;
}
