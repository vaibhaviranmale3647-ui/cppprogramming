#include<iostream>
using namespace std;
class number
{
private:
int x;
public:
number(int val)
{
x=val;
}
void operator-()
{
x=-x;
}
void display()
{
cout<<x<<endl;
}
};
int main()
{
int userInputValue;
cout<<"enter an integer value:";
cin>> userInputValue;

number n1(userInputValue);
cout<<"original value:";
n1.display();

-n1;
cout<<"value after aplying unary minus(-):";
n1.display();
}



