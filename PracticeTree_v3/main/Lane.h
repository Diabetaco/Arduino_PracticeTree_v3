//Lane header file
#ifndef MY_LANE_H
#define MY_LANE_H

#include <Arduino.h>
#include "Tree.h"

class Lane
{
  private:
  public:
    Lane(Tree tree);
    Tree tree;
};

#endif
