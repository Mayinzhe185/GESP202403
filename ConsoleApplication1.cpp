#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int b;
    cin>>b;
    for(int i=0;i<b;i++){
        int t,t1;
        cin>>t>>t1;
        sort(arr+t-1,arr+t1);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}