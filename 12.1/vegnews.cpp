#include<iostream>
using std::cout;
#include "stringbad.h"
void callme1(StringBad &);//by reference
void callme2(StringBad);//by value

int main(){
    using std::endl;
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery stalks at midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach leaves bowl for dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports : " << sports << endl;
        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
         cout << "headline2: " << headline2 << endl;
        cout << "Initialize one object to another:\n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        StringBad knot;
        knot = headline1;
        cout<<"knot: " <<knot <<endl;
        cout << "Exiting the block.\n";
        
    }
    cout << "end of main().\n";
    return 0;
}

void callme1(StringBad & rsb){
    cout<<"String passed by reference.\n";
    cout << " \"" << rsb <<"\" \n";
}

void callme2(StringBad sb){
    cout << "String passed by value.\n";
    cout << " \""<< sb << "\"\n";
}