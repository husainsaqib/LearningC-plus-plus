#include<iostream>
#include"HotelRoom.h"
using namespace std;
HotelRoom::HotelRoom()
{
    std::cout<<"Enter room number"<<endl;
    cin>>rnumber;
    std::cout<<"Enter type of room"<<endl;
    cin>>type;
    std::cout<<"Enter rent"<<endl;
    cin>>rent;

}
void display()
{
     std::cout<<" room number"<<rnumber<<endl;
   
    std::cout<<"type of room"<<type<<endl;
    
    std::cout<<" rent"<<rent<<endl;
}