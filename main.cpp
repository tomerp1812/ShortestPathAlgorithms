#include <cstdio>
#include "graph.h"
#include "graphCreator.h"
#include <iostream>
#include <vector>
using namespace std;
#include <graphics.h>
int main(int argc, char* argv[]){
    GraphCreator* graphCreator = new GraphCreator(10, 0.4);
    Graph* graph = graphCreator->createGraph();
    vector<Edge> v = graph->getEdges();
    for(int i = 0; i < graph->getNumOfEdges(); i++){
        cout << v.at(i).getFrom().getId() << " " << v.at(i).getTo().getId() << " " << v.at(i).getWeight() << "\n";
    }
}