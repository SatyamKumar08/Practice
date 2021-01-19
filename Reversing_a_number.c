#include<iostream>
using namespace std;

//Easy way to reverse a number

int main()
{
    int arr[10];
    int n, r;
    int i = 0;

    cout<<"Enter n: ";
    cin>>n;			//user input

    while(n > 0)
    {
        r = n % 10;		//finding remainder
        n = n / 10;		//eliminating ones place
        arr[i] = r;		//storing remainder in an array
        printf("%d", arr[i]);
        i++;
    }
    return 0;
}