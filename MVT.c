#include<stdio.h>
#include<conio.h>
 
void main()
{
 
 int i,j,n,totm,m_os,m[10],m2[10],arr[1024],temp=0,tm=0;
 clrscr();
        printf("\nEnter Memory Size  (MB): ");
        scanf("%d",&totm);
        printf("\nEnter OS Memory Size (MB): ");
        scanf("%d",&m_os);
        printf("\nEnter no.of Process: ");
        scanf("%d",&n);
        totm-=m_os;
        for(i=0;i<n;i++)
        {
                printf("\nEnter Memory Size for process %d (MB): ",i+1);
                scanf("%d",&m[i]);
                m2[i]=m[i];
        }
        for(i=0;i<n;i++)
        {
                if(m[i] <= totm)
                {
                        printf("\nMemory Allocated for Process %d,",i+1);
                        printf("\nMemory: %d to %d",temp,m[i]+temp);
                        temp+=m[i];
                        totm-=m[i];
 
                        m2[i]= -1;
 
 
                }
                else
                {       if(m2[i] == -1 )
                        {
                           totm+=m[i];
                        tm=0;
                        }
 
 
                        printf("\nProcess %d completed ",i);
                        printf("\nProcess  Allocated %d",i+1);
                                printf("\nMemory: %d to %d",tm,m[i]+tm);
                        tm+=m[i];
                }
        }
        printf("\nFree Space (MB) = %d",totm-tm);
getch();
}
