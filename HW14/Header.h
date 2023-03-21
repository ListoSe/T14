#pragma once
#include<string>
#include<iostream>
using namespace std;
class Vehicle {
protected:
    int price;
    int max_speed;
    int year;

public:
    Vehicle(int price, int max_speed, int year) : price(price), max_speed(max_speed), year(year) {}

    virtual void show_info() = 0;
    virtual string get_type() = 0;

    int get_price() const {
        return price;
    }

    void set_price(int price) {
        this->price = price;
    }

    int get_max_speed() const {
        return max_speed;
    }

    void set_max_speed(int max_speed) {
        this->max_speed = max_speed;
    }

    int get_year() const {
        return year;
    }

    void set_year(int year) {
        this->year = year;
    }
};

class Car : public Vehicle {
private:
    string model;
    string color;

public:
    Car(int price, int max_speed, int year, string model, string color)
        : Vehicle(price, max_speed, year), model(model), color(color) {}

    void show_info() override {
        cout << "Type: Car\n"
            << "Model: " << model << "\n"
            << "Color: " << color << "\n"
            << "Price: " << price << "\n"
            << "Max speed: " << max_speed << "\n"
            << "Year: " << year << "\n";
    }

    string get_type() override {
        return "Car";
    }
};

class Bicycle : public Vehicle {
private:
    int number_of_gears;

public:
    Bicycle(int price, int max_speed, int year, int number_of_gears)
        : Vehicle(price, max_speed, year), number_of_gears(number_of_gears) {}

    void show_info() override {
        cout << "Type: Bicycle\n"
            << "Number of gears: " << number_of_gears << "\n"
            << "Price: " << price << "\n"
            << "Max speed: " << max_speed << "\n"
            << "Year: " << year << "\n";
    }

    string get_type() override {
        return "Bicycle";
    }
};

class Lorry : public Vehicle {
private:
    int carrying_capacity;

public:
    Lorry(int price, int max_speed, int year, int carrying_capacity)
        : Vehicle(price, max_speed, year), carrying_capacity(carrying_capacity) {}

    void show_info() override {
        cout << "Type: Lorry\n"
            << "Carrying capacity: " << carrying_capacity << " tons\n";
    }

};

