#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

// To convert Degree to Radian
#define Sin(x) sin(x * acos(-1.0) / 180)
#define Cos(x) cos(x * acos(-1.0) / 180)

int gd = DETECT, gm;
int polypoint; // Total number of vertices
double x[10], y[10];
double angle; // Rotation angle
double xPivot, yPivot; // Pivot points

void draw()
{
    for (int i = 0; i < polypoint; i++)
    {
        line(x[i], y[i], x[(i + 1) % polypoint], y[(i + 1) % polypoint]);
    }
}

void rotation()
{
    for (int i = 0; i < polypoint; i++)
    {
        double xShift = x[i] - xPivot, yShift = y[i] - yPivot;
        x[i] = xPivot + (xShift * Cos(angle)) - (yShift * Sin(angle));
        y[i] = yPivot + (xShift * Sin(angle)) + (yShift * Cos(angle));

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
    cout << "Enter rotation angle: ";
    cin >> angle;
    cout << "Enter pivot points: ";
    cin >> xPivot >> yPivot;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(RED);
    draw();
    rotation();
    setcolor(WHITE);
    draw();
    getch();
    return 0;
}

/*
Input Format:
Enter no. of sides in polygon: 4
Enter each vertex coordinates:
100 100
100 200
200 200
200 100
Enter rotation angle: 45
Enter pivot points: 200 200
*/
