#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) { // 每次循环 n 减1，执行 n 次
        double weight, height;
        cin >> weight >> height;

        double bmi = weight / (height * height);

        cout << fixed << setprecision(2) << bmi << " ";

        if (bmi < 18.5) cout << "Underweight\n";
        else if (bmi < 24) cout << "Normal weight\n";
        else if (bmi < 28) cout << "Overweight\n";
        else cout << "Obesity\n";
    }
    return 0;
}