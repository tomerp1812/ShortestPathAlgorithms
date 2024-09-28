#include "drawing.h"

Drawing::Drawing(){
    int gd=DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    circle(200, 200, 150);
    getch();
    closegraph();
}