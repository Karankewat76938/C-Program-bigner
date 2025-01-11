#include<iostream>
using namespace std;
//accept a no. and check the given no is armstrong or not.
int main()
{
    int num,t,rev =0;
    cout<<"Enter any three digit number : ";
    cin>>num;
    t=num;
    if (99<num || num<999)
    {
    while(num>0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
   if (t==rev)
    {
        cout<<"your number is armstrong..."<<endl;
    }
    else
    cout<<"YOur number is not armstrong..."<<endl;
    }
    else 
    cout<<"you entered wrong input..."<<endl;

    return 0;

}