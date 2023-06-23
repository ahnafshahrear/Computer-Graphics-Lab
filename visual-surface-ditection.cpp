#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void Triangle()
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
	int gd = DETECT;
	int gm = DETECT;
	initgraph(&gd, &gm, "");
    for (char x: sequence)
    {
        if (x == 'C') Circle();
        else if (x == 'T') Triangle();
        else Rectangle();
    }
    getch();
    return 0;
}

/*//... Input Output:

...............Input:

RTC or CRT or TCR

*///... Ahnaf Shahrear Khan
