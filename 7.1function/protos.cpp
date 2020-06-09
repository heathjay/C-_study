#include<iostream>
void cheer(int);
double cube(double);
int main(){
    using namespace std;
    cheer(5);
    cout << " give me a number.\n";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "A " << side << "-foot cube has the volume of " << volume << "cubic feet.\n";
    cheer(cube(2));
    return 0;
}

void cheer(int n ){
    using namespace std;
    for(int i = 0; i < n; i++) cout << "cheers ! ";
    cout <<endl;
}
double cube(double x){
    return x * x * x;
}