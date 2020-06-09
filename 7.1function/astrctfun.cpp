#include<iostream>
#include<cmath>
struct polar{
    double distance;
    double angle;
};
struct rect{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar( polar dapos);
void show_polar(const polar * dapos);
void rect_to_polar(rect * xypos, polar * pplace);
int main(){
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: " ;
    while(cin >> rplace.x >> rplace.y){
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout <<"done \n";
    return 0;
}

polar rect_to_polar(rect xypos){
    using namespace std;
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.x, xypos.y);
    return answer;
}
void rect_to_polar(rect * xypos, polar * pplace){
    using namespace std;
    pplace -> distance = sqrt(xypos -> x * xypos -> x+ xypos -> y*xypos -> y);
    pplace -> angle =  atan2(xypos -> x, xypos->y);
}
void show_polar(polar dapos){
    using namespace std;
    const double Red_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Red_to_deg;
    cout << " degrees\n";
}
void show_polar(const polar * dapos){
    using namespace std;
    const double Red_to_deg = 57.29577951;

    cout << "distance = " << dapos -> distance;
    cout << ", angle = " << dapos -> angle * Red_to_deg;
    cout << " degrees\n";
}