#pragma once
#include<vector>
#include<algorithm>
#include"Header.h"
class Garage {
private:
    vector<Vehicle*> vehicles; 

public:
    void addVehicle(Vehicle* vehicle); 
    void removeVehicle(int num); 
    void searchByType(string type);
    void searchByNum(int num); 
    void searchBySpeed(int speed); 
    void editPrice(int num, double newPrice);    
    void sortByType(); 
    void showAllVehicles(); 
};
