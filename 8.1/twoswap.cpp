#include<iostream>
template <class Any>
void Swap(Any &a, Any &b);
struct job{
    char name[40];
    double salary;
    int floor;
};

template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);

int main(){
    using namespace std;
    cout.precision(2);
    cout.setf(ios:: fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ". " << j << ".\n";
    cout << "Using int swapper: \n";
    Swap(i,j);
    cout <<"Now i, j = " << i << ", " << j << ".\n";

    job sue = {"susan yaffee", 3333.7,7};
    job sidney = {"sidney taffee", 189182.32,9};
    cout << "before swapping :\n";
    Show(sue);
    Show(sidney);
    Swap(sue,sidney);
    cout << "after job swapping: \n";
    Show(sue);
    Show(sidney);
    return 0;
}
template <class Any>
void Swap(Any &a, Any &b){
    Any temp ;
    temp = a;
    a = b;
    b = temp;
}

template <> void Swap<job>(job &j1, job &j2){
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j){
    using namespace std;
    cout << "j.name = "<<j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}