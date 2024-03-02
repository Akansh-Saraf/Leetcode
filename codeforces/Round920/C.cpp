#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cout<<sizeof(long long)<<endl;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        long long f;
        cin>>f;
        long long a;
        cin>>a;
        long long b;
        cin>>b;
        long long m;
        long long mprev=0;
        for(int j=0;j<n;j++)
        {
            cin>>m;
            if(f<=0)
            {
                break;
            }
            if(a*(m-mprev)<b)
            {
                f=f-a*(m-mprev);
            }
            else
            {
                f=f-b;
            }
            mprev=m;
        }
        if(f<=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
}