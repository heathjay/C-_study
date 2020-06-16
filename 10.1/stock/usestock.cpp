#include<iostream>
#include "stock1.h"
int main(){
  using std::cout;
    using std::ios_base;
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout.setf(ios_base::showpoint);

    cout << "Using constructor to create new objects.\n";
    Stock stock1("nnana",12,20.0);
    stock1.show();
    Stock stock2 = Stock("hhh",2,2.0);
    stock2.show();

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    cout<<"listing stock1 and stock2 \n";
    stock1.show();
    stock2.show();

    cout<<"Using a constructor to reset an object.\n";
    stock1 = Stock("foods",10,50.0);
    cout<<"revised stock1:\n";
    stock1.show();
    cout<<"done\n";
    return 0;
}