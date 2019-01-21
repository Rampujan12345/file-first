#include<iostream>
using namespace std;
class geomerty
{  

    private:
    int s;
    float r,l,b;
    public:
    void getdata(int a)
    {
       if (a==1)
       { 
         cout<<"enter the length of square"<<endl;
         cin>>s;
         cout<<"area is"<<getarea(s);

       }
       else if(a==2)
       {
         cout<<"enter the radius of circle"<<endl;
         cin>>r;
         cout<<"area is"<<getarea(r);
           
       }
       else if(a==3)
       {

        cout<<"enter the length and breadth of rectangle"<<endl;
        cin>>l>>b;
        cout<<"area is"<<getarea(l,b);

       }
       else
       {
           cout<<getarea();
       }

    }
    inline int getarea(int a)
    {
        return(a*a);
    }

      inline float getarea(float a)
    {
        return(3.14*a*a);
    }
     float getarea(float a,float b)
     {
       return(a*b);
     }
    

};
int main()
{
int a;
cout<<"enter the shape \n 1:square 2:circle 3:rectangle \n";
cin>>a;
geometry R;
R.getdata(a);
return 0;

}