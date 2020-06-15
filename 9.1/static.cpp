#include<iostream>
const int ArSize = 10;
void strcount(const char * str);
/**
 * 处理行输入可能长于目标数组的方法，cin.get(input,Size)将一种读取输入，
 * 直到行尾或读取了Size -1 字符为止
 * 他把换行符留在输入队列中，该程序读取行输入的字符，如果是换行符，则说明整行被读取；
 * 否则说明行中还有字符没有被读取，随后，程序使用一个循环来丢弃余下的字符，不过
 */
int main(){
    using namespace std;
    char input[ArSize];
    char next;

    cout << "Enter a line:\n";
    cin.get(input,ArSize);

    while(cin){
        cin.get(next);
        while(next != '\n')
            cin.get(next);
        strcount(input);
        cout << "Enter next line : \n";
        cin.get(input,ArSize);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const char * str){
    using namespace std;
    static int total = 0;
    int count = 0;
    cout << "\"" << str << "\" contains ";
    while(*str++) count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total \n";
}