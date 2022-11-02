//Tree cpp file
#include "Tree.h"
#include "Led.h"

Tree::Tree(){};

Tree::Tree(Led pre, Led sta, Led top, Led mid, Led bot, Led gre, Led red)
{
  this->pre = pre;
  this->sta = sta;
  this->top = top;
  this->mid = mid;
  this->bot = bot;
  this->gre = gre;
  this->red = red;
}
