#include<iostream>
using namespace std;
// reverse of natural numbers
int main()
{
   int n,i=0;
   cout<<"Enter the limit revrse of natural numbers : ";
   cin>>n;
   while(i<n)
   {
        cout<<n<<endl;
        --n;
   }
    
    return 0;
}