#include <cstdio>
#include "graph.h"
#include "graphCreator.h"
#include <iostream>
#include <vector>
using namespace std;
#include <graphics.h>
int main(int argc, char* argv[]){
    GraphCreator* graphCreator = new GraphCreator(10, 0.7);
    Graph* graph = graphCreator->createGraph();
    vector<Node> v = graph->getNodes();
    for(int i = 0; i < graph->getNumOfNodes(); i++){
        cout << v.at(i).getId() << "\n";
    }
}