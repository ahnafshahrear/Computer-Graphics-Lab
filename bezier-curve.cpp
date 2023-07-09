#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int factorial(int n)
{
    if (n)
    {
        return n * factorial(n - 1);
    }
    return 1;
}

double nCr(int n, int r)
{
    return factorial(n) / (double)(factorial(r) * factorial(n - r));
}

double bezierFunction(int k, int n, double u)
{
    return nCr(n, k) * pow(u, k) * pow((1 - u), (n - k));
}

void bezierCurve(vector<pair<int, int>> xy)
{
    int n = xy.size() - 1;
    double eps = 0.0001;
    for (double u = 0; u <= 1; u += eps)
    {
        double x = 0, y = 0;
        for (int k = 0; k <= n; k++)
        {
            double bez = bezierFunction(k, n, u);
            x += xy[k].first * bez;
            y += xy[k].second * bez;
        }
        putpixel(x, y, WHITE);
    }
    for (auto x: xy)
    {
        putpixel(x.first, x.second, WHITE);
        circle(x.first, x.second, 5);
    }
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    vector<pair<int, int>> xy = {{27, 243}, {101, 47}, {324, 197}, {437, 23}};
    bezierCurve(xy);

    getch();
    closegraph();
    return 0;
}
