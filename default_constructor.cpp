#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student()
    {
        cout<<"enter the rollno:";
        cin>>rollno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the fee:";
        cin>>fee;
    }

void display()
{
    cout<<endl<<rollno<<"\n"<<name<<"\n"<<fee;
}
};
int main()
{
    student s;
    s.display();
    
}
