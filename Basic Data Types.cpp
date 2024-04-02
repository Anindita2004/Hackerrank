#include <iostream>
using namespace std;

#include <iostream>
#include <iomanip> // Include the iomanip library for fixed and setprecision
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;

    // Set output precision for floating point numbers
    cout << fixed << setprecision(3); // Set precision to 3 decimal places

    cout << a << endl << b << endl << c << endl;
    cout << d << endl << e << endl; 

    return 0;
}

