#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int point; //... Total vertex of the polygon
int x[10], y[10]; //... (x,y) coordinates of each vertex
int tx, ty; //... Translation factors

void draw()
{
    for (int i = 0; i < point; i++)
    {
        line(x[i], y[i], x[(i + 1) % point], y[(i + 1) % point]);
    }
}

void translate()
{
    for (int i = 0; i < point; i++)
    {
        x[i] += tx;
        y[i] += ty;
    }
}

int main()
{
    cin >> point; //... Total vertex of the polygon
    for (int i = 0; i < point; i++)
    {
        cin >> x[i] >> y[i]; //... (x,y) coordinates of each vertex
    }
    cin >> tx >> ty; //... Translation factors

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(YELLOW);
    draw(); //... A yellow colored polygon before translation
    translate(); //... Applying translation factors
    setcolor(WHITE);
    draw(); //... A white colored polygon after translation

    getch();
    return 0;
}

/*//... Input Output:

...............Input:

3
100 100
100 200
200 100
100 100

*///... Ahnaf Shahrear Khan...
