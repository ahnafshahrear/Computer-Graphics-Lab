#include <graphics.h>
#include <bits/stdc++.h>

using namespace std;

void snowfalke(int x1, int y1, int x5, int y5, int it)
{
    if (it)
    {
        int dx = (x5 - x1) / 3;
        int dy = (y5 - y1) / 3;
        int x2 = x1 + dx, x3 = (x1 + x5) / 2 + sqrt(3) * (y1 - y5) / 6, x4 = x1 + 2 * dx;
        int y2 = y1 + dy, y3 = (y1 + y5) / 2 + sqrt(3) * (x5 - x1) / 6, y4 = y1 + 2 * dy;
        snowfalke(x1, y1, x2, y2, it - 1);
        snowfalke(x2, y2, x3, y3, it - 1);
        snowfalke(x3, y3, x4, y4, it - 1);
        snowfalke(x4, y4, x5, y5, it - 1);
    }
    else line (x1, y1, x5, y5);
    delay(5);
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    int iteration = 4;
    vector<pair<int, int>> x = {{250, 15}, {50, 350}, {450, 350}};
    for (int i = 0; i < 3; i++)
    {
        snowfalke(x[i].first, x[i].second, x[(i + 1) % 3].first, x[(i + 1) % 3].second, iteration);
    }

    getch();
    closegraph();
    return 0;
}
