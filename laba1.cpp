#include <iostream> 
#include <cmath>

using namespace std;

float perimeter(float a, float b) {
    return 2 * (a + b);
}
float square(float a, float b) {
    return a * b;
}

float diagonal(float a, float b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}
bool exist(float a, float b) {
    return a > 0 && b > 0;
}
int main() {
    setlocale(LC_ALL, "ru");
    float side1, side2;
    cout << "Введите стороны прямоугольника: "<< endl;
    cin >> side1 >> side2;
    if (!exist(side1, side2)) {
        cout << "Стороны должны быть положительными!" << endl;
    }
    else {
        cout << "Периметр прямоугольника: " << perimeter(side1, side2) << endl;
        cout << "Площадь прямоугольника: " << square(side1, side2) << endl;
        cout << "Диагональ прямоугольника: " << diagonal(side1,side2) << endl;
    }
    return 0;
}
