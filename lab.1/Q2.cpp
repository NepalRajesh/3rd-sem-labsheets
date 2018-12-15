 #include<iostream>

using namespace std;

class Interest{
float p,t,r;
public:
    void set(){
    cout<<"Enter p,t,r??";
    cin>>p>>t>>r;
    }
    void getresult(){
    cout<<"the simple intrest is"<<p*t*r/100;
    }
};
int main(){

Interest obj;
obj.set();
obj.getresult();

}
