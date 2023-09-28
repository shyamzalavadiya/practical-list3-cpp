#include <iostream>
using namespace std;

class MaxFinder {
private:
    int num1, num2, num3;

public:
    MaxFinder(int a, int b, int c) {
        num1 = a;
        num2 = b;
        num3 = c;
    }

    int findMax() {
        int max = num1;
        if (num2 > max)
            max = num2;
        if (num3 > max)
            max = num3;

        return max;
    }
};

int main() {
    int a, b, c;
     cout<<"Pinak viradiya"<<endl;
     cout<<"220130318014"<<endl;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    MaxFinder maxFinder(a, b, c);
    int max = maxFinder.findMax();

    cout << "The maximum number is: " << max << endl;

    return 0;
}

