#include<iostream>
using namespace std;
class complex
{
private:
int real;
int img;
public:
void input()
{
cin>>"enter real and img: ">>real>>img;
}
void display(){
cout<<real<<"+"<<img<<"i";}
void add(complexc1,complexc2)
{
real=c1.real+c1.real;
img=c1.img+c1.img;
}

int main(){
complex c1,c2,c3;
c1.input();
c2.input();
c3.add(c1,c2);
cout<<"addition:";
c3.display();
}







