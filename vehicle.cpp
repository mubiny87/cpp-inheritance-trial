#include<iostream>
#include<string>
using namespace std;

class vehicle
{
    protected:
    int wheels;
    int speed;
};
class car:public vehicle
{
protected:
    int doors;

    public:

    car()
    {
        cout<<"enter wheels"<<endl;
        cin>>wheels;
        cout<<"enter speed"<<endl;
        cin>>speed;
        cout<<"enter doors"<<endl;
        cin>>doors;
    }
        void display(){

        cout<<"number of wheels: "<<wheels<<endl;
        cout<<"speed: "<<speed<<endl;
        cout<<"number of doors: "<<doors<<endl;
        }
};


        int main()
        {
            car c;
            c.display();
            return 0;
        }
