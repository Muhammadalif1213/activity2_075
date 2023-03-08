#include <iostream>
using namespace std;

double luas, p, l;
void input(){
    cout << "masukan panjangnya=";
    cin >> p;
    cout << "masukan lebarnya= ";
    cin >> l;
}

void proses(){
    luas= p*l;
}

void output(){
    cout << "luasnya =" << luas;
}

int main() {
    input();
    proses();
    output();
}