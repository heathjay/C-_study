#include<iostream>
#include"mytime9.h"
int main(){
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "Coding time = ";
     coding.Show() ;
     cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;
    //调用sum和fixing+coding
    total = coding + fixing;
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;

    Time morefixing(2,28);
    cout << "more fixing time = ";
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;
    
    return 0;
}