#include<stdio.h>
#include<conio.h>
int i,j,k,pr[10],at[10],prc[10],n,st[10],stt[10],ft[10],wt[10],qu[10],t1=0,t2=0,t3=0,sum=0;
void sort(int f,int r,int n)
{
int temp;
	temp = at[f];
	   at[f]=at[r];
	   at[r]=temp;

	   temp = st[f];
	   st[f]=st[r];
	   st[r]=temp;

	   temp=pr[f];
	   pr[f]=pr[r];
	   pr[r]=temp;
	temp = prc[f];
	prc[f]= prc[r];
	prc[r]=temp;
}
void main()
{

   clrscr();
   printf("\nEnter No.of process: ");
  scanf("%d",&n);

for(i=0;i<n;i++)
{
  printf("\nProcess %d\n",i+1);
 prc[i] = i;
  printf("Arrival Time: ");
  scanf("%d",&at[i]);
  printf("Service Time: ");
 scanf("%d",&st[i]);
 printf("Priority : ");
 scanf("%d",&pr[i]);
qu[i]=0;
wt[i]=0;
ft[i]=0;
t3+=st[i];
}

for(k=0;k<t3;k++)
{
for(i=0;i<n;i++)
{
  if(at[i]<=k)
{


  for(j=i+1;j<n;j++)
   {
      if(at[i]>at[j])
	{
	    sort(i,j,n);

	}

else if(at[i]==at[j])
	{
	 if(pr[i] >  pr[j])
	{
	  
	sort(i,j,n);
	}
	else if(pr[i] == pr[j] && st[i]>st[j])
	{
		sort(j,i,n);
	}

	}
    }
}
}
}

printf("\nResults\n");
for( i = 0 ; i  < n ; i++) {

 if(at[i]>sum){
   stt[i]=at[i];

   }
 else          {
  stt[i]=sum;   }
 printf("\nProcess %d",prc[i]+1);
 printf("\nstart time = %d" , stt[i]);
 sum = sum + st[i];
 printf("\nfinish Time = %d ",sum);
 wt[i] =  stt[i] - at[i] ;
 printf("\nWaiting time = %d",wt[i]);

}


getch();

}
