#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,bt[20],wt[20],st[20];
    cout<<"Enter the number of process : ";
    cin>>n;
    cout<<"Enter the brust time : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"P["<<i+1<<"]: ";
        cin>>bt[i];
    }
    wt[0]=0;
    for(int i=1; i<n; i++)
    {
        wt[i]=0;
        for(int j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
    }
    cout<<endl;
    cout<<"Process \tBrust time\twaiting Time\tservice time "<<endl;
    for(int i=0;i<n;i++)
    {
        st[i]=bt[i]+wt[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<st[i];
    }
}
