#include<iostream>
#include<cmath>
int main(){
    using namespace std;    //userspace
    cout << "come on  ";    //message
    cout << endl;   //start a new line
    cout << "bye" << endl;
    int c;
    cin >> c;
    cout << c;
    //输出的拼接
    cout << endl;
    cout << "jiang "
    << 12
    << c << endl;
    //函数
    double result;
    double x;
    cout << "enter a num   ";
    cin >> x;
    result = sqrt(x);
    cout<<result;
    return 0;
    
}
void test( ){
    using namespace std;
    cout << "good  " << endl;
}

int test2( ){
    using namespace std;
    cout << "test1" << endl;
    return 2;
}