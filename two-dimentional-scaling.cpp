#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int point; //... Total vertex of the polygon
int x[10], y[10]; //... (x,y) coordinates of each vertex
int sfx, sfy; //... Scaling factors

void draw()
{
    for (int i = 0; i < point; i++)
    {
        line(x[i], y[i], x[(i + 1) % point], y[(i + 1) % point]);
    }
}

void scale()
{
    for (int i = 0; i < point; i++)
    {
        x[i] = x[i] * sfx;
        y[i] = y[i] * sfy;
    }
}

int main()
{
    cin >> point; //... Total vertex of the polygon
    for (int i = 0; i < point; i++)
    {
        cin >> x[i] >> y[i]; //... (x,y) coordinates of each vertex
    }
    cin >> sfx >> sfy; //... Scaling factors

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(YELLOW);
    draw(); //... The polygon before scaling
    scale(); //... Applying 2d geometric scaling
    setcolor(WHITE);
    draw(); //... The polygon after scaling

    getch();
    return 0;
}

/*//... Input Output:

...............Input:
3
100 100
100 200
200 100
2 2

*///... Ahnaf Shahrear Khan...
