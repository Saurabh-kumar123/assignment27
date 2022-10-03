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
          void operator-()
          {
               int i,j;
               for(i=0;i<3;i++)
                    for(j=0;j<3;j++)
                    ar[i][j]=
                    -ar[i][j];
          }
};

  int main()
  {
       Matrix m;
       m.setarray();
       m.display();
       -m;
       cout<<"\nnegative matrix"<<endl;
       m.display();
       return 0;
  }
