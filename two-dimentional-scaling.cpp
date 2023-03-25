#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int gd = DETECT, gm;
int polypoint;
int x[10], y[10];
int sfx, sfy;

void draw()
{
    for (int i = 0; i < polypoint; i++)
    {
        line(x[i], y[i], x[(i + 1) % polypoint], y[(i + 1) % polypoint]);
    }
}

void scale()
{
    for (int i = 0; i < polypoint; i++)
    {
        x[i] = x[i] * sfx;
        y[i] = y[i] * sfy;
    }
}

int main()
{
    cout << "Enter no. of sides in polygon: ";
    cin >> polypoint;
    cout << "Enter each vertex coordinates:\n";
    for (int i = 0; i < polypoint; i++)
    {
        cin >> x[i] >> y[i];
    }
    cout << "Enter scaling factors(sfx & sfy): ";
    cin >> sfx >> sfy;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(WHITE);
    draw();
    scale();
    setcolor(RED);
    draw();
    getch();
    return 0;
}

/*
Input Format:
Enter no. of sides in polygon: 4
Enter each vertex coordinates:
1 1
1 100
100 100
100 1
Enter scale factors(sfx & sfy):3 2
*/
