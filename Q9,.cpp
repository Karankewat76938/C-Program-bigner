#include<iostream>
using namespace std;
//print individual dijits with loop
class num
{
    int n,i;
    public:
    void in()

    {
        int no[n];
        cout<<"Enter the size : ";
        cin>>n;
        cout<<"Enter "<<n<<" numbers ";
         for ( i=0;i<n;i++)
         cin>>no[i]; 
         cout<<"Your answer is ...."<<endl;
        for (i=0;i<n;i++)
         cout<<no[i]<<endl;
    }
};
int main ()
{
    num n;
    n.in();
}