// Write a program to define a class Car with members brand and price.
// Create multiple objects of the class and display their information.

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    double price;

    // Function to display car information
    void displayInfo() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    Car car1, car2, car3;

    car1.brand = "Toyota";
    car1.price = 1500000;

    car2.brand = "Honda";
    car2.price = 1200000;

    car3.brand = "Hyundai";
    car3.price = 1000000;

    cout << "Car Information\n";
    car1.displayInfo();
    car2.displayInfo();
    car3.displayInfo();

    return 0;
}
