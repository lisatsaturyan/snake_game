#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>
#include <vector>
#include <ostream>

#define WIDTH 50
#define HEIGHT 25

using namespace std;

class Snake
{
public:
    Snake(COORD pos, int vel);        //Constructor
    ~Snake();                      // Destructor

    void grow();
    void move_snake();
    void direction(char dir);

    vector<COORD> get_body();

    bool collided();
    bool eaten(COORD food);

    COORD get_pos();

    friend std::ostream& operator<<(std::ostream& os, const Snake& snake);


private:
    COORD pos;
    int vel;
    char dir;
    int len;
    vector<COORD> body;


};

#endif // SNAKE_H