#include <graphics.h>
#include <bits/stdc++.h>

using namespace std;

double x_left = 120, x_right = 500, y_bottom = 100, y_top = 350; //... Clipping window

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(YELLOW);
    rectangle(10,10,200,200);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(12,12,YELLOW);

    setcolor(WHITE);
    rectangle(x_left + 1, y_bottom+1, x_right-1, y_top-1);


    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    rectangle(0,0,x_left,500);
    floodfill(2, 2, DARKGRAY);
    rectangle(0,0,700,y_bottom);
    floodfill(3, 3, DARKGRAY);
    rectangle(x_right,0,700,500);
    floodfill(x_right+1, 2, DARKGRAY);
    rectangle(0,y_top,700,500);


    getch();
    closegraph();
    return 0;
}

