#include<iostream>
#include<cstring>
int main(){
    using namespace std;
    double wage[3] = {1,2,3};
    short stack[3] = {4,5,6};

    double * pw = wage;
    short * ps = &stack[0];
    cout << "pw = " << pw << ", *pw =" << *pw<<endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << endl;

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer : \n";
    cout << "ps = " << ps << ", *ps =" << *ps << endl;
    //字节
    cout << "access two ele with array notation\n";
    cout << "stack[0] = " << stack[0] << ", stack[1] = " <<stack[1] << endl;
    cout << "access two elem with pointer notation\n";
    cout << "*stacks = "<< *stack << ", *(stack + 1) = " << *(stack + 1) <<endl;
    //*stack + 1
    //stack[i] = *(stack + i)
    cout << sizeof(wage) << " = size";
    //动态分配数组
    int size;
    cin >> size;
    int * pz = new int[size];
    delete [] pz;

    //指针和字符串
    char flower[10] = " rose";
    cout << flower <<" s are red \n";

    char animal[20] = "bear";
    const char * bird = "wren";
    char * pd;

    cout << animal << " and ";
    cout << bird << "\n";
    cout << "enter animal:" ;
    cin >> animal;

    pd = animal;
    cout << pd <<"s!\n";
    cout << " before using strcopy():\n";
    cout << animal << " at " << (int *)pd << endl;

    pd = new char[strlen(animal) + 1];
    strcpy(pd,animal);
    cout << "after using strcpy : \n";
    cout << animal << " at " << (int *)animal << endl;
    cout << pd << " at " <<(int *) pd << endl;
    delete [] pd;

    //结构体
    struct inf{
        char name[20];
        float v;
        double price;
    };
    inf * pj = new inf;
    cout << "name: ";
    cin.get(pj->name,20);
    cout << "v:";
    cin >> (*pj).v;
    cout << "price:";
    cin >> pj->price;
    
    return 0; 
}