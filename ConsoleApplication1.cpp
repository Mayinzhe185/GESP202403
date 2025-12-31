#include <iostream>
#include <vector>
using namespace std;
int coin(int a){
    int num[4]={1,5,10,20};
    vector<int> dp(a+1,1e9);
    dp[0]=0;
    for(int i=1;i<=a;i++){
        for(int j=3;j>=0;j--){
            if(i>=num[j]){
                dp[i]=min(dp[i],dp[i-num[j]]+1);
            }
        }
    }
    return dp[a];
}
int main()
{
    int a;
    cin>>a;
    cout<<coin(a)<<endl;
    return 0;
}