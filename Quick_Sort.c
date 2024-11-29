#include <stdio.h>
 partition(int a[],int lb,int ub)
 {
 int temp;
 int pivot=a[lb];
 int start=lb;
 int end=ub;
 while (start<end)
 {
 while(a[start]<=pivot)
 {
 start++;
 }
 while(a[end]>pivot)
 {
 end--;
 }
 if (start<end)
 {
 temp=a[start];
a[start]=a[end];
 a[end]=temp;
 }
 }
 temp=a[lb];
 a[lb]=a[end];
 a[end]=temp;
 return end;
 }
 quicksort(int a[],int lb,int ub)
 {
 if (lb<ub)
 {
 int q=partition(a,lb,ub);
 quicksort(a,lb,q-1);
 quicksort(a,q+1,ub);
 }
 }
 int main()
 {
 int i,n,b,a[100];
 printf("Enter the test case:\n");
 scanf("%d",&b);
 for(i=1; i<=b; i++)
 {
 printf("Enter the array size :\n");
 scanf("%d",&n);
 printf("Enter the element:\n");
 for(i=0; i<n; i++)
 {
 scanf("%d",&a[i]);
 }
 quicksort(a,0,n-1);
 printf("The merge sorted List:\n");
 for(i=0; i<n; i++)
 {
 printf("%d\t",a[i]);
 }
 }
 return 0;
 }
