#include<stdio.h>

 
int main()
{
 int p[10],n,at[10],st[10],stt[10],ft[10],wt[10],ttr[10];
 float avg[10];
  int i, sum = 0;
 printf("\nEnter No.of Process: ");
 scanf("%d",&n);
 for( i = 0 ; i < n ; i++) {
 
 printf("\nProcess %d",i+1);
 printf("\nArrival Time %d",i+1);
scanf("%d",&at[i]);
printf("\nServce Time %d",i+1);
scanf("%d",&st[i]);
stt[i]=0;
 }
 
 
 for( i = 0 ; i  < n ; i++) {
 
 if(at[i]>sum){
   stt[i]=at[i];
   printf("ENTERED CONDITION BRACKETS %d",stt[i]);
   }
 else          {
  stt[i]=sum;   }
 printf("Process %d",i+1);
 printf("\nstart time = %d" , stt[i]);
 sum = sum + st[i];
 printf("\nfinish Time = %d ",sum);
 wt[i] =  stt[i] - at[i] ;
 printf("\nWaiting time = %d",wt[i]);
 ttr[i] = st[i] + wt[i];
 printf("TTR = %d ",ttr[i]);
 avg[i]=ttr[i]/st[i];
 printf("\nTT / TS = %f ",avg[i]);
 
 
 
 
 
 
}
 
 return 0;
}
