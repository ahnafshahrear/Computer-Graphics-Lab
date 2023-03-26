#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

vector<pair<int, int>> points = {{27, 243}, {101, 47}, {324, 197}, {437, 23}};

int factorial(int n)
{
    if (!n)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

double nCr(int n, int r)
{
    return factorial(n) / (double)(factorial(r) * factorial(n - r));
}

double power(double p, double n)
{
    double ans = 1.0;
    while (n--)
    {
        ans = ans * p;
    }
    return ans;
}

double bezierFunction(int i, int n, double u)
{
    return nCr(n, i) * power(u, i) * power((1 - u), (n - i));
}

void bezierCurve()
{
    int n = points.size() - 1;
    double eps = 0.0005;
    for (double u = 0; u <= 1; u += eps)
    {
        double x = 0, y = 0;
        for (int i = 0; i <= n; i++)
        {
            double bez = bezierFunction(i, n, u);
            x += points[i].first * bez;
            y += points[i].second * bez;
        }
        putpixel(x, y, WHITE);
    }
    for (auto x: points)
    {
        putpixel(x.first, x.second, WHITE);
        circle(x.first, x.second, 5);
    }
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");
    bezierCurve();
    getch();
    return 0;
}