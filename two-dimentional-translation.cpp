#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int gd = DETECT, gm;
int size;
int x[10], y[10];
double tx, ty;

void draw()
{
    for (int i = 0; i < size; i++)
    {
        line(x[i], y[i], x[(i + 1) % size], y[(i + 1) % size]);
    }
}

void translate()
{
    for (int i = 0; i < size; i++)
    {
        x[i] = x[i] + tx;
        y[i] = y[i] + ty;
    }
}

int main()
{
    cout << "Enter no. of sides in polygon: ";
    cin >> size;
    cout << "Enter each vertex coordinates:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> x[i] >> y[i];
    }
    cout << "Enter translation factors(tx & ty):";
    cin >> tx >> ty;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(RED);
    draw();
    translate();
    setcolor(WHITE);
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
Enter translation factors(sfx & sfy):150 50
*/

