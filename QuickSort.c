#include<stdio.h>
int partition(int *array,int lb,int ub)
{
int f,e,g,num;
num=array[lb];
e=lb;
f=ub;
while(1)
{
while(1)
{
if(e==ub || array[e]>num)
{
break;
}
e++;
}
while(1)
{
if(f==lb || array[f]<=num)
{
break;
}
f--;
}
if(e<f)
{
g=array[e];
array[e]=array[f];
array[f]=g;
}
else
{
g=array[lb];
array[lb]=array[f];
array[f]=g;
break;
}
}
return f;
}
void quickSort(int *array,int lb,int ub)
{
int partitionPoint;
if(ub<=lb)return;
partitionPoint=partition(array,lb,ub);
quickSort(array,lb,partitionPoint-1);
quickSort(array,partitionPoint+1,ub);
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
quickSort(array,0,size-1);
for(j=0;j<size;j++) printf("%d \n",array[j]);
return 0;
}
