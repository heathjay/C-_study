#include<iostream>
void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);
int main(){
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 200;
    cout << "wallet1 = " << wallet1 << endl;
    cout << "wallet2 = " << wallet2 << endl;

    cout << "using reference to swap contents : \n";
    swapr(wallet1, wallet2);
    cout << "wallet1 = " << wallet1 << endl;
    cout << "wallet2 = " << wallet2 << endl;

    cout << "using pointer to swap contents : \n";
    swapp(&wallet1, &wallet2);
    cout << "wallet1 = " << wallet1 << endl;
    cout << "wallet2 = " << wallet2 << endl;

    cout << "using value to swap contents : \n";
    swapv(wallet1, wallet2);
    cout << "wallet1 = " << wallet1 << endl;
    cout << "wallet2 = " << wallet2 << endl;

}
void swapr(int & a, int & b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapp(int * p, int * q){
     int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void swapv(int a, int b){
       int temp;
    temp = a;
    a = b;
    b = temp;
}