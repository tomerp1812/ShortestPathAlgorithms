#include "drawing.h"

Drawing::Drawing(Graph &graph){
    this->graph = graph;
}

void Drawing::draw(){
    int gd=DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    vector<Node> nodes = this->graph.getNodes();
    vector<Edge> edges = this->graph.getEdges();
    for(int i = 0; i < this->graph.getNumOfNodes(); i++){
        circle(nodes.at(i).getId() * 50 + 100, nodes.at(i).getId() * 50 + 100, 1);
    }
    getch();
    closegraph();
}
