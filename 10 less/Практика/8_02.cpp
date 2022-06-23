#include <iostream>
using namespace std;

unsigned int factorial(unsigned int); // прототип рекурсивной функции
                                

int main(int argc, char *argv[])
{
    int n; // локальная переменная для передачи введенного числа с клавиатуры
    cout << "Enter n!: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "!"<< "=" << factorial(i) << endl; // вызов рекурсивной функции
    }
    return 0;
}

unsigned int factorial(unsigned int f) // рекурсивная функция для нахождения n!
{
    unsigned long int result;
    if (f == 1 || f == 0) // 1!=1 и 0!=1
        return 1;
    result = f * factorial(f - 1); // вызов самой себя
    return result;
}