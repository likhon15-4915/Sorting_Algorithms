 #include<stdio.h>
 int main()
 {
 int b[100],i,j,k,n,flag=0,temp;
 printf("Enter The Array size :\n");
 scanf("%d",&n);
printf("Enter The element:\n");
 for(i=0; i<n; i++)
 {
 scanf("%d",&b[i]);
 }
 for(i=0; i<n-1; i++)
 {
 flag=0;
 for(j=0; j<n-1-i; j++)
 {
 if(b[j]<b[j+1])
 {
 temp = b[j];
 b[j]=b[j+1];
 b[j+1]=temp;
 flag=1;
 }
 }
 if (flag==0)
 {
 break;
 }
 }
 for(i=0;i<n;i++)
 {
 printf("%d ",b[i]);
 }
 return 0;
 }
