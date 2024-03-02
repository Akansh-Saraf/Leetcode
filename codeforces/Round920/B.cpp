#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string str1;
        cin>>str1;
        int ones=0;
        int zeros=0;
        string str2;
        cin>>str2;
        for(int i=0;i<n;i++)
        {
            if(str1[i]=='1' && str2[i]=='0')
            {
                ones++;
            }
            if(str1[i]=='0' && str2[i]=='1')
            {
                zeros++;
            }
        }
        int result;
        if(ones>zeros)
        {
            result=ones;
        }
        else{
            result=zeros;
        }
        cout<<result<<endl;
        
    }
}