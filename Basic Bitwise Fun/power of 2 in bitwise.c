#include<stdio.h>
main(){
int c=0,n,i,k;
printf("enter the no");
scanf("%d",&n);
for(i=0;i<32;i++){
k=((n>>i)&1);
if(k==1)
c++;

}
if(c==1)
printf("The entered no %d is power of 2",n);
}
