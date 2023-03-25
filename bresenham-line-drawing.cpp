#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

void drawLine(int x1, int y1, int x2, int y2)
{
    if (x1 > x2)
    {
        swap(x1, x2);
        swap(y1, y2);
    }
    int dx = x2 - x1, dy = abs(y1 - y2);
    int p = 2 * dy - dx;
    for (int x = x1, y = y1; x <= x2; x++)
    {
        putpixel(x, y, WHITE);
        if (p >= 0)
        {
            y++;
            p += 2 * (dy - dx);
        }
        else p += 2 * dy;
    }
}

int main()
{
    int x1, y1, x2, y2;
    cout << "Enter the first coordinate: ";
    cin >> x1 >> y1;
    cout << "Enter the second coordinate: ";
    cin >> x2 >> y2;
    int gd = DETECT;
    int gm = DETECT;
    initgraph(&gd, &gm, "");
    drawLine(x1, y1, x2, y2);
    getch();
    return 0;
}
