//Priority - Preemptive Version.
#include<stdio.h>

int main()

{

int n,ari[10],bur[10],total=0,i,j,small,temp,proc[100],procs[100],k,waiting[10],finish[10];
   int time=-1,pr[10],stt[10];
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

if(ari[i]>ari[j])

{

temp=ari[i];

ari[i]=ari[j];

ari[j]=temp;




temp=bur[i];

bur[i]=bur[j];

bur[j]=temp;

}

}

}




for(i=0;i<total;i++)

{

small=3200;

for(j=0;j<n;j++)

{

if((bur[j]!=0) &&  (ari[j]<=i) && (pr[j]<small))

{

small=pr[j];  k=j;

}

}

bur[k]--;

procs[i]=k;
proc[i]=k;
}



k=0;

for(i=0;i<total;i++)

{

for(j=0;j<n;j++)

{

if(procs[i]==j)

{

finish[j]=i;

waiting[j]++;

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
printf("\n%d\t%d\t%d\t%d\t%d\n",i+1,stt[i],finish[i]+1,(((finish[i]+1)-waiting[i])-ari[i]),(finish[i]-ari[i])+1);
}

//To Display The Gantt Chart.
/*for(i=0;i<total;i++)
{
  printf("%d,",proc[i]+1);
}
 */


return 0;
}
