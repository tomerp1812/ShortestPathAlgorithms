#include "graphCreator.h"
GraphCreator::GraphCreator(int numOfNodes, double chanceOfEdge){
    this->numOfNodes = numOfNodes;
    this->chanceOfEdge = chanceOfEdge;
}

Graph* GraphCreator::createGraph(){
    srand(time(0));
    double r;
    Graph* graph = new Graph();
    for(int i = 0; i < this->numOfNodes; i++){
        Node* node = new Node(0, i);
        graph->addNode(*node);
    }
    //building an edge between every 2 nodes, with "chanceOfEdge" chances
    vector<Node> v = graph->getNodes();
    for(int i = 0; i < this->numOfNodes; i++){
        for(int j = i + 1; j < this->numOfNodes; j++){
            r = ((double)rand()) / RAND_MAX;
            if(r < this->chanceOfEdge){
                Edge* edge = new Edge(v.at(i), v.at(j), j - i);
                v.at(i).addNeighbor(v.at(j));
                v.at(j).addNeighbor(v.at(i));
                graph->addEdge(*edge);
            }
        }
    }
    return graph;
}