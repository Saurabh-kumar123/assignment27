#include<iostream>
using namespace std;
class fraction
{
private:
     long num,dem;
public:

     fraction(long int x=0,long int y=0)
     {
          num=x;
          dem=y;
     }
     friend void operator<<(ostream &o,fraction &f)
     {
          o<<f.num<<"/"<<f.dem<<endl;
     }
     friend void operator>>(istream &o,fraction &f)
     {
          cout<<"Numerator : ";
          cin>>f.num;
          cout<<"\nDenumrator : ";
          cin>>f.dem;
     }
     fraction operator++(int)
     {
          fraction f;
          f.num=num++;
          f.dem=dem++;
          return f;
     }
     fraction operator++()
     {
          fraction f;
          f.num=++num;
          f.dem=++dem;
          return f;
     }
};
  int main()
  {
       fraction f1,f2;
       cout<<"f1 : ";
       cout<<f1;
       cout<<"f2 : ";
       cout<<f2;
       cout<<"\n\nEnter the First Fraction value"<<endl;
       cin>>f1;
       cout<<"f1++ : ";
       f1++;
       cout<<f1;
       ++f1;
       cout<<"++f1 : ";
       cout<<f1;
       cout<<"\nEnter a Second fraction value\n";
       cin>>f2;
       f2=++f1;
       cout<<"\nf2 = ++f1\n\n";
       cout<<"f1 : ";
       cout<<f1;
       cout<<"f2 : ";
       cout<<f1;
       f2=f1++;
       cout<<"\nf2 = f1++\n";
       cout<<"\nf1 : ";
       cout<<f1;
       cout<<"f2 : ";
       cout<<f2;
       return 0;
  }
