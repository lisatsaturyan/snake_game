#ifndef FOOD_H
#define FOOD_H
#include <windows.h>
#include <ostream>
#include <cstdio>

#define WIDTH 50
#define HEIGHT 25

class Food
{

public:
    void gen_food();
    COORD get_pos();
    friend std::ostream& operator<<(std::ostream& os, const Food& food);
    ~Food();


private:
    COORD pos;


};

#endif // FOOD_H 





