#include<iostream>
int tom = 3;
int dick = 30;          //external variable definition
static int harry = 300;//static, internal linkage

void remote_access();

int main(){
    using namespace std;
    cout << "main() reports the following address.\n";
    cout << &tom << "= &tom, " << &dick << " = &dick .";
    cout << &harry << " = &harry \n";
    remote_access();
    return 0;
}
