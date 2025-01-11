#include<iostream>
using namespace std;
//accept any string and print it individual
int main()
{
    int i,n;
    cout<<"Enter the limit of your string :";
    cin>>n;
    char str[n];
    cout<<"Enter any string : ";
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }
    cout<<"\n\nYOu entered that string...\n";
    for (i=0;i<n;i++)
    {
        cout<<i<<". element :"<<str[i]<<endl;
    }

    return 0;
}