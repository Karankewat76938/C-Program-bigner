#include<iostream>
using namespace std;
//find leap year
class year
{
    private:
    int y,thd,hd,td,ud,i,sum;                         //thoudsand digit,hundred digit, tenth digit, unit digit

    public:
    void in()
    {
        cout<<"Enter any year : ";
        cin>>y;

    }
    void op()
    {
        if (y>999&&y<=9999)
        {
        thd=y/1000;\
        i=thd*1000;
        hd=(y%1000)/100;
        td=(y%1000)/10;
        ud=y%10;
        sum=thd+hd+td+ud;
        //cout<<"sum"<<sum<<endl;
        if (y%4==0)
        {
            cout<<"leap year";
        }
        else 
        cout<<"Not a leap year";
        }
        else
        cout<<"try again...!";
    }
};
int main()
{
    year obj ;
    obj.in();
    obj.op();

    return 0;
}