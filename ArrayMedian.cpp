#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
        double findMedian(vector<int>& nums1,vector<int>& nums2)
        {
            int n1=nums1.size();
            int n2=nums2.size();
            int i=0; 
            int j=0; 
            int k=0;
            int n3=n1+n2;
            vector<int> nums3(n3);
            while(i<n1 && j<n2)
            {
                if(nums1[i]<nums2[j])
                {
                    nums3[k]=nums1[i];
                    i++;
                }
                else
                {
                    nums3[k]=nums2[j];
                    j++;
                }
                k++;
            }
            while(i<n1)
            {
                nums3[k]=nums1[i];
                k++;
                i++;
            }
            while(j<n1)
            {
                nums3[k]=nums2[j];
                k++;
                j++;
            }
            cout<<"Length: " << n3 <<endl;
            if(n3%2==1)
            {
                return nums3[n3/2];
            }
            else
            {
                double r= (nums3[n3/2-1]+nums3[n3/2]);
                return r/2;
            }
        }
};
int main()
{
    Solution obj;
    vector<int> v1={1,3,4};
    vector<int> v2={2};
    double result=obj.findMedian(v1,v2);
    cout<< "Median: " << result <<endl;
}