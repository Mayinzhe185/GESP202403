#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a;
    cin>>a;
    const int c=a;
    vector<int> b(c, 0);
    for(int i=0;i<=c;i++){
        if(i==0){
            b[i]=1;
            continue;
        }
        else if(i==1){
            b[i]=1;
            continue;
        }
        else if(i==2){
            b[i]=2;
            continue;
        }
        else if(i==3){
            b[i]=4;
            continue;
        }
        else{
            b[i]=b[i-1]+b[i-2]+b[i-3];
        }
    }
    cout << b[c] << endl;
    return 0;
}