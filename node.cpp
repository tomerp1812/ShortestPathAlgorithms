#include "node.h"

Node::Node(){
}

Node::Node(int value, int id){
    this->numOfNeighbors = 0;
    this->value = value;
    this->id = id;
}

int Node::getId(){
    return this->id;
}

int Node::getValue()
{
    return this->value;
}

int Node::getNumOfNeighbors(){
    return this->numOfNeighbors;
}

//adds node to neighbors and returns 0 if mission was succesfull
int Node::addNeighbor(Node &node){
    this->neighbors.push_back(node);
    this->numOfNeighbors++;
    return 0;
}
