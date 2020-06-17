#include<iostream>
#include"mytime9.h"
int main(){
    using std::cout;
    using std::endl;
   
   Time a(3,35);
   Time to(2,48);
   Time tmp;

   cout << "a and to : \n";
   cout << a << "; " << to << endl;
   tmp = a + to;
   cout << " a + to = "<< tmp << endl;
   tmp = a * 1.7 ;
   cout << " a * 1.7 = " << tmp << endl;
   cout <<"10 * to = "<< 10 * to << endl;
    
    return 0;
}