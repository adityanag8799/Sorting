#include<stdio.h>
void merge(int a[], int low, int high, int mid)
{ 
int i, j, k, c[50];
i=low;
j=mid+1;
k=low;
while((i<=mid)&&(j<=high))
{ 
if(a[i]<a[j])
{ 
c[k]=a[i];
k++;
i++;
} 
else
{ 
c[k]=a[j];
k++;
j++;
}
}
while(i<=mid)
{ 
c[k]=a[i];
k++;
i++;
}
while(j<=high)
{ 
c[k]=a[j];
k++;
j++;
}
for(i=low;i<k;i++)
{ 
a[i]=c[i];
}
}
void mergesort(int a[], int low, int high)
{ 
int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,high,mid);
}
} 
int main()
{ 
int size;
printf("Enter the size of the array to be sort :");
scanf("%d",&size);
int array[size],y;
for(y=0;y<=size-1;y++)
{
printf("Enter a number bruh : ");
scanf("%d",&array[y]);
}
mergesort(array,0,size-1);
for(y=0;y<=size-1;y++)
{
printf("%d\n",array[y]);
}
return 0;
}
