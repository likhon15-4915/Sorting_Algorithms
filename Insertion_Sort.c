 #include<stdio.h>
 int main(){
 int a[]={10,4,9,1,2,3};
 int i,j,temp;
 for(i=1;i<6;i++)
 {
 temp=a[i];
j=i-1;
 while(j>=0&&a[j]>temp)
 {
 a[j+1]=a[j];
 j--;
 }
 a[j+1]=temp;
 }
 printf("The Insertion sort :\n");
 for(i=0;i<6;i++)
 {
 printf("%d ",a[i]);
 }
 printf("\n\n\n");
 return 0;
 }
