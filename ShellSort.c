// lb stands for lowerbound
// ub stands for upper bound
// interval is changed after iteration

#include<stdio.h>
void shellSort(int *array,int lb,int ub)
{
int j,p,y,interval,size,num;
size=ub-lb+1;
interval=size/2;
while(interval>0)
{
y=lb+interval;
while(y<=ub)
{
p=y;
num=array[p];
j=p-interval;
while(j>=lb)
{
if(num>=array[j]) break;
array[j+interval]=array[j];
j=j-interval;
p=p-interval;
}
array[p]=num;
y=y+interval;
}
interval=interval/2;
}
}
int main()
{
int i,size;
printf("Enter the size of shell sort :");
scanf("%d",&size);
int array[size];
for(i=0;i<size;i++)
{
printf("Enter %d number bruh :",i+1);
scanf("%d",&array[i]);
}
shellSort(array,0,size-1);
for(i=0;i<size;i++)
{
printf("%d\n",array[i]);
}
return 0;
}
