#include <iostream>
using namespace std;
int square(int n) {
    int squ;
    squ = n*n;
    return squ;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<square(i)<<endl;

    } 
    


}
