#include<iostream>
using namespace std;
class shape
{
public :
virtual void area()=0;
};
class circle : public shape
{
float r;
public:
circle (float x)
{
r=x;
}
void area() override
{
cout<<"area of a circle: "<<3.14*r*r<<endl;
}
};
class rectangle :public shape
{
int length,breath;
public:
rectangle(int l,int b)
{
length=l;
breath=b;
}

void area() override
{
cout<<" area of a rectangle: "<<length*breath<<endl;
}
};
class square : public shape
{
int length;
public:
square(int l)
{
length=l;
}
void area() override
{
cout<<"area of a square"<<length*length<<endl;
}
};

int main()
{
int l;
int b;
int r;
circle c (5);
rectangle r(2,6);
square s(4);
Shape = &c;
shape->area();
Shape = &r;
shape->area();
Shape = &s;
shape->area();
}


