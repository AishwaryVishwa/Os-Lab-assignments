#include<bits/stdc++.h>
using namespace std;
class fcfs
{
    public:
    void cmpt_time(int Bt[],int n,int Ct[])
    {
        Ct[0]=Bt[0];
        for(int i=1;i<n;i++)
        {
            Ct[i]=Ct[i-1]+Bt[i];
        }
    }
    void turnaround_time(int Ct[],int n,int At[],int Tt[])
    {
        for(int i=0;i<n;i++)
        {
            Tt[i]=Ct[i]-At[i];
        }
    }
    void waiting_time(int Bt[],int n,int Wt[],int Tt[])
    {
        for(int i=0;i<n;i++)
        {
            Wt[i]=Tt[i]-Bt[i];
        }
    }
};
int main()
{

    fcfs obj;

    int Bt[4]={3,4,6,7};
    int Ct[4];
    int Tt[4];
    int Wt[4];
    int At[4]={0,0,0,0};


    obj.cmpt_time(Bt,4,Ct);
    obj.turnaround_time(Ct,4,At,Tt);
    obj.waiting_time(Bt,4,Wt,Tt);


    for(int i=0;i<4;i++)
    {
        cout<<i<<"    "<<Bt[i]<<"    "<<At[i]<<"    "<<Ct[i]<<"    "<<Tt[i]<<"    "<<Wt[i]<<endl;
    }
    return 0;
}