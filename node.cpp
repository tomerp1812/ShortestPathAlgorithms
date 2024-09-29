#include "node.h"

Node::Node(int value, int id){
    this->numOfNeighbors = 0;
    this->value = value;
    this->id = id;
}

int Node::getId(){
    return this->id;
}

//adds node to neighbors and returns 0 if mission was succesfull
int Node::addNeighbor(Node &node){
    this->neighbors.push_back(node);
    return 0;
}
