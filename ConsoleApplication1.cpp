#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int *arr=new int[n];
    bool *flag=new bool[n];
    for(int i=0;i<n;i++){
        flag[i]=false;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i&&flag[j]==false){
                sum++;
                flag[j]=true;
                break;
            }
            else if(arr[j]>i&&flag[j]==false){
                sum++;
                flag[j] = true;
                break;
            }
        }
    }
    cout<<sum;
    delete[] arr;
    delete[] flag;
    return 0;
}