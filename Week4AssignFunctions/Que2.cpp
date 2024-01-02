#include <iostream>
#include <cmath>
using namespace std;
float area (float n){
    float area;
    area = 3.14 * n * n;
    return area;

}

int main(){
    float radius;
    cout<<"Enter the radius:";
    cin>>radius;
    cout<<"Area of "<<radius<<" is: "<<area(radius);

} 
    
