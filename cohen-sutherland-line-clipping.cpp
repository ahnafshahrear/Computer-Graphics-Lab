#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

// Defining clipping window
int xMin = 120, xMax = 500, yMin = 100, yMax = 350;

// Assigning region-code
int Left = 1, Right = 2, Bottom = 4, Top = 8;

int regionCode(int x, int y)
{
    int code = 0;
    if (x < xMin) code |= Left;
    else if (x > xMax) code |= Right;
    if (y < yMin) code |= Bottom;
    else if (y > yMax) code |= Top;
    return code;
}

void cohenSutherland(double x1, double y1, double x2, double y2)
{
    int code1 = regionCode(x1, y1);
    int code2 = regionCode(x2, y2);
    bool inside = false;
    while (true)
    {
        double x, y;
        if (!(code1 | code2)) // Line is inside
        {
            inside = true;
            break;
        }
        else if (code1 & code2) // Line is outside
        {
            break;
        }
        else // Line is partially inside
        {
            int code = code1 ? code1 : code2;
            if (code & Top)
            {
                y = yMax;
                x = x1 + (x2 - x1) / (y2 - y1) * (y - y1);
            }
            else if (code & Bottom)
            {
                y = yMin;
                x = x1 + (x2 - x1) / (y2 - y1) * (y - y1);
            }
            else if (code & Left)
            {
                x = xMin;
                y = y1 + (y2 - y1) / (x2 - x1) * (x - x1);
            }
            else if (code & Right)
            {
                x = xMax;
                y = y1 + (y2 - y1) / (x2 - x1) * (x - x1);
            }
            if (code == code1)
            {
                x1 = x;
                y1 = y;
                code1 = regionCode(x1, y1);
            }
            else
            {
                x2 = x;
                y2 = y;
                code2 = regionCode(x2, y2);
            }
        }
    }
    if (inside)
    {
        setcolor(WHITE);
        rectangle(xMin, yMin, xMax, yMax);
        line(x1, y1, x2, y2);
    }
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");
    setcolor(RED);
    line(200, 180, 20, 100);
    //while (true)
    {
        cohenSutherland(200, 180, 20, 100);
        delay(100);
    }
    getch();
    return 0;
}
