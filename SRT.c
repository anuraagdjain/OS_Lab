#include<stdio.h>
#include<conio.h>
void main()

{

int n,ar[10],st[10],total=0,i,j,small,temp,procs[100],k,wait[10],ft[10];
int time=-1,stt[10];
clrscr();
printf("ENETR THE NUMBER OF PROCESSES:");
scanf("%d",&n);

for(i=0;i<n;i++)

{
	printf("\nProcess %d\n",i+1);
  printf("Arrival Time: ");
  scanf("%d",&ar[i]);
  printf("Service Time: ");
  scanf("%d",&st[i]);
  wait[i]=0;
  total+=st[i];
  stt[i]=0;
}


for(i=0;i<n;i++)
{
   for(j=i+1;j<n;j++)

  {

    if(ar[i]>ar[j])

  {

    temp=ar[i];
    ar[i]=ar[j];
    ar[j]=temp;
    temp=st[i];
  st[i]=st[j];
  st[j]=temp;

  }

 }

}


for(i=0;i<total;i++)

{

small=3200;

  for(j=0;j<n;j++)

  {

    if((st[j]!=0) &&  (ar[j]<=i) && (st[j]<small))

    {

      small=st[j];  
      k=j;

    }

}

st[k]--;

procs[i]=k;

}

k=0;

for(i=0;i<total;i++)

{

    for(j=0;j<n;j++)

    {

      if(procs[i]==j)

      {

        ft[j]=i;

        wait[j]++;

      }


    }

}

for(i=0;i<total;i++)
{
  for(j=0;j<n;j++)
  {
     if(procs[i]==j && procs[i] != time && procs[i] != -1)
     {

	  time = procs[i];
	  stt[j]=i;

	  for(k=0;k<total;k++)
	  {
	    if(procs[k]== j)
	      {
	         procs[k] = -1;
	      }
	   }
  }
}

}

printf("\nProc\tStart\tFinish\tWait\tTTR\n");
for(i=0;i<n;i++)

{ 
printf("\n%d\t%d\t%d\t%d\t%d\n",i+1,stt[i],ft[i]+1,(((ft[i]+1)-wait[i])-ar[i]),(ft[i]-ar[i])+1);
}

getch();
}
