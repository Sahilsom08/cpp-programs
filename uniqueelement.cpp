#include<iostream>
using namespace std;

//fun to find how many unique element present in array

//first method O(n^2)
void find(int arr[],int n)
{
    int count,i,j;
    count=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j]&& i!=j)
            {
              break;
            }
        }
        if(j==n)
        {
            cout<<"unique element is ["<<count<<"]="<<arr[i]<<endl;
            count++;
        }
    }
}

//second method O(n)
int fun(int arr[],int n)
{
    int ans=0;
   for(int i=0;i<n;i++)
   {
       ans=ans^arr[i];
   }
   return ans;
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
    find(arr,n);
    fun(arr,n);
    return 0;
}
