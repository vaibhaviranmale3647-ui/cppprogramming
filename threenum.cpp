#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cin>>a;
 cin>>b;
 cin>>c;
 if (a>=b && a>=c)
 {
    cout<<"a is big";
 }
 else if (b>=a && b>=c)   
 {
   cout<<"b is big"; 
 }
 else  
    cout<<"c is big";    
}
