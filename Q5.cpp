#include<iostream>
using namespace std;
//largest number find
class large
{
    private:
    int a,b,c;
    public:
    void in()
    {
        cout<<"Enter any three numbers :";
        cin>>a>>b>>c;

    }
    void out()
    {
        if (a>b)
        {
            if (a>c)
            {
                cout<<"largest number is "<<a ;
            }
            else if (b>c)
            {
                cout<<"largest number is "<<b ;
            }
            else
            {
                cout<<"largest number is "<<c ;
            }
        }
        else if( b>c)
         {
                cout<<"largest number is "<<b ;
            }
            else
            {
                cout<<"largest number is "<<c ;
            }
    }
};
int main()
{
    large num;
    num.in();
    num.out();

    return 0;
}