#include<iostream>
using namespace std;
class student 
{
protected:
string name;
int rollno;
public:
void getname()
{
cout<<"enter name: ";
cin>>name;
cout<<"enter rollno: ";
cin>>rollno;
}
};
class studentmarks:public student
{
protected:
int marks[5];

public:
void getstudentmarks()
{
cout<<"enter marks of 5 subjects:";
for(int i=0;i<=5;i++){
cin>>marks[i];
}
}};
class studenttotal:public studentmarks
{
public:
void display()
{
int total=0;
cout<<"student name:"<<name<<endl;
cout<<"marks:";
for(int i=0;i<=5;i++)
{
cout<<marks[i]<<"";
total=total+marks[i];
}
cout<<"total="<<total<<endl;
}
};
int main()
{
studenttotal s;
s.getname();
s.getstudentmarks();
s.display();
}












