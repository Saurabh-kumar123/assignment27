#include<iostream>
using namespace std;
class Matrix
{
     private:
     int ar[3][3];
     public:
          void setarray()
          {
               int i,j;
               cout<<"Enter a 9 element"<<endl;
               for(i=0;i<3;i++)
                    for(j=0;j<3;j++)
               cin>>ar[i][j];
          }
          void display()
          {
               int i,j;
               for(i=0;i<3;i++)
               {
                    for(j=0;j<3;j++)
                    cout<<"\t"<<ar[i][j];
                    cout<<"\n";
               }
          }
          Matrix operator+(Matrix m)
          {
               int i,j;
               Matrix s;
               for(i=0;i<3;i++)
                    for(j=0;j<3;j++)
                    s.ar[i][j]=ar[i][j]+m.ar[i][j];
               return s;
          }
};

  int main()
  {
       Matrix m,m2,m3;
       cout<<"Enter a first matrix\n";
       m.setarray();
       cout<<"\nEnter a second matrix\n";
        m2.setarray();
        cout<<"\nFirst matrix\n";
       m.display();
       cout<<"\nSecond matrix"<<endl;
       m2.display();
       cout<<"\nAddition matrix\n";
       m3=m+m2;
       m3.display();
       return 0;
  }
