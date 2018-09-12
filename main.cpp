#include "./solver.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

char **loadData(string s)
{
    // char** res = new char

    ofstream f_matrix;
    f_matrix.open(s);
    int width, height;
    // f_matrix >> (int)width >> (int)height;
    char **res = new char *[width];

    for (size_t i = 0; i < height; i++)
    {
        res[i] = new char[width];
        for (size_t j = 0; j < width; j++)
        {
            res[i][j] = 255;
        }
    }

    f_matrix.close();
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
