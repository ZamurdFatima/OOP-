#include <iostream>
using namespace std;
class Time12 {
private:
    int hrs;   
    int mins;  
    bool pms;  // AM = false, PM = true

public:
    Time12() : hrs(0), mins(0), pms(true) {}
    
    Time12(int hours, int minutes, bool pm)  {
	    hrs=hours;
		mins=minutes;
		pms=pm;
	}

    void display() {
        cout<< hrs << ":" << mins << " "<< (pms? "PM" : "AM")  << endl;
    }
};
class Time24 {
private:
    int hours;   
    int minutes;
    int seconds; 

public:
    Time24() : hours(0), minutes(0), seconds(0) {}

    Time24(int hr, int min, int sec) : hours(hr), minutes(min), seconds(sec) {}

    void display() {
        cout << hours << ":"<< minutes << ":"<< seconds << endl;
    }

    operator Time12() const {
        int hr12 = hours % 12;
        if (hr12 == 0) hr12 = 12;  // Handle midnight and noon cases
        bool pm = (hours >= 12 );
        return Time12(hr12, minutes, pm);
    }
};

int main() {
    Time24 t24(00, 30, 60);
    cout << "Enter 24-hour time: ";
    t24.display();

    Time12 t12 = t24;
    cout << "12-hour time: ";
    t12.display();

    return 0;
}
