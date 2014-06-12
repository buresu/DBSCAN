#include "dbscan.h"
#include <iostream>

using namespace std;

int main()
{
    vector<Point> points(10);

    points[0].x = 20; points[0].y = 21;
    points[1].x = 20; points[1].y = 25;
    points[2].x = 28; points[2].y = 22;
    points[3].x = 30; points[3].y = 52;
    points[4].x = 26; points[4].y = 70;
    points[5].x = 30; points[5].y = 75;
    points[6].x = 0; points[6].y = 70;
    points[7].x = 70; points[7].y = 50;
    points[8].x = 67; points[8].y = 69;
    points[9].x = 80; points[9].y = 35;

    vector<int> labels;

    int num = dbscan(points, labels, 20.0, 3);

    cout<<"cluster size is "<<num<<endl;

    for(int i = 0; i < (int)points.size(); i++){
        std::cout<<"Point("<<points[i].x<<", "<<points[i].y<<"): "<<labels[i]<<std::endl;
    }

    return 0;
}

