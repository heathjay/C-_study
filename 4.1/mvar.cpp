#include<iostream>
#include<cstring>

int main(){
    using namespace std;
    int years[3];
    years[0] = 8;
    years[1] = 1;
    years[2] = 3;

    int yy[2] = {11,2};
    cout << years[0] + years[1] + years[2] << endl;
    cout << "sizeof yy = " << sizeof yy << endl;

    const int Size = 15;
    char num1[Size];
    char num2[Size] = "C++ okey";
    cout << "I am " << num2 << endl;
    cout << "what is your name? \n";
    cin >> num1;
    //cout << "well" " your name has " << sizeof(num1) << "bytes \n";
    //cout << strlen(num1) << "len\n";
    cout <<"bad" ;
    char num3[Size];
    //字符串输入
    //cin.getline(num3,Size);
    cin.getline(num3,Size);
    cout << num3 << endl;
    cout<<"2";
    cin.get(num3,Size);
    //两个get会导致第二个get只读取到回车
    //get（）中间不加可以读取新行
    cin.get();
    cin.get(num1,Size);
    cout<<num3 <<"\n";
    cout << num1<<"\n";
    cin.get(num2,Size).get();
    return 0;
}