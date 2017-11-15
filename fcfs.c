#include <stdio.h>

int main()
{
    int n,wt[20],bt[20],j,tt[20],i;
    printf("enter the number of processes ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the execution or burst time of the process %d\n",i);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=0;i<n;i++)
    {   wt[i]=0;
        for(j=0;j<i;j++)
        wt[i]=wt[i]+bt[j];
    }
    for(i=0;i<n;i++)
    {
        tt[i]=wt[i]+bt[i];
    }
    for(i=0;i<n;i++)
    {
        printf("\nwaiting %d \nTurnaround %d \n ",wt[i],tt[i]);
    }
return 0;
}
