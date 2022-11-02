//main
#include "Lane.h"
#include "Tree.h"
#include "Led.h"


//pre    2
//stage  3
//top    4
//middle 5
//bottom 6
//green  7
//red    8

Led pre(2), stage(3), top(4), mid(5), bot(6), green(7), red(8);

Tree leftTree(pre, stage, top, mid, bot, green, red);

Lane lane(leftTree);

void setup() 
{
}

void loop() 
{
  lane.tree.pre.on();
  delay(500);
  lane.tree.sta.on();
  delay(500);
  lane.tree.top.on();
  delay(500);
  lane.tree.mid.on();
  delay(500);
  lane.tree.bot.on();
  delay(500);
  lane.tree.gre.on();
  delay(500);
  lane.tree.red.on();
  delay(500);

  lane.tree.pre.off();
  delay(500);
  lane.tree.sta.off();
  delay(500);
  lane.tree.top.off();
  delay(500);
  lane.tree.mid.off();
  delay(500);
  lane.tree.bot.off();
  delay(500);
  lane.tree.gre.off();
  delay(500);
  lane.tree.red.off();
  delay(500);
}
