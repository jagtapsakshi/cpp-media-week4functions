#include <iostream>
using namespace std;

void odd(int a){
    int count=0;
    while(a>0){
        count++;
        a /=10;
    }
    cout<<"The count of number is: "<<count<<endl;

}

int square(int p){
    return p*p;
}
    

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    odd(n);
    cout<<"Square of number is:"<<square(n);
    
} 

