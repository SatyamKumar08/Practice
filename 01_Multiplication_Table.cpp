#include<iostream>
using namespace std;
int main(void){
    // Multiplication Table
    int n;
    
    cout<<"Enter the number: ";
    cin>>n;
    cout<<endl;
    
    for (int i = 1; i <= 10; i++){
        cout<<n <<" x " << i <<" = "<< n * i<<endl; 
    }
    cout<<endl;
    
    return 0;
}