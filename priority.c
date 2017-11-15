#include<stdio.h>
int main()
{
    int wt[10],tt[10],bt[10],i,j,n,a,b,pt[10];
    printf("enter the number of process:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the execution time:");
        scanf("%d",&bt[i]);
        printf("enter the priority:");
        scanf("%d",&pt[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(pt[i]<pt[j])
            {
                a=pt[i];
                pt[i]=pt[j];
                pt[j]=a;
                b=bt[i];
                bt[i]=bt[j];
                bt[j]=b;
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
