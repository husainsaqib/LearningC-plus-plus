#include<iostream>
using namespace std;

class Vehicle{
protected:
    string brand;
    double price;

public:
    void getVehicle(){
        cout<<"Enter brand: ";
        cin>>brand;
        cout<<"Enter price: ";
        cin>>price;
    }

    void showVehicle(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

class Car:public Vehicle{
    string model;
    float mileage;

public:
    void getCar(){
        getVehicle();
        cout<<"Enter model: ";
        cin>>model;
        cout<<"Enter mileage: ";
        cin>>mileage;
    }

    void showCar(){
        showVehicle();
        cout<<"Model: "<<model<<endl;
        cout<<"Mileage: "<<mileage<<" km/l"<<endl;
    }
};

int main(){
    Car c;
    c.getCar();
    c.showCar();
    return 0;
}