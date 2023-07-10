#include <graphics.h>
#include <bits/stdc++.h>

using namespace std;

void drawTriangle()
{
    int x[] = {10, 50, 100}, y[] = {100, 20, 100};
    setcolor(GREEN);
    for (int i = 0; i < 3; i++)
    {
        line(x[i], y[i], x[(i + 1) % 3], y[(i + 1) % 3]);
    }
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(50, 25, GREEN);
}

void drawCircle()
{
    setcolor(BLUE);
    circle(100, 100, 45);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(101, 101, BLUE);
}

void drawRectangle()
{
    setcolor(RED);
    rectangle(100, 100, 180, 180);
    setfillstyle(SOLID_FILL, RED);
    floodfill(101, 101, RED);
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    string sequence = "RCT";
    for (char x: sequence)
    {
        if (x == 'C') drawCircle();
        else if (x == 'T') drawTriangle();
        else drawRectangle();
    }

    getch();
    closegraph();
    return 0;
}
