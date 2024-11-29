 #include<stdio.h>
 int main()
 {
 int a[]= {1,3,5,8,99,7};
 int i,j,temp;
 for(i=0; i<5; i++)
 {
 int min =i;
 for(j=i+1; j<6; j++)
 {
 if (a[j]<a[min])
 {
 min=j;
 }
 }
 if (min!=i)
 {
 temp=a[i];
 a[i]=a[min];
 a[min]=temp;
 }
 }
 printf("After Using Selection Sort:\n ");
 for(i=0; i<6; i++)
 {
 printf("%d ",a[i]);
 }
 return 0;
 }
