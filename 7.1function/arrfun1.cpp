#include<iostream>
using namespace std;
const int ArSize = 8;
int sum_arr(int arr[], int n);
int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void revalue(double r, double arr[], int n);
int main(){
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies, ArSize);//传入数组，其实是指针，带可以看作数组
    cout << "Total cookies is " << sum << endl;
    return 0;
}

int sum_arr(int arr[], int n){
    int total = 0;
    for(int i = 0 ; i < n; i++){
        total += arr[i];
    }
    return total;
}
int fill_array(double arr[], int limit){
    double temp;
    int i ;
    for(i = 0 ; i < limit ; i++){
        cout << "Enter value # " << (i+1) << ": ";
        //输入有效性判断
        cin >> temp;
        if(!cin){//bad input
            cin.clear();
            while(cin.get() != '\n'){
                continue;
            }
            cout << "Bad input : input process terminated. \n";
            break;
        }else if(temp < 0){
            break;
        }
        arr[i] = temp;
    }
    return i;
}
void show_array(const double arr[], int n){
    for(int i = 0 ;i < n ; i++){
        cout << " property #" << (i + 1) << " : $";
        cout << arr[i] << endl;
    }
}

void revalue(double r, double arr[], int n){
    for(int i = 0; i < n ;i++) arr[i] *= r;
}