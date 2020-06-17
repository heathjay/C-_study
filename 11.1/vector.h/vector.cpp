#include<cmath>
#include "vector.h"
using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR{
    const double Rad_to_deg = 57.2957795130823;

    //private method
    void Vector::set_msg(){
        msg = sqrt( x *x + y * y);
    }
    void Vector::set_ang(){
        if(x == 0.0 && y == 0.0){
            ang = 0.0;
        }else
        {
            ang = atan2(y,x);
        }
    }
    void Vector::set_y(){
        y = msg * sin(ang);
    }

    //public methods
    Vector::Vector(){
        x = y = msg = ang = 0.0;
        mode = 'r';
    }

    Vector::Vector(double n1, double n2, char form){
        mode = form;
        if(form == 'r') {
            x = n1;
            y = n2;
            set_ang();
            set_msg();
        }else if(form == 'p'){
            msg = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else{
            cout <<"Incorrect 3rd argument to Vector()--";
            cout << "Vector set to 0 \n";
            x= y = msg = ang = 0.0;
            mode = 'r';
        }
    }

    void Vector::set(double n1, double n2, char form){
        mode =form;
        if(form == 'r'){
            x = n1;
            y = n2;
            set_msg();
            set_ang();
        }else if(form == 'p'){
            msg = n1;
            ang = n2/Rad_to_deg;
            set_x();
            set_y();
        }else{
              cout <<"Incorrect 3rd argument to Vector()--";
            cout << "Vector set to 0 \n";
            x= y = msg = ang = 0.0;
            mode = 'r';
        }
    }
    Vector :: ~Vector(){
        cout<<'bye\n';
    }

    void Vector::polar_mode(){
        mode ='p';
    }

    void Vector::rect_mode(){
        mode = 'r';
    }

    Vector Vector::operator+(const Vector & b)const{
        return Vector(x+ b.x, y+b.y);
    }

    Vector Vector::operator-(const Vector & b)const{
        return Vector(x-b.x,y-b.y);
    }
    Vector Vector::operator-()const{
        return Vector(-x,-y);
    }
    Vector Vector::operator*(double n )const{
        return Vector(n*x, n * y);
    }

    Vector operator*(double n, const Vector & b){
        return b * n;
    }

    std::ostream & operator<<(std::ostream & os, const Vector & b){
        if(b.mode == 'r'){
            os << "(x,y) = (" << b.x << "," << b.y << ") "; 
        }else if (b.mode == 'p'){
            os << "(m,a) = ( "<< b.msg << ", " << b.ang * Rad_to_deg <<" )" ;
        }else{
            os<<"Vecotr object mode is invalid";
        }
        return os;
    }
}