//模版
#include<iostream>
template<typename Any>
void Swap(Any &a, Any &b);

template<typename Any>
void Swap(Any *a, Any *b, int n);

void Show(int a[]);
const int Lim = 8;
int main(){
    using namespace std;
    int j = 20;
    int i = 10;
    cout << "i, j = "<< i << ". " << j << ".\n";
    cout << "Using complier-gernerated int swapper: \n";
    Swap(i,j);
    cout << "Now i, j = "<< i << ", "<< j << ".\n";
    double x = 24.5;
    double y = 81.7;
    cout << "x,y = " << x << ". "<< y << endl;
    cout << "Using complier-generated double swapper: \n";
    Swap(x,y);
    cout <<"Now x,y = "<< x << ". "<<y<<"\n";

    //重载
    int d1[Lim] = {0,7,0,4,1,7,7,6};
    int d2[Lim] = {0,6,2,0,1,9,6,9};
    cout << "Original arrays: \n" ;
    Show(d1);
    Show(d2);
    Swap(d1,d2,int(Lim));
    cout <<"Swapped arrays: \n";
    Show(d1);
    Show(d2);

    return 0;
}
template<typename Any>
void Swap(Any &a, Any &b){
    Any temp;
    temp = a;
    a = b;
    b = temp;
}

template<typename Any>
void Swap(Any a[], Any b[], int n){
    Any temp;
    for(int i = 0; i < n ; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int a[]){
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for(int i = 4; i < Lim ;i++){
        cout <<a[i];
    }
    cout <<endl;
}