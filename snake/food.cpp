#include "food.h"

void Food::gen_food()
{
    pos.X = (rand() % WIDTH - 3) + 1;
    pos.Y = (rand() % HEIGHT - 3) + 1;
}

Food::~Food()
{
    // Destructor implementation (cleaning all the nessecary stuff)
}

COORD Food::get_pos() 
{
    return pos;
}

std::ostream& operator<<(std::ostream& os, const Food& food)
{
    os << "Food Position: (" << food.pos.X << ", " << food.pos.Y << ")";
    return os;
}
