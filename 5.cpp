#include<iostream>
using namespace std;
class Number
{
    private:
         int x,y,z;
    public:
        Number(){}
    void accept()
    {
         int a,b,c;
         cout<<"Enter a Three Number\n";
         cin>>a>>b>>c;
         x=a;
         y=b;
         z=c;
    }
     void display()
     {
          cout<<"X = "<<x<<endl<<"Y = "<<y<<endl<<"Z = "<<z<<endl;
     }
   void operator-()
     {
          x=-x;
          y=-y;
          z=-z;

     }
};

    int main()
    {
         Number n;
         n.accept();
         n.display();
         -n;
         cout<<"\nnegative number are\n\n";
         n.display();
         return 0;
    }
