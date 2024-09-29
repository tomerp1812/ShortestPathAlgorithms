#include <cstdio>
#include "graph.h"
#include "graphCreator.h"
#include <iostream>
#include <vector>
#include "drawing.h"
using namespace std;
#include <graphics.h>
int main(int argc, char* argv[]){
    GraphCreator* graphCreator = new GraphCreator(10, 0.4);
    Graph* graph = graphCreator->createGraph();
    vector<Edge> v = graph->getEdges();
    Drawing* d = new Drawing(*graph);
    d->draw();
}