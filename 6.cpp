#include<iostream>
#include<cstring>
using namespace std;
class Cstring
{
private:
     char str[20];
public:
     Cstring(){}
     void setstring()
     {
          cout<<"Enter a string\n";
          cin>>str;
     }
     void display()
     {
          cout<<" "<<str<<endl;
     }
     Cstring operator+(Cstring c)
     {
          Cstring s;
          strcpy(s.str,str);
          strcat(s.str,c.str);
          return s;
     }
     int operator==(Cstring &x);

};
  int Cstring::operator==(Cstring &x)
  {
       int i,j,r=0;
       for(i=0;str[i];i++)
          for(j=0;x.str[j];j++)
          if(str[i]==x.str[j])
             r++;
       else
          r=0;
          if(r==0)
          return 1;
          else
          return 0;
  }

  int main()
  {
       Cstring c,c2,c3;
       int  result=0;
       c.setstring();
       cout<<"\nFirst string \n";
       cout<<"--------\n";
       c.display();
       c2.setstring();
       cout<<"\nSecond string \n";
       cout<<"---------\n";
       c2.display();
       c3=c+c2;
       cout<<"concatinate string\n";
       cout<<"----------\n";
       c3.display();
       result=c==c2;
       if(result==0)
          cout<<"\nBoth string are same \n";
       else
          cout<<"\nstring are diffrent\n";
       return 0;
  }
