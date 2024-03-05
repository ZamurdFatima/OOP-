#include <iostream>
using namespace std;
class TempConverter{
	double celcius;
	double farenheit;
	public:
		double ftc(double farenheit){
			farenheit = farenheit;
		celcius=	(farenheit-32)*5/9;
//		cout<<"Temperature in Celcius is: "<<celcius;
		return celcius;
		}
		double ctf(double celcius){
			celcius = celcius;
		farenheit=	(celcius*9/5)+32;
//		cout<<"Temperature in Fareheit is: "<<farenheit;
		return farenheit;
		}
};
int main(){
TempConverter t1;
double c=25.5;
double convertf= t1.ctf(c);
cout<<c<<"Degree Celcius equals to "<<convertf<<"Degree Farenheit"<<endl;

double f=90;
double convertc=t1.ftc(f);
cout<<f<<"Degree Farenheit equals to "<<convertc<<"Degree Celcius"<<endl;
}
//#include <iostream>
//
//class TemperatureConverter {
//private:
//    double celsius;
//    double fahrenheit;
//
//public:
//    TemperatureConverter() : celsius(0.0), fahrenheit(0.0) {}
//
//    double celsius_to_fahrenheit(double celsius) {
//        this->celsius = celsius;
//        this->fahrenheit = (celsius * 9/5) + 32;
//        return this->fahrenheit;
//    }
//
//    double fahrenheit_to_celsius(double fahrenheit) {
//        this->fahrenheit = fahrenheit;
//        this->celsius = (fahrenheit - 32) * 5/9;
//        return this->celsius;
//    }
//};
//
//int main() {
//    TemperatureConverter converter;
//
//    // Convert Celsius to Fahrenheit
//    double celsius_temperature = 25.0;
//    double converted_fahrenheit = converter.celsius_to_fahrenheit(celsius_temperature);
//    std::cout << celsius_temperature << " degrees Celsius is equal to " << converted_fahrenheit << " degrees Fahrenheit" << std::endl;
//
//    // Convert Fahrenheit to Celsius
//    double fahrenheit_temperature = 77.0;
//    double converted_celsius = converter.fahrenheit_to_celsius(fahrenheit_temperature);
//    std::cout << fahrenheit_temperature << " degrees Fahrenheit is equal to " << converted_celsius << " degrees Celsius" << std::endl;
//
//    return 0;
//}

