#include<iostream>
using namespace std;
class complex
{
private:
int real1;
int real2;
int img1;
int img2;
public:
void input()
{
cin>>real1;
cin>>real2;
cin>>img1;
cin>>img2;
}
void add()
{
cout<<"addition of real1 and img1: "<<real1+img1<<endl;
cout<<"addition of real2 and img2: "<<real2+img2<<endl;
}
void sub()
{
cout<<"subtraction of real1 and img1 "<<real1-img2<<endl;
cout<<"subtraction of real2 and img2: "<<real2-img2<<endl;
}
void display()
{
input();
add();
sub();
}
};
int main(){
complex c1;
c1.input();
c1.add();
c1.sub();
}







