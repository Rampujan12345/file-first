#include<iostream>
using namespace std;
class swap
{
    
    public:
    int &swaper(&p,&q)
    {
        int a;
        a=p;
        p=q;
        q=a;
        if(p>q)
        {
            p=2*p;
        }
        else
        {
            q=2*q;
        
        }
        
        return(p,q);
    }
    
    };
    
    int main()
    {
        
       swap c;
      int a,b;
     cout<<"enter the length and breadth";
     cin>>a>>b;
     cout<<a<<endl<<b<<endl;
     c.swaper(a,b);
     return 0;
        
        
    }