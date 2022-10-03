#include<iostream>
using namespace std;
class mysirg
{
private:
     char str[100];
public:
     void setstring();
     void display();
     void operator!();
};
void mysirg::setstring()
{
     cout<<"Enter a string"<<endl;
     cin>>str;
}
void mysirg::display()
{
     cout<<str;
}
void mysirg::operator!()
{

     for(int i=0;str[i];i++)
     {
          if(str[i]>=65&&str[i]<=96)
          str[i]=str[i]+32;
         else if(str[i]>=97&&str[i]<=122)
               str[i]=str[i]-32;
     }
               cout<<"\nrevers the case of "<<str;
}

int main()
{
     mysirg m;
     m.setstring();
     !m;
     return 0;
}
