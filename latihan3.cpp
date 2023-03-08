#include <iostream>
using namespace std;
double p, l;

void input(){
    cout << "masukan panjangnya=";
    cin >> p;
    cout << "masukan lebarnya=";
    cin >> l;

}
double proses(){
    return p*l;
}

double proses2(double a, double b){
    return a*b;
}

void output(){
    cout << "luasnya =" << proses();
    cout << "\nluasnya ke 2=" << proses2(p,l);
}

int main(){
    input();
    output();
}