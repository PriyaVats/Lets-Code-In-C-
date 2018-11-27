#include<stdio.h>
#define int_size sizeof(int)*8
main(){
int num,i,count;
printf("enter the number ");
scanf("%d",&num);
for(i=0;i<int_size;i++){
    if((num>>i)&1){
        count=i;
        break;
    }
}
printf("The lowest order bit is %d",count);

}
