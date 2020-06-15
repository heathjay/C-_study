#include<iostream>
extern int tom; //tom defined elsewhere
static int dick = 10;//overrides externel file
int harry = 200;//external variable definition
            //no conflict with two twofile1 harry
void remote_access(){
    using namespace std;
    cout << "remote_access reports the following address: \n";
    cout << &tom  << " = &tom." << &dick << "= &dick, " << &harry << "= &harry\n";
}