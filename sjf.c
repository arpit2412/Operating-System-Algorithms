#include<stdio.h>
int main()
{
    int bt[10],tt[10],wt[10],n,i,j,a;
    printf("enter the number of process:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the burst time for the process %d\n",i);
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(bt[i]<bt[j])
            {
                a=bt[i];
                bt[i]=bt[j];
                bt[j]=a;
            }
        }
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
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
}
