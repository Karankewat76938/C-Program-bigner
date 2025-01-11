#include<iostream>
using namespace std;
//accept any threee number and add individual digit
int main()
{
    int num,temp,a,b,c;
    cout<<"Enter any three digit number : ";
    cin>>num;
    if (99<num || num<999)
    {
        a=(num/100);
        b=(num/10)%10;
        c=num%10;
        cout<<"YOur answer is: "<<a+b+c<<endl;
    }
    else
    cout<<"you enter wrong value..."<<endl;

    return 0;
}