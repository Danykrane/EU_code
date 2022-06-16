// 2 типа (возвр и не возвр)


#include <iostream>

using namespace std;


void hello(){
 cout <<"Привет!"<<endl;;
}

void bye(){
 cout <<"Пока!"<<endl;
}

void show(int test){
    cout <<test<<endl;
}

void show1(int test){
    cout <<"введенный возраст = "<<test;
}



int main()
{
// hello();
// bye();

int age;
cin >> age;
show(age);
show1(age);

}
