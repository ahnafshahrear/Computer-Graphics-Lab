#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void Triangle()
{
    // Blue Triangle
    setcolor(GREEN);
    line(10, 100, 50, 20);
    line(50, 20, 100, 100);
    line(10, 100, 100, 100);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(50, 25, GREEN);
}

void Circle()
{
    // Red Circle
    setcolor(BLUE);
    circle(100, 100, 45);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(101, 101, BLUE);
}

void Rectangle()
{
    // Green Rectangle
    setcolor(RED);
    rectangle(100, 100, 180, 180);
    setfillstyle(SOLID_FILL, RED);
    floodfill(101, 101, RED);
}

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // freopen("input.txt", "r", stdin);
    string sequence = "RCT";
    // cin >> sequence;

    for (char x: sequence)
    {
        if (x == 'C') Circle();
        else if (x == 'T') Triangle();
        else Rectangle();
    }

    getchar();
    return 0;
}
