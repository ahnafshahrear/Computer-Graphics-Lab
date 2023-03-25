#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int gd = DETECT;
int gm = DETECT;

int point;
int x[10], y[10];
int tx, ty;

void draw()
{
    for (int i = 0; i < point; i++)
    {
        line(x[i], y[i], x[(i + 1) % point], y[(i + 1) % point]);
    }
}

void translate()
{
    for (int i = 0; i < point; i++)
    {
        x[i] += tx;
        y[i] += ty;
    }
}

int main()
{
    cout << "Enter no. of sides in polygon: ";
    cin >> point;
    cout << "Enter each vertex coordinates:\n";
    for (int i = 0; i < point; i++)
    {
        cin >> x[i] >> y[i];
    }
    cout << "Enter translation factors(tx & ty): ";
    cin >> tx >> ty;
    initgraph(&gd, &gm, "");
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
