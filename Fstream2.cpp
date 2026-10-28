#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream file;
  file.open("student.txt");
  if (file.is_open())
  {
     cout<<"file opened successfully:";
       file.close();
       }
       else
       {
         cout<<"file cannot opened:";
        }
  }
