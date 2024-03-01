#include<iostream>
#include<cmath>

using namespace std;

void copilot()
{
    
}

int main()
{
    int t;
    cin>>t;
    int x[2];
    int y[2];
    for(int i=0;i<t;i++)
    {
        int temp=0;
        cin>>x[0];
        cin>>y[0];
        for(int j=0;j<3;j++)
        {
            cin>>temp;
            if(temp!=x[0])
            {
                x[1]=temp;
            }
            cin>>temp;
            if(temp!=y[0])
            {
                y[1]=temp;
            }
        }
        int xlen=x[1]-x[0];
        int ylen=y[1]-y[0];
        int result=abs(xlen*ylen);
        cout<<result<<endl;
    }
}