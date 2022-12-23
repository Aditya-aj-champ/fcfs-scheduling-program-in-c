#include<stdio.h>
int main()
{   
    int n,i,j;
    printf("enter the no. of process : ");
    scanf("%d",&n);
    int p[n],at[n],bt[n],ct[n],tat[n],wt[n],temp[n];
    float awt=0,atat=0;
    printf("enter the process id :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]); 
    }
    printf("enter the arrial time :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }
    printf("enter the burst time :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    temp[0]=0;
    printf("procces\t burst time\t arrival time\t waiting time\t turan around time\n");
    for(i=0;i<n;i++)
    {
      wt[i]=0;
      tat[i]=0;
      temp[i+1]=temp[i]+bt[i];
      wt[i]= temp[i]-at[i];
      tat[i]=wt[i]+bt[i];
      awt=awt+wt[i];
      atat=atat+tat[i];
      printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],at[i], wt[i],tat[i]);
   }
   printf("average of waiting time: %.03f \n",awt/n);
   printf("averag of turn around time: %.03f ",atat/n);
}