#include<iostream>
using namespace std;
class complex
{
private:
int real;
int img;
public:
complex(int r=0,int i=0)
{
real=r;
img=i;
}
complex operator-(complex c)
{
complex temp;
temp.real=real-c.real;
temp.img=img-c.img;
return temp;
}
void display()
{
cout<<real<<"-"<<img<<"i";
}
};
int main()
{
complex c1(3,4);
complex c2(2,5);
complex c3;
c3=c1-c2;
cout<<"\n1st complex no:";
c1.display();
cout<<"\n2nd complex no:";
c2.display();
cout<<"substraction:";
c3.display();
}



