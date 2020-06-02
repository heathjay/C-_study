#include<iostream>
#include<climits>
using namespace std;
int main(){
    int intMax = INT_MAX;
    short shortMax = SHRT_MAX;
    long longMax = LONG_MAX;

    cout << intMax << " " << shortMax << "  " << longMax << endl;
    cout << sizeof(int)<<"bytes"<<endl;

    //进制问题
    int a = 11;
    int b = 11;
    int c = 11;
    cout << "a = "<< a << endl;
    cout << hex ;
    cout << "b = " << b << " hex"<< endl;
    cout << oct;
    cout << "c = " << c << " oct" << endl;
    //中文
    wchar_t chin = L'经';
    wcout << chin;
    cout << chin << endl;

    cout.setf(ios_base::fixed, ios_base::floatfield);//小数点后面6位
    float tub = 10.0/3.0;
    double min = 10.0 / 3.0 ;
    const float million = 1.0e6;
    cout << "tub = " << tub << endl;
    cout << "tub million = " << tub * million << endl;
    cout << "min million = " << min * million << endl;

    int a1;
    a1 = 19.99 + 11.99;
    int b1;
    b1 = (int)19.99 + (int)11.99;
    int c1;
    c1 = int(19.99) + int(11.99);
    cout << "a1 = " << a1 << endl;
    cout << "b1 = " << b1 << endl;
    cout << "c1 = " << c1 << endl;
    return 0;
}