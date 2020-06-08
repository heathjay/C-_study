#include<iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch;
    while(ch != '#'){
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl << count << "characters read \n";
    //cin.get(ch)
    //ch 参数声明是引用
    //cin.get(数组名char*, size)
    //cin.get(name , Asize).get()
    //函数重载
    count = 0;
    cin.get(ch);
    while(ch != '#'){
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << "characters read \n";
    //用cin.fail-true //eof
    //cin.eof-true 
    //事后检测
    //while(cin)    - 可以检测磁盘故障
    //while(!cin.fail())
    //while(cin.get(ch))

    count = 0;
    cin.get(ch);
    while(cin.fail() == false){
        cout << ch;
        count ++;
        cin.get(ch);
    }
    cout << endl << count << "characters read \n";

    count=0;
    int ch1;
    ch1 = cin.get();
    while(ch1 != EOF){
        cout.put(ch1);
        ++count;
        ch1 = cin.get();
    }
cout << endl << count << "characters read \n";
    //cin.get()-如果有系统的char无符号，EOF == -1实现不了
    //进行强制转换
    count = 0;
    int ch2;
    while((ch2 = cin.get()) != EOF){
        cout.put(ch2);
        ++count;
    }
    cout << endl << count << "characters read \n";
    return 0;
    
}