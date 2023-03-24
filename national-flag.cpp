#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Green Rectangle
    setcolor(GREEN);
    rectangle(50, 50, 350, 230);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(51, 51, GREEN);

    // Red Circle
    setcolor(RED);
    circle(195, 140, 60);
    setfillstyle(SOLID_FILL, RED);
    floodfill(201, 141, RED);

    // White Stand
    setcolor(WHITE);
    rectangle(40, 40, 50, 430);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(41, 41, WHITE);


    getchar();
    return 0;
}
