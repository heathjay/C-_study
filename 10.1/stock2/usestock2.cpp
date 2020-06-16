#include<iostream>
#include "stock1.h"
const int STKS = 4;
int main(){
    using std::cout;
    using std::ios_base;

    Stock stock[STKS] = {
        Stock("b",12,20.0),
        Stock("a",2,20.0),
        Stock("c",1,2.0),
        Stock("d",1121,211.0)
    };

    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout.precision(2);
    cout.setf(ios_base::showpoint);

    cout << "Stock holdings:\n";
    int st;
    for(st = 0; st <STKS;st++){
        stock[st].show();
    }
    Stock top = stock[0];
    for(st = 1; st < STKS;st++){
        top = top.topval(stock[st]);
    }
    cout <<"\nMost valuable holding : \n";
    top.show();
    return 0;
}