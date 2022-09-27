//
// Created by Charles on 9/26/2022.
//

#ifndef INC_30DAYSOFCODE_RECTANGLE_H
#define INC_30DAYSOFCODE_RECTANGLE_H
using namespace std;

class Rectangle {
    int width, height;
public:
    void set_values (int,int);
    int area() {return width*height;}
};



#endif //INC_30DAYSOFCODE_RECTANGLE_H
