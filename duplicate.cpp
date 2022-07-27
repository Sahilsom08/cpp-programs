#include<iostream>
using namespace std;

//find second duplicate element in array
//uisng XOR ing
//O(n)
int fun(int arr[],int n)
{
    
    int i,ans=0;
   for( i=0;i<n;i++)
   {
       ans=ans^arr[i];
   }
   for( i=1;i<n;i++)
   {
       ans=ans^i;
   }
   return ans;
}
int main()
{
    int arr[5]={1,3,2,4,3};
    cout<<fun(arr,5)<<endl;

    int odd[7]={1,2,3,4,5,6,2};
    cout<<fun(odd,7)<<endl;

   int even[6]={1,2,4,3,4,5};
   cout<<fun(even,6)<<endl;
   return 0;
}
