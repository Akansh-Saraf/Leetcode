#include<iostream>

using namespace std;

int main()
{
    int n;
    std::cin>>n;
    int x=0;
    int y=0; 
    int z=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        x=x+temp;
        cin>>temp;
        y=y+temp;
        cin>>temp;
        z=z+temp;
    }
    if(x==0 && y==0 && z==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
