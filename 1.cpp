#include<iostream>
using namespace std;
class Complex
{
private:
     int a,b;
public:
     Complex()
     {
         cout<<"default constractor"<<endl;
     }
     Complex(int x,int y)
     {
          cout<<"parametarize constractor"<<endl;
          a=x;
          b=y;
     }
     void showdata()
     {
          cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
     }
     Complex operator+(Complex c)
     {
          cout<<"operator+ called"<<endl;
          Complex temp;
          temp.a=a+c.a;
          temp.b=b+c.b;
          return temp;
     }
       Complex operator-(Complex c)
     {
          cout<<"operator- called"<<endl;
          Complex temp;
          temp.a=a-c.a;
          temp.b=b-c.b;
          return temp;
     }
      Complex operator*(Complex c)
     {
          cout<<"operator* called"<<endl;
          Complex temp;
          temp.a=a*c.a;
          temp.b=b*c.b;
          return temp;
     }
     friend bool  operator==(Complex d ,Complex p);

};
   bool  operator==(Complex d ,Complex p)
     {
         cout<<"\noperator == to called";
          if(d.a==p.a&&d.b==p.b)
               return true;
               else
                    return false;
     }

  int main()
  {
       Complex c1(4,6);
       c1.showdata();
       Complex c2(3,5);
       c2.showdata();
       Complex c3;
       c3=c1+c2;
       c3.showdata();
       cout<<endl;
       Complex b2(10,6),b3;
       b2.showdata();
      Complex b1(8,4);
       b1.showdata();
        b3=b2-b1;
       b3.showdata();
       cout<<endl;
       Complex m1(3,8);
       Complex m2(4,2),m3;
       m1.showdata();
       m2.showdata();
        m3=m2*m1;
       m3.showdata();
       cout<<endl;
       Complex e1(4,7);
       Complex e2(4,6);
       e1.showdata();
       e2.showdata();
       if(e1==e2)
          cout<<"\nvalues are both equal\n";
          else
               cout<<"\nvalues are not equal";
       return 0;
  }
