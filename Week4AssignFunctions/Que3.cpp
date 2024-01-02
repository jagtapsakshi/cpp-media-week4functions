#include <iostream>
using namespace std;

void odd(int a,int b){
    int i;
    for(i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
        // else continue;
    }
    return;
}

int main(){
    int a,b;
    cout<<"Enter the a:";
    cin>>a;
    cout<<"Enter the b:";
    cin>>b;
    odd(a,b);
    
} 

