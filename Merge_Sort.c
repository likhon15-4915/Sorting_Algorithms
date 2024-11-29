 #include<stdio.h>
 mergesort(int a[],int lb,int ub)
 {
 if (lb<ub)
 {
 int mid=(lb+ub)/2;
 mergesort(a,lb,mid);
 mergesort(a,mid+1,ub);
 merge(a,lb,mid,ub);
 }
 }
 merge(int a[],int lb,int mid,int ub)
 {
 int b[100];
 int i=lb;
 int j=mid+1;
 int k=lb;
 while(i<=mid &&j<=ub)
{
 if (a[i]<a[j])
 {
 b[k]=a[i];
 i++;
 k++;
 }
 else
 {
 b[k]=a[j];
 j++;
 k++;
 }
 }
 if (i>mid)
 {
 while(j<=ub)
 {
 b[k]=a[j];
 j++;
 k++;
 }
 }
 else
 {
 while(i<=mid)
 {
 b[k]=a[i];
 i++;
 k++;
 }
 }
 for (i=lb; i<=ub; i++)
 {
 a[i]=b[i];
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
 mergesort(a,0,n-1);
 printf("The merge sorted List:\n");
 for(i=0; i<n; i++)
 {
 printf("%d\t",a[i]);
 }
 }
 return 0;
 }
