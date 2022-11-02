#ifndef MY_TREE_H
#define MY_TREE_H

#include <Arduino.h>
#include "Led.h"

class Tree
{
  private:
  public:
    Tree();
    Tree(Led pre, Led sta, Led top, Led mid, Led bot, Led gre, Led red);
    Led pre, sta, top, mid, bot, gre, red;
};

#endif