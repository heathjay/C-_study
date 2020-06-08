#include<iostream>
#include<cstring>
using namespace std;
void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test8();
int main(){
    //test1();
   // test2();
   //test3();
   //test4();
   //test6();
   test8();
}
void test1(){
    cout << "input min:"<<endl;
    int  num1;
    cin >> num1;
    //num1 = cin.get();
    cout << "input max:"<<endl;
    int num2;
    cin >> num2;
    int sum = 0;
    for(int i = num1; i <= num2 ;i++) {
        sum+=i;
    }
     cout << sum << endl;   
}
void test2(){
    int num ;
    int sum = 0;
    cout << "Please enter your number" << endl;
    cin >> num;
    for(; num != 0;cin >> num){
        sum += num;
        cout << " Now the total sum is :" << sum << endl;
    }
    cout <<"done\n";
}
void test3(){
    double dp = 100;
    double cl = 100;
    int y = 0;
    while(cl <= dp){
        dp += 100 * 0.1;
        cl = cl * 0.05 + cl;
        y++;
    }
    cout << "years : "<< y << endl;
}
void test4(){
    const int m = 12;
    const char * months[m] = {
        "Jan",
        "Feb",
        "Mar",
        "May",
        "June",
        "July",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"
    };
    int sell[m];
    int total = 0 ;

    for(int i = 0 ; i < m; i++){
        cout << months[i] << ":";
        cin >> sell[i];
        total += sell[i];
    }
    cout << "this year we sold :" << total << " books for all. \n";

}
const int PSize = 20;


void test5(){
    struct car{
    /* data */
   // char * pro[PSize];
    string pro;
    int year;
    };
    cout << "How many cars you u wish to catalog?" << endl;
    int size ;
    cin >> size;

    car * c = new car[size];
   
    for(int i = 0; i < size; i++){
        cout << "Car #" << i + 1 << ": \n";
        cout << "Please enter the year made :" ;
        cin.get();
        getline(cin,c[i].pro);
        cout << "enter the year: ";
        cin >> c[i].year;
    }
    cout << " here is your collection: " << endl;
    for(int i = 0 ; i < size; i++){
        cout << (*(c + i)).year << " " << (*(c + i)).pro << endl;
    }
}
void test6(){
    char input[100];
    cout << "done :" << endl;
    cin >> input;
    int count = 0;
    while(strcmp(input,"done")){
        if(bool(cin >> input) == true)
        count++; 
    }
    cout << "total : "<< count << endl;
}


void test7(){
    string input;
    cout << "done :" << endl;
    cin >> input;
    int count = 0;
    while(input == "done"){
        if(bool(cin >> input) == true)
        count++; 
    }
    cout << "total : "<< count << endl;
}
void test8(){
    int row ;
    cout << "lines : ";
    cin >> row;
    cout << endl;
    for(int i = 1; i <= row;i++){
        int j = 1;
        for(;j<=row-i;j++ ){
            cout << '.';
        }
        for(;j <= row; j++){
            cout << "*";
        }
        cout << endl;
    }
}