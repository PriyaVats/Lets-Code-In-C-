#include<stdio.h>
main(){
int n,i,count=0,k;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<32;i++){
k=((n>>i)&1);
if(k==1){
break;
}
if(k==0){
count++;
}
}
printf("The trailing zero are %d",count);

}
