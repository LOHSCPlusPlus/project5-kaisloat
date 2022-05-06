#include "Node.h"
#include <iostream>

Node::Node(Inventor person){
  data = person;
  next = nullptr;
}