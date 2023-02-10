#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        for(int k=i-1;k>=1;k--){
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}

// 5
// 55555
// 45555
// 34555
// 23455
// 12345
