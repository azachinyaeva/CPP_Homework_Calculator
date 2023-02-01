#include <iostream>
using namespace std;
class Calculator {
private:
    float num1;
    float num2;

public:
Calculator() {
        num1 = 0;
        num2 = 0;
}

    double add() 
    {
        return num1 + num2;
    }
    double multiply() 
    {
        return num1 * num2 ;
    }
    double subtract_1_2()
    {
        return num1 - num2;
    }
    double subtract_2_1()
    {
        return num2 - num1;
    }
    double divide_1_2()
    {
        return num1 / num2;
    }
    double divide_2_1()
    {
        return num2 / num1;
    }
    bool set_num1(float num1)
    {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }
    bool set_num2(float num2)
    {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Calculator calc;
    float num1 = 0, num2 = 0;

    while (true) {
        cout << "Введите num1: ";
        cin >> num1;

        if (calc.set_num1(num1) == 0) {
            cout << "Неверный ввод!" << '\n';
            continue;
        }

        cout << "Введите num2: ";
        cin >> num2;

        while (calc.set_num2(num2) == 0) {           
                cout << "Неверный ввод!" << '\n';
                cout << "Введите num2: ";
                cin >> num2;
            }

        cout << "num1 + num2 = " << calc.add() << '\n';
        cout << "num1 - num2 = " << calc.subtract_1_2() << '\n';
        cout << "num2 - num1 = " << calc.subtract_2_1() << '\n';
        cout << "num1 * num2 = " << calc.multiply() << '\n';
        cout << "num1 / num2 = " << calc.divide_1_2() << '\n';
        cout << "num2 / num1 = " << calc.divide_2_1() << '\n';

    }
        return 0;
}

