#include <iostream>
using namespace std;

class Fan {
private:
    int speed;
    bool on;
    double radius;

public:
    Fan() : speed(1), on(false), radius(5.0) {}

    int getSpeed() const {
        return speed;
    }

    void setSpeed(int s) {
        speed = s;
    }

    bool isOn() const {
        return on;
    }

    void setOn(bool o) {
        on = o;
    }

    double getRadius() const {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }
};

int main() {
    Fan fan1;
    fan1.setSpeed(3);
    fan1.setOn(true);
    fan1.setRadius(10.0);

    Fan fan2;
    fan2.setSpeed(2);
    fan2.setOn(false);
    fan2.setRadius(5.0);

    cout << "Fan 1: Speed=" << fan1.getSpeed()
         << ", On=" << fan1.isOn()
         << ", Radius=" << fan1.getRadius() << endl;

    cout << "Fan 2: Speed=" << fan2.getSpeed()
         << ", On=" << fan2.isOn()
         << ", Radius=" << fan2.getRadius() << endl;

    return 0;
}
