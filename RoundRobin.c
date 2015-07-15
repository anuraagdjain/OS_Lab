#include<stdio.h>
void main()
{
     int k,j,q,i,n,ts,temp,sum=0;
     int ft[10],bt[10],wt[10],te[10],rt[10],at[10],ttr[10],stt[10];j=0; clrscr();
     printf("enter number of process :\t");
     scanf("%d",&n);
    printf("\n enter arrival time and service time\n");
    for(i=0;i<n;i++)
      {
	  printf("\nProcess %d\n",i+1);
	  printf("\narrival time   :  ");
	  scanf("%d",&at[i]);
	printf("\nService time ");
	  scanf("%d",&bt[i]);
	  te[i]=0;     wt[i]=0;
      }
    for(i=0;i<n;i++)
      {
	for(j=i+1;j<n;j++)
	 {
	     if(at[i]>at[j])
	       {
		    temp=at[i];                                          //sorting according to arrival time
		    at[i]=at[j];
		    at[j]=temp;
		    temp=bt[i];
		    bt[i]=bt[j];
		    bt[j]=temp;
	      }
	 }
     }
    printf("\n enter time slice\t");
    scanf("%d",&ts);
    q=0;
    clrscr();
    printf("\nprocess      :")  ;
    for(i=0;i<n;i++)
     {
       printf("  %d",i+1);
      }
    printf("\nService time   :");
    for(i=0;i<n;i++)
       {
	 printf("  %d",bt[i]);
	 rt[i]=bt[i];
	}
    printf("\nArrival time :");
    for(i=0;i<n;i++)
      {
	  printf("  %d",at[i]);
      }
    printf("\n Gaint chart \n");
    j=0;

    while(j<=n)
       {
	  j++;
	  for(i=0;i<n;i++)
	    {
	      stt[i] = q;
	      if(rt[i]==0)  continue;

	      if(rt[i]>ts)
		     {
			printf("\n %d\t P%d",q,i+1);

			q=q+ts;
			rt[i]=rt[i]-ts;
			te[i]=te[i]+1;
		     }

		  else
		    {
		       printf("\n %d\t P%d..",q,i+1);

		       wt[i]=q-te[i]*ts;
		       q=q+rt[i];
		       rt[i]=rt[i]-rt[i];
		    }
	      ft[i]=q;
	    }

       }                                   //end of while


    printf("\n Process   Waiting time finish time  ttr  start time" );
    for(i=0;i<n;i++)
       {


		       printf("\n P%d      :   %d |\t %d |\t %d|\t\t%d ",i+1,wt[i]-at[i], ft[i],bt[i]+(wt[i]-at[i]), stt[i] );
		       sum = sum + at[i];

	}

    getch();
 }
