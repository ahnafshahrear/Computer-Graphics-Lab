#include <graphics.h>
#include <bits/stdc++.h>

using namespace std;

void draw(vector<int> x, vector<int> y)
{
    int n = x.size();
    for (int i = 0; i < n; i++)
    {
        line(x[i], y[i], x[(i + 1) % n], y[(i + 1) % n]);
    }
}

void scale(vector<int> &x, vector<int> &y, int n, int sfx, int sfy)
{
    for (int i = 0; i < n; i++)
    {
        x[i] = x[i] * sfx;
        y[i] = y[i] * sfy;
    }
}

int main()
{
    int n; //... Total vertex of the polygon
    cin >> n;
    vector<int> x(n), y(n); //... (x,y) coordinates of polygon vertex points
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int sfx, sfy; //... Scaling factors
    cin >> sfx >> sfy;

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    draw(x, y); //... The polygon before scaling
    scale(x, y, n, sfx, sfy); //... Applying geometric scaling
    setcolor(YELLOW);
    draw(x, y); //... The polygon after scaling

    getch();
    closegraph();
    return 0;
}

/*//... Sample Input-Output:
___________________________________________________________________________________________________________________________________________________________________________________________________________________________
Input:
4 100 100 100 150 150 150 150 100 2 2

*///...
