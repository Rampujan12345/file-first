#include<iostream>
using namespace std;

 class time{

  int hour;
  int minute;
  int sec;
  public:
  time();
  time(int);
  time(time&);
    void convert();
    void output();
    ~time();
 };
 time::time()
 {
     hour=12;
     minute=0;
     sec=0;
 }
 time::time(int second)
 {
     sec=second;
 }
 time::time(time &a)
 {
     hour=a.hour;
     minute=a.minute;
     sec=a.sec;
 }
 void time::convert()
 {
     
     minute=sec/60; 
      hour=minute/60;    // minute=(sec-(hour*60*60))/60;
     sec=sec%60;
     minute=minute%60;
    
 }
void time::output()
{
    cout<< "hour="<<hour<<endl<<"minutes="<<minute<<endl<<"second="<<sec<<endl;
}
time::~time()
{
 output();
}
int main(){
    class time u;
    class time a(4000);
    
    a.convert();
    class time b(a);


    return(0);
}

