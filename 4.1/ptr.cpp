#include<iostream>

int main(){
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << "and donuts address " << &donuts << endl;

    int update = 6;
    int *p_update ;
    p_update = &update;
    cout << "values: updates = " << update;
    cout << ", *p_update =   " << *p_update << endl;
    cout << ", p_update = " << p_update ;
    *p_update = *p_update + 1;
    cout << "Now updates = " << update << endl;

    //new pointer
    int *pn = new int;
    *pn = 1001;
    cout <<"int " << *pn <<": location =" << pn<<endl;
    //delete释放内存
    //用于new的那个地址
    //运行时分配内存，原来在编译时期，static binding 静态脸变
    //dynamic binding
    int * pq = pn;

    delete pn;

    //new创建动态数组
    int * pt = new int[3];
    pt[0] = 1;
    pt[1] = 2;
    pt[2] = 3;
    cout << "pt[0] = " << pt[0] << endl;
    pt = pt + 1;
    //地址前后移动
    cout << "now pt[0] = " << pt[0] << endl;
    delete [] pt;
    return 0;
}