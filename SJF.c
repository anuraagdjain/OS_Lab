#include<stdio.h>
int main()
{
	int i,x;
	int stt1,f1;
	int tttime,waitingtime;
	int ft[20],stt[20],wt[20],ttt[20];
	int arrival[10],st[10],n;
	int temp,temp1,j,shortestt;
	f1=0;
    printf("\nEnter No.of Process: ");
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("\nProcess %d",i+1);
    printf("\nArrival Time %d = ",i+1);
    scanf("%d",&arrival[i]);
    printf("\nService Time %d = ",i+1);
	scanf("%d",&st[i]);
}
	for(i=0;i<n;i++)
	{
		stt1=f1;
		while(arrival[i]>stt1)
		{
			f1=f1+1;
			stt1=f1;
		}
		stt[i]=stt1;
		x=i+1;
		shortestt=i;
		for(j=i;j<n;j++)
		{
			if(arrival[j]<=f1)
			{
				if(st[j]<=st[shortestt])
				{
					shortestt=j;
				}
			}
		}
		temp=st[shortestt];
		st[shortestt]=st[i];
		st[i]=temp;
		temp1=arrival[shortestt];
		arrival[shortestt]=arrival[i];
		arrival[i]=temp1;
		f1=st[i]+f1;
		ft[i]=f1;
		if(arrival[i]<stt1)
		{
			waitingtime=f1-arrival[i]-st[i];
		}
		else
		{
			waitingtime=arrival[i];
		}
		
		wt[i]=waitingtime;
		tttime=st[i]+waitingtime;
        ttt[i]=tttime;

	}
	printf("Arrival\t st\t sttart\t Finish\t Waiting\t TTT\t\n");
	for(i=0;i<n;i++)
	{
		printf("  %d\t %d\t\t %d\t %d\t %d\t\t %d\t\n",arrival[i],st[i],stt[i],ft[i],wt[i],ttt[i]);

	}
return 0;
}

