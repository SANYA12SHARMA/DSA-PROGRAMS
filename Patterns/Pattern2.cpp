#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=1;
        for(int j=n-1;j>=i;j--){
            cout<<k;
            k++;
        }
        for(int star=0;star<(2*i);star++){
            cout<<'*';
        }
        for(int x=n-i;x>0;x--){
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}

// 4
// 12344321
// 123**321
// 12****21
// 1******1
