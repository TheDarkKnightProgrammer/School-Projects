#include <iostream>
#include <iomanip>
using namespace std;

double get_height() {

    double height;
    cout << "Enter the triangle's height: ";
    cin >> height;
    return height;

}
double get_base(){
    double base;
    cout << "Enter the tringle's base: ";
    cin >> base;
    return base;

}
double calculateArea(double height, double base){
    cout << "" << endl;
    return 0.5 * base * height;

}

void displayInfo(double height, double base, double area){
    cout << "Triangle's Area: " << endl;
    cout << "-----------------" << endl;
    cout << showpoint << fixed << setprecision(2);
    cout << "Height: " << height << endl;
    cout << "Base: " << base << endl;
    cout << "Area: " << area << endl;
}

int main(){
    double height = get_height();
    double base = get_base();

    double area = calculateArea(height,base);

    displayInfo(height, base, area);

    system("pause");

}