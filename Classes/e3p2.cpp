#include<iostream>
#include<iomanip>
using namespace std;
class Carpark
{
    int car_reg;
    int cph;
    float parkhr;
    float total;
  public:  
   void input()
   {
        cout<<"Enter the car registration number:";
        cin>>car_reg;
        cout<<"Enter the charge per hour:";
        cin>>cph;
        cout<<"Enter the total parked hours:";
        cin>>parkhr;
        total=cph*parkhr;
   }
   void disp()
   {
    cout<<"\nPARKING DETAILS:\n";
    
    cout<<"Car Registration Number:"<<car_reg<<endl;
    cout<<"Total Parked Hours:"<<fixed<<setprecision(2)<<parkhr<<endl;
    cout<<"Total Charge:"<<fixed<<setprecision(2)<<total<<endl;
   }
   
 };
 int main()
 {
    Carpark C1;
    C1.input();
    C1.disp();
    return 0;
 }
