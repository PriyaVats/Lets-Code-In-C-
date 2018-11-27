#include<stdio.h>
#define int_size sizeof(int)*8
int main(){
int num,i,order;
printf("Enter the number");
scanf("%d",&num);
for(i=0;i<int_size;i++){
 if((num>>i)&1)
  order=i;

}
printf("The highest order of MSB is %d",order);
}
