#include<iostream>
using namespace std;
class Add
{
private:
     int a,b;
public:
     Add(){cout<<"default constractor"<<endl;}
     Add(int x,int y)
     {
          a=x;
          b=y;
          cout<<"parameter constractro"<<endl;
     }
     void display()
     {
          cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
     }
     friend Add operator+(Add i,Add j);
};
     Add operator+(Add i,Add j)
    {
         Add temp;
         temp.a=i.a+j.a;
         temp.b=i.b+j.b;
         return temp;
    }

    int main()
    {
         Add a1(4,7);
         a1.display();
         Add a2(5,3);
         a2.display();
         Add a3;
         a3=a2+a1;
         a3.display();
         return 0;
    }
