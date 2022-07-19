// dz 1
#include <iostream>

using namespace std;

// class animal_dz1
// {
// public:
//     string name;
//     int opyt;
//     int ves_inventar;
//     double speed;
//     float cnt_of_lives;  //странно, что у жизней тип данных float, тк обычно не указывают 15.6 hp
// };

// dz 2
// class animal_dz2 {
// public:
// 	string name;
// 	int opyt;
// 	int ves_inventar;
// 	double speed;
// 	float cnt_of_lives;

// 	void fill() {
// 		cout << "Введите имя:" << endl;
// 		cin >> name;
// 		cout << "Введите сколько опыта:" << endl;
// 		cin >> opyt;
// 		cout << "Введите вес инвентаря:" << endl;
// 		cin >> ves_inventar;
// 		cout << "Введите скорость:" << endl;
// 		cin >> speed;
// 		cout << "Введите количество жизней:" << endl;
// 		cin >> cnt_of_lives;
// 	}

// 	void print() {
// 		cout << endl << "Персонаж создан! " << endl;
// 		cout << "Его информация: " << name << ",  " << opyt << " xp,  " <<
// 			ves_inventar << " kg,  " << speed << " sp,  " << cnt_of_lives << " hp." << endl;
// 	}
// };

// dz 3

class animal_dz3
{
public:
    string name;
    int opyt;
    int ves_inventar;
    double speed;
    float cnt_of_lives;

    void fill()
    {
        cout << "Введите имя:" << endl;
        cin >> name;
        cout << "Введите сколько опыта:" << endl;
        cin >> opyt;
        if (opyt < 0)
            opyt = 0;
        cout << "Введите вес инвентаря:" << endl;
        cin >> ves_inventar;
        cout << "Введите скорость:" << endl;
        cin >> speed;
        if (speed < 0)
            speed = 0;
        cout << "Введите количество жизней:" << endl;
        cin >> cnt_of_lives;
        if (cnt_of_lives < 1 || cnt_of_lives > 10)
        {
            cnt_of_lives = 10;
        }
    }

    void print()
    {
        cout << endl
             << "Персонаж создан! " << endl;
        cout << "Его информация: " << name << ",  " << opyt << " xp,  " << ves_inventar << " kg,  " << speed << " sp,  " << cnt_of_lives << " hp." << endl;
    }
};

// dz 4

class animal_dz4
{
public:
    string name;
    int opyt;
    int ves_inventar;
    double speed;
    float cnt_of_lives;

    void fill()
    {
        cout << "Введите имя:" << endl;
        cin >> name;
        cout << "Введите сколько опыта:" << endl;
        cin >> opyt;
        if (opyt < 0)
            opyt = 0;
        cout << "Введите вес инвентаря:" << endl;
        cin >> ves_inventar;
        cout << "Введите скорость:" << endl;
        cin >> speed;
        if (speed < 0)
            speed = 0;
        cout << "Введите количество жизней:" << endl;
        cin >> cnt_of_lives;
        if (cnt_of_lives < 1 || cnt_of_lives > 10)
        {
            cnt_of_lives = 10;
        }
    }

    void print()
    {
        cout << endl
             << "Персонаж создан! " << endl;
        cout << "Его информация: " << name << ",  " << opyt << " xp,  " << ves_inventar << " kg,  " << speed << " sp,  " << cnt_of_lives << " hp." << endl;
    }

    void speed_up()
    {
        speed++;
        cout << endl
             << "========================Скорость увеличена========================" << endl;
    }
};

// dz 5
class animal_dz5
{
public:
    string name;
    int opyt;
    int ves_inventar;
    double speed;
    float cnt_of_lives;

    void fill()
    {
        cout << "Введите имя:" << endl;
        cin >> name;
        cout << "Введите сколько опыта:" << endl;
        cin >> opyt;
        if (opyt < 0)
            opyt = 0;
        cout << "Введите вес инвентаря:" << endl;
        cin >> ves_inventar;
        cout << "Введите скорость:" << endl;
        cin >> speed;
        if (speed < 0)
            speed = 0;
        cout << "Введите количество жизней:" << endl;
        cin >> cnt_of_lives;
        if (cnt_of_lives < 1 || cnt_of_lives > 10)
        {
            cnt_of_lives = 10;
        }
    }

    void print()
    {
        cout << endl
             << "Персонаж создан! " << endl;
        cout << "Его информация: " << name << ",  " << opyt << " xp,  " << ves_inventar << " kg,  " << speed << " sp,  " << cnt_of_lives << " hp." << endl;
    }

    void ves_down()
    {
        if (ves_inventar > 0)
        {
            ves_inventar -= 50;
            cout << endl
                 << "========================Инвентарь уменьшен========================" << endl
                 << endl
                 << endl;
            cout << "Его информация: " << name << ",  " << opyt << " xp,  " << ves_inventar << " kg,  " << speed << " sp,  " << cnt_of_lives << " hp." << endl;
        }
        else
        {
            ves_inventar = 0;
            cout << "Его информация: " << name << ",  " << opyt << " xp,  " << ves_inventar << " kg,  " << speed << " sp,  " << cnt_of_lives << " hp." << endl;
            cout << endl
                 << "========================Конец игры========================" << endl
                 << endl
                 << endl;
        }
    }
};

int main()
{
    animal_dz5 /*Выбрать нужный номер задания*/ first;
    first.fill();
    first.print();

    // first.speed_up(); // функция для прокачивания скорости, вызываете сколько нужно раз
    // first.print();
    first.ves_down(); // функция для гашения веса инвентаря, вызываете сколько нужно раз
    first.ves_down();

    return 0;
}
