#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int gd = DETECT, gm;
int polypoint;  // previously this variable was named as 'size', but the line 'using namespace std' implies an error which says, 'size is ambiguous', this is because there is already a function named size() in std. So we changed it to 'polypoint'
int x[10], y[10];
int tx, ty;

void draw()
{
    for (int i = 0; i < polypoint; i++)
    {
        line(x[i], y[i], x[(i + 1) % polypoint], y[(i + 1) % polypoint]);
    }
}

void translate()
{
    for (int i = 0; i < polypoint; i++)
    {
        x[i] += tx;
        y[i] += ty;
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
    cout << "Enter translation factors(tx & ty): ";
    cin >> tx >> ty;
    initgraph(&gd, &gm, (char *)"");
    setcolor(RED);
    draw();
    translate();
    setcolor(WHITE);
    draw();
    getch();
    closegraph();
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
