#include "rect2.h"

rect2::rect2(int tam, int pos)
{
    this->tam=tam;
    this->pos=pos;
    setRect(310, 50*pos, 20*tam, 20);
}
