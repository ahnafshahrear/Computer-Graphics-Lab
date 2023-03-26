#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

void drawCircle(int xc, int yc, int radius)
{
    vector<pair<int, int>> points;
    int x = 0, y = radius, p = 3 - (2 * radius);
    while (y >= x)
    {
        points.push_back({y, x});
        points.push_back({x, y});
        x++;
        if (p >= 0)
        {
            y--;
            p += 4 * (x - y) + 10;
        }
        else p += (4 * x) + 6;
    }
    for (auto v: points)
    {
        putpixel(xc + v.first, yc + v.second, WHITE);
        putpixel(xc - v.first, yc + v.second, WHITE);
        putpixel(xc + v.first, yc - v.second, WHITE);
        putpixel(xc - v.first, yc - v.second, WHITE);
    }
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");
    int xc = 150, yc = 150, radius = 125;
    drawCircle(xc, yc, radius);
    getch();
    return 0;
}
