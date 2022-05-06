#pragma once
#include "Inventor.h"
struct Node {
  Inventor data;
  Node *next;
  Node(Inventor person);
};
