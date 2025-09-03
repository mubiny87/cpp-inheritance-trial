#include<iostream>
#include<string>
using namespace std;

class shape
{
protected:
    int width;
    int height;

};
class rectangle:public shape
{
    private:
        float area;
    public:
        rectangle()
        {
            cout<<"enter height: "<<endl;
            cin>>height;
            cout<<"enter width: "<<endl;
            cin>>width;
        }
void display()
{
cout<<"area: "<<height*width<<endl;
}

};
int main()
{
    rectangle r;
    r.display();
    return 0;
}
