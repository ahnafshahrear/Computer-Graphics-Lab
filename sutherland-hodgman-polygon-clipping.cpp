#include <graphics.h>
#include <bits/stdc++.h>

//... This is not actually Sutherland Hodgman Polygon Clipping

using namespace std;

double x_left = 120, x_right = 500, y_bottom = 100, y_top = 350; //... Clipping window
int Left = 1, Right = 2, Bottom = 4, Top = 8; //... Region code

bool inside = false;
double clipped_x1, clipped_y1, clipped_x2, clipped_y2;

int regionCode(int x, int y)
{
    int code = 0;
    if (x > x_right) code |= Right;
    else if (x < x_left) code |= Left;
    if (y > y_top) code |= Top;
    else if (y < y_bottom) code |= Bottom;
    return code;
}

void sutherlandHodgman(double x1, double y1, double x2, double y2)
{
    int code1 = regionCode(x1, y1);
    int code2 = regionCode(x2, y2);
    while (true)
    {
        if (!(code1 | code2)) //... Line is completely inside
        {
            inside = true;
            break;
        }
        else if (code1 & code2) break; //... Line is completely outside
        else //... Line is partially inside
        {
            int x, y;
            int code = code1 ? code1 : code2;
            if (code & Top)
            {
                y = y_top;
                x = x1 + (x2 - x1) / (y2 - y1) * (y - y1);
            }
            else if (code & Bottom)
            {
                y = y_bottom;
                x = x1 + (x2 - x1) / (y2 - y1) * (y - y1);
            }
            else if (code & Left)
            {
                x = x_left;
                y = y1 + (y2 - y1) / (x2 - x1) * (x - x1);
            }
            else if (code & Right)
            {
                x = x_right;
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
        clipped_x1 = x1;
        clipped_y1 = y1;
        clipped_x2 = x2;
        clipped_y2 = y2;
    }
}

void draw(vector<double> x, vector<double> y)
{
    int n = x.size();
    for (int i = 0; i < n; i++)
    {
        line(x[i], y[i], x[(i + 1) % n], y[(i + 1) % n]);
    }
}

int main()
{
    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    //... Polygon vertex
    vector<double> x = {100, 200, 20}, y = {200, 180, 100};
    draw(x, y);

    vector<double> clipped_x, clipped_y;
    int n = x.size();
    for (int i = 0; i < n; i++)
    {
        inside = false;
        sutherlandHodgman(x[i], y[i], x[(i + 1) % n], y[(i + 1) % n]);
        if (inside)
        {
            clipped_x.push_back(clipped_x1);
            clipped_x.push_back(clipped_x2);
            clipped_y.push_back(clipped_y1);
            clipped_y.push_back(clipped_y2);
        }
    }
    rectangle(x_left, y_bottom, x_right, y_top);

    for (int i = 0; i < n; i++)
    {
        if (clipped_x.size() > 2) break;
        if (x[i] <= x_left and y[i] <= y_bottom)
        {
            clipped_x.push_back(x_left);
            clipped_y.push_back(y_bottom);
        }
        if (x[i] <= x_left and y[i] >= y_top)
        {
            clipped_x.push_back(x_left);
            clipped_y.push_back(y_top);
        }
        if (x[i] >= x_right and y[i] <= y_bottom)
        {
            clipped_x.push_back(x_right);
            clipped_y.push_back(y_bottom);
        }
        if (x[i] >= x_right and y[i] >= y_top)
        {
            clipped_x.push_back(x_right);
            clipped_y.push_back(y_top);
        }
    }

    setcolor(YELLOW);
    n = clipped_x.size();
    double x_min = clipped_x[0], x_max = clipped_x[0], y_min = clipped_y[0], y_max = clipped_y[0];
    for (int i = 0; i < n; i++)
    {
        x_min = min(x_min, clipped_x[i]);
        x_max = min(x_max, clipped_x[i]);
        y_min = min(y_min, clipped_y[i]);
        y_max = min(y_max, clipped_y[i]);
        for (int j = 0; j < n; j++)
        {
            line(clipped_x[i], clipped_y[i], clipped_x[j], clipped_y[j]);
        }
    }
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(x_min + 1, y_min + 1, YELLOW);

    getch();
    closegraph();
    return 0;
}
