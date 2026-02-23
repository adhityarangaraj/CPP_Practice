#include<iostream>
using namespace std;
class Car
{   
    public:
    int carID;
    string make; 
    string model;
    int year, rentalPrice; 
    bool availabilityStatus;
    void input()
    {
        cout<<"Enter CarID:";
        cin>>carID;
        cin.ignore();
        cout<<"Enter make:";
        getline(cin,make);
        cout<<"Enter model:";
        getline(cin,model);
        cout<<"Enter year:";
        cin>>year;
        cout<<"Enter the rental price:";
        cin>>rentalPrice;
        availabilityStatus=1;
    }
   void rent()
   {
     
      if(availabilityStatus)
      {
         availabilityStatus=0;
         cout<<"Car rented sucessfully!!\n";
      }
      else
        cout<<"The car is not available to rent!!\n";
   }
   void avble()
   {
    if(availabilityStatus)
        cout<<"Details:"<<carID<<" "<<make<<" "<<model<<" "<<rentalPrice<<endl;
   }
};
int main()
{
    int n;
    cout<<"Enter no of cars:";
    cin>>n;
    Car c[n];
    for(int i=0;i<n;i++)
    {
          c[i].input();
          cout<<"\n";
    }
    int temp,co=0;
    cout<<"Enter the car ID to rent:";
    cin>>temp;
    for(int i=0;i<n;i++)
    {
        if(temp==c[i].carID)
        {
            c[i].rent();
            co++;
        }
    }
    if(co==0)
        cout<<"Invalid carID entered\n";
    cout<<"Available Cars:\n";
    for(int i=0;i<n;i++)
    {
        c[i].avble();
    }
    return 0;
 }
    
    
        
