#include<iostream>
using namespace std;
class Time
{
private:
     int hor,minn,sec;
public:
     Time(){hor=minn=sec=0;}
   friend int operator>>(istream &input,Time &t)
   {
        cout<<"\nEnter hours : ";
        input>>t.hor;
        cout<<"\nEnter minute : ";
        input>>t.minn;
        cout<<"\nEnter second : ";
        input>>t.sec;
        t.minn=t.minn+t.sec/60;
        t.sec=t.sec%60;
        t.hor=t.hor+t.minn/60;
        t.minn=t.minn%60;
        if(t.hor>=25)
        return 1;
        else
          return 0;
   }
   friend ostream & operator<<(ostream &print,Time t)
   {
        print<<"Hours : "<<t.hor<<endl<<"Minutes : "<<t.minn<<endl<<"Second : "<<t.sec<<endl;
        return print;
   }
    int operator==(Time t)
    {
           int tot=t.hor*3600+t.minn*60+t.sec;
           int tot1=t.hor*3600+t.minn*60+t.sec;
           if(tot==tot1)
          return 1;
         else
               return 0;
    }
};

  int main()
  {
       Time t,t1;
       cout<<"Enter a First Time";
       cout<<"\n---------------------";
       if(cin>>t)
       {
            cout<<"\nInvalid Time\n";
            return 0;
       }
       cout<<"\n";
       cout<<"First Time"<<endl;
       cout<<t;
       cout<<"\n\nEnter a Second Time";
       cout<<"\n------------------------";
       if(cin>>t1)
       {
            cout<<"\nInvalid Time\n";
            return 0;
       }
       cout<<"\n";
       cout<<"Second Time\n";
       cout<<t1;
       if(t==t1)
          cout<<"\n\nSame Time First and Second";
       else
          cout<<"\nDiffrent Time First and Second";
       cout<<"\n\n";
       return 0;
  }
