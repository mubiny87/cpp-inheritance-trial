#include<iostream>
#include<string>
using namespace std;

class person{

protected:
     string name;
};

class student:public person
{
private:
    string ID;

public:
    student()
    {
         cin>>name;
         cin>>ID;
    }
    void display()
    {

    cout<<"name is "<<name<<endl;
    cout<<"id is "<<ID<<endl;
    }

};
int main()
{
    student s;
    s.display();
    return 0;
}

