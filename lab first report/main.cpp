#include<iostream>
using namespace std;
class student 
{
 int *roll=new int;
 char *name=new char[20];
 public:
 void allocation()
 {
    
      cout<<"enter the roll no"<<endl;
      cin>>*roll;
      cout<<"value:"<<*roll<<endl;
      cout<<"enter the name "<<endl;
      cin>>*name;
      cout<<"name:"<<*name<<endl;
      delete roll;
      delete name;
      cout<<"roll:"<<*roll<<endl<<"name:"<<*name<<endl;


 }


};
int main()
{
student R;
R.allocation();
return 0;
}