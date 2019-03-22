#include <iostream>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);

void temperature_conversion(double fahrenheit_temperature) {
    
    double celsius_temperature=fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature=fahrenheit_to_kelvin(fahrenheit_temperature);
    
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

double fahrenheit_to_celsius(double temperature){
    temperature=(5.0/9.0)*(temperature-32);
    return round(temperature);
}
double fahrenheit_to_kelvin(double temperature){
    temperature=(5.0/9.0)*(temperature-32)+273;
    return round(temperature);
}
