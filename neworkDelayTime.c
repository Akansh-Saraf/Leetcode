#include<stdio.h>
#include<stdlib.h>

int networkDelayTime(int** times, int timesSize, int* timesColSize, int n, int k)
{
    int arr[n+1];

    // Initialize distances to a large value (indicating infinity)
    for (int i = 1; i <= n; i++)
    {
        arr[i] = -1;
    }
    // Set the distance from the source node to itself as 0
    arr[k] = 0;
    for (int i = 0; i < timesSize; i++)
    {
        int source = times[i][0];
        int target = times[i][1];
        int weight = times[i][2];

        if (arr[source] != -1 && arr[source] + weight < arr[target])
        {
            arr[target] = arr[source] + weight;
        }
    }
    int max=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==-1)
        {
            return -1;
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{

}