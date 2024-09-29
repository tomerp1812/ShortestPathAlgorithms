#include "Edge.h"

//constructor
Edge::Edge(Node& from, Node& to, int weight){
    this->from = from;
    this->to = to;
    this->weight = weight;
}

int Edge::getWeight(){
    return this->weight;
}

Node Edge::getFrom()
{
    return this->from;
}

Node Edge::getTo()
{
    return this->to;
}
