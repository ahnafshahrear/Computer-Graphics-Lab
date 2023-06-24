#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

//... To convert degree to radian
#define Sin(x) sin(x * acos(-1.0) / 180)
#define Cos(x) cos(x * acos(-1.0) / 180)

int point; //... Total vertex of the polygon
int x[10], y[10]; //... (x,y) coordinates of each vertex
int angle; //... Rotation angle in degree
int xPivot, yPivot; //... Pivot point coordinates

void draw()
{
    for (int i = 0; i < point; i++)
    {
        line(x[i], y[i], x[(i + 1) % point], y[(i + 1) % point]);
    }
}

void rotation()
{
    for (int i = 0; i < point; i++)
    {
        int xShift = x[i] - xPivot, yShift = y[i] - yPivot;
        x[i] = xPivot + (xShift * Cos(angle)) - (yShift * Sin(angle));
        y[i] = yPivot + (xShift * Sin(angle)) + (yShift * Cos(angle));

    }
}

int main()
{
    cin >> point; //... Total vertex of the polygon
    for (int i = 0; i < point; i++)
    {
        cin >> x[i] >> y[i]; //... (x,y) coordinates of each vertex
    }
    cin >> angle; //... Rotation angle in degree
    cin >> xPivot >> yPivot; //... Pivot point coordinates

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(YELLOW);
    draw(); //... The polygon before rotation
    rotation(); //... Applying 2d geometric rotation
    setcolor(WHITE);
    draw(); //... The polygon before rotation

    getch();
    return 0;
}

/*//... Input Output:

...............Input:
4
100 100
100 200
200 200
200 100
45
200 200

*///... Ahnaf Shahrear Khan...
