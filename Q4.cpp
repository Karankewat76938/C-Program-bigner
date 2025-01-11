#include<iostream>
using namespace std;
//find percentage
class student
{
    private :
    int hindi,eng,math,total;
    public:
    void in()
    {
        cout<<"Enter first subject marks : ";
        cin>>hindi;
        cout<<"Enter second subject marks : ";
        cin>>eng;
        cout<<"Enter third subject marks : ";
        cin>>math;
        total=hindi+eng+math;
    }
    void work()
    {
        total/3;

    }
    void out()
    {
        cout<<"Total number is "<<total<<endl;
        cout<<"percentage : "<<total/3<<"%" ;
    }

};
int  main()
{
    student s1 ;
    s1.in();
    s1.work();
    s1.out();
    return 0;
}