#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>> n;
    cin>> m;
    //scanf("%s",&n);
    //scanf("%s",&m);
    int v=0;
    int temp;
    int min_correct=9999;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>v)
        {
            v=temp;
        }
        if(temp<min_correct)
        {
            min_correct=temp;
        }
    }
    int min_wrong=9999;
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        if(temp<min_wrong)
        {
            min_wrong=temp;
        }
    }
    cout<< "v=" << v<< "wrong=" << min_wrong<< endl;
    if(2*min_correct>v)
    {
        v=2*min_correct;
    }
    if(min_wrong>v)
    {
        cout<< v << endl;
    }
    else
    {
        cout<< -1 << endl;
    }
}