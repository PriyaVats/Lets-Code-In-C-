#include<stdio.h>
#define int_size sizeof(int)*8
void main(){
int i,m,num,c1=0,c2=0;
printf("enter the number");
scanf("%d",&num);
for(i=0;i<32;i++){
    m=((num>>i)&1);
    if(m==1){
    c1++;
    }else{

    c2++;
    }

}
printf("Number of zeroes are:%d and Number of ones are:%d",c2,c1);

}
