#include <iostream>

using namespace std;

int main(){

int ageCat = 15;
int *page = &ageCat;
int **ppage = &page;
int ***pppage = &ppage;

***pppage = 108;

cout<<page <<" "<<ppage;

cout <<ageCat<<endl; //15
//cout <<&page<<" "<<&ageCat<<endl;



//cout <<ageCat<<endl; //15
}