#include<iostream>
#include<string>
int main(){
    using namespace std;
    cout << "what year was your house built?\n";
    int year;
    //混合读取出现错误
        //cin >> year;
    cout << "address?";
    char address[80];
    //没有输入的机会
    //回车键留在了输入队列中，getline看到回车就认为是空行
        //修改
        (cin >> year).get();
    cin.getline(address,80);
    string str1;
    string str2 = "jjjs";
    cout<<"year=" <<year <<endl;
    cout << "address = " << address << endl;
    cout<<"done;";
    return 0;
}