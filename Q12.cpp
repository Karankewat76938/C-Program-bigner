#include<iostream>
using namespace std;
//accept number and print odd number 
int main()
{
    int i=1, num;
    cout<<"Enter the range to print odd number: ";
    cin>>num;
    while(i<num)
    {
        cout<<i<<endl;
        i++;
        i++;
    }
    
    return 0;
}