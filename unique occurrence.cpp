#include<iostream>
using namespace std;

//O(n^2)
void unique_oce(int arr[],int n)
{
    int visited[n];
    int count;

    for(int i=0; i<n; i++)
    {
        if( visited[i]==1 )
        {
            continue;
        }

        count=0;

        for(int j=0; j<n; j++)
        {
            if( arr[i] == arr[j] )
            {
                visited[j]=1;
                count++;
            }
        }
         
        cout<<arr[i]<<" is "<<count<<" times"<<endl;
    }
}
int main()
{
    int arr[5]={12,13,12,12,13};

    unique_oce(arr,5);
    
    return 0;
}
