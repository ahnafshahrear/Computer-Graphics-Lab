#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void Triangle()
{
    setcolor(GREEN);
    line(10, 100, 50, 20);
    line(50, 20, 100, 100);
    line(10, 100, 100, 100);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(50, 25, GREEN);
}

void Circle()
{
    setcolor(BLUE);
    circle(100, 100, 45);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(101, 101, BLUE);
}

void Rectangle()
{
    setcolor(RED);
    rectangle(100, 100, 180, 180);
    setfillstyle(SOLID_FILL, RED);
    floodfill(101, 101, RED);
}

int main()
{
    string sequence;
    cin >> sequence;

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    for (char x: sequence)
    {
        if (x == 'R') Circle();
        else if (x == 'T') Triangle();
        else Rectangle();
    }

    getch();
    return 0;
}

/*
Input Format:

RTC or CRT or TCR...
*/
