#include <stdio.h>
int main(){
   int arr[]={2,4,3,19,25,6,11,12,18,7};
   int i,m,flag,flag1,sum,r,d,j,tem;
   m=sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<m;i++) {
      flag=flag1=sum=0;
      d=arr[i]/2;
      for(j=2;j<=d;j++){
         if(arr[i]%j==0) {
            flag=1;
            break;
         }
      }
      if(flag==0) {
         tem=arr[i];
         while(tem) {
            r=tem%10;
            sum=sum+r;
            tem=tem/10;
         }
         d=sum/2;
         for(j=2;j<=d;j++) {
            if(sum%j==0){
               flag1=1;
               break;
            }
         }
         if(flag1==0){
            printf("%d \n",arr[i]);
         }
      }
   }
}
