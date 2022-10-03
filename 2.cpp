#include<iostream>
using namespace std;
class Unary
{
private:
     int a,b;
public:
     Unary(){cout<<"default constractor"<<endl;}
     Unary(int x,int y)
     {
          a=x;
          b=y;
          cout<<"parameter constractor"<<endl;
     }
     void display()
     {
          cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
     }
       Unary operator++()
     {
          cout<<"pre increment"<<endl;
          Unary temp;
          temp.a=++a;
          temp.b=++b;
          return temp;
     }
      Unary operator++(int)
     {
          cout<<"post increment"<<endl;
          Unary temp;
          temp.a=a++;
          temp.b=b++;
          return temp;
     }
};

   int main()
   {
        Unary u(3,7);
        u.display();
        (++u).display();
        (u++).display();
        u.display();
   }
