#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        char x='A';
        for(int j=1;j<=i;j++){
            cout<<x;
            x++;
        }
        
        cout<<endl;
    }
    return 0;
}
// 5
// ABCDE
// ABCD
// ABC
// AB
// A
