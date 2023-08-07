#include <iostream>
#include <cstdlib>

using namespace std;

double SummNechetInt(int num) {
    int result = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            result += num;
        }
        num--;
    }
    return result;
}

int main()
{
    system("chcp 1251 > nul");
    int number;
    cout << "Введите натуральное число ";
    cin >> number;
    cout << "Сумма натуральных чётныхчисел до " << number << " составляет " << SummNechetInt(number);
    system("pause > nul");
    return 0;
}
