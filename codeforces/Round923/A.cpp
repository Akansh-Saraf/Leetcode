#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n; 
        string s;
        cin>>s;
        int first=-1;
        int last=-1;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='B')
            {
                if(first==-1)
                {
                    first=i;
                }
                else
                {
                    last=i;
                }
            }
        }
        if(last==-1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<last-first+1<<endl;
        }

    }
}