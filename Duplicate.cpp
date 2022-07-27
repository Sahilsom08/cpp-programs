#include<iostream>
using namespace std;

//program find duplicate element present in array
//NOTE= one element should not be duplicated/repeated more than TWICE OR TWO TIMES 
//O(n^2)
void duplicate(int arr[],int n)
{
    int visited[n],i,j;
   // count=1;
    for(i=0;i<n;i++)
    {
        if(visited[i]==1)
        {
            continue;
        }
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                cout<<"duplicate element array="<<arr[i]<<endl;
                visited[j]=1;
                break;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   duplicate(arr,n);
    return 0;
}
