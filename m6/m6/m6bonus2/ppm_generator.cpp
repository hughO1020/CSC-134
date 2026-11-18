#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

// Function prototype
void pixelColor(int x, int y, int &r, int &g, int &b);

int main()
{
    ofstream output("output.ppm");

    output << "P3\n";
    output << "320 320\n";
    output << "255\n";

    for (int y = 0; y < 320; y++)
    {
        for (int x = 0; x < 320; x++)
        {
            int r, g, b;

            pixelColor(x, y, r, g, b);

            output << r << " " << g << " " << b << " ";
        }

        output << "\n";
    }

    output.close();

    cout << "Image created successfully!\n";

    return 0;
}

// Pixel color function
void pixelColor(int x, int y, int &r, int &g, int &b)
{
    // Sky gradient
    if (y < 220)
    {
        r = 70 + y / 5;
        g = 100 - y / 5;
        b = 180;
    }
    else
    {
        // Ground
        r = 40;
        g = 130;
        b = 65;
    }

    // Sun
    int dx = x - 160;
    int dy = y - 120;

    if (dx * dx + dy * dy < 55 * 55)
    {
        r = 255;
        g = 170;
        b = 30;
    }

    // Mountains
    int mountainHeight = 220 - abs(x - 80);
    int secondMountain = 230 - abs(x - 250);

    if (y > mountainHeight || y > secondMountain)
    {
        r = 45;
        g = 45;
        b = 75;
    }
}