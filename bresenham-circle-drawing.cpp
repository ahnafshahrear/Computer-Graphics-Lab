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
    int x_center, yc, radius;
    cout << "Enter the center coordinates: ";
    // Must enter positive coordinates
    cin >> xc >> yc;
    cout << "Enter the radius: ";
    cin >> radius;
    int gd = DETECT;
    int gm = DETECT;
    initgraph(&gd, &gm, "");
    drawCircle(xc, yc, radius);
    getch();
    return 0;
}

/*
Input Format:

Enter the center coordinates: 150 150
Enter the radius: 125
*/
