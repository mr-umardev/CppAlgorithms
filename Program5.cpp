//Static and non-static members: Create a vehicle having a non-static data member registration number and a static data member count. Non-static member functions setregno() and getregno() are used to get and set the registration number. A static member function getVehiclecount() is used to return the number of vehicles in the garage. Use a constructor to increment the vehicle count when a vehicle is created and the destructor to decrement the count when the vehicle is destroyed.
#include<bits/stdc++.h>

using namespace std;

class vehicle{
    int regno;
    static int count;
    public:
    static void getVehicleCount(){
        cout<<"Your garage has "<<count<<" number of vehicles\n";
    }
    vehicle(){
        cout<<"\nEnter vehicle registration Number\n";
        cin>>regno;
        count++;
        getVehicleCount();
    }
    vehicle(int i){
        regno=i;
        count++;
        getVehicleCount();
    }
    ~vehicle(){
        cout<<"\nVehicle is removed from the garage\n";
        count--;
        getVehicleCount();
    }

};

int vehicle::count;
int main(){
    vehicle v1,v2,v3(1000);
    return 0;
}