#include<iostream>
using namespace std;
class Employee{
public:
string Ename;
int Eid;
float Esalary;
string Edepartment;
public:
void input()
{
cout<<"Ename: ";
cin>>Ename;
cout<<"Eid: ";
cin>>Eid;
cout<<"Esalary: ";
cin>>Esalary;
}
void display(){
cout<<"Ename: "<<Ename<<endl;
cout<<"Eid: "<<Eid<<endl;
cout<<"Esalary: "<<Esalary<<endl;
}
};
int main(){
Employee e1;
e1.input();
e1.display();
}
