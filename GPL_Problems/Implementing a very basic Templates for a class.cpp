#include <iostream>
#include <string>
using namespace std;


template <typename w>
class testo {
public:
    w num1, num2;
    
    testo(w n1, w n2){
        num1 = n1;
        num2 = n2;
    }

    w getMax() {
        if(num1 > num2)
            return num1;
        else
            return num2;
    }
};

int main() {
    testo<double> case1(5.4, 5.6);
    cout << case1.getMax();

    return 0;
}

