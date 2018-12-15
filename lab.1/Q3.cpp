#include<iostream>
using namespace std;
class calc{
int r,h;
public:
    void setvalues()
    {
        cout<<"Enter radious and height of cylinder";
        cin>>r>>h;
    }
    void getarea()
    {
       cout<<"the area is"<<2*3.15*r*(r+h);
    }
    void getvolume()
    {
       cout<<"the volume is"<<3.15*r*r*h;
    }

};
int main()
{
    calc obj;
    obj.setvalues();
    obj.getarea();
    obj.getvolume();
    

}
