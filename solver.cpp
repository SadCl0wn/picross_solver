#include "./solver.h"

bool rightMove_x(vector<vector<char>> &matrix, char x, vector<vector<char>> &rule_x)
{
    vector<char> nbOnes;
    char n = 0;
    char lastValue = 255;
    for (auto i : matrix[x])
    {
        if (i == 1)
        {
            nbOnes[n]++;
            if (rule_x[x][n] < nbOnes[n])
                return false;
        }
        else if (lastValue == 1)
        {
            n++;
            nbOnes.push_back(0);
            if (rule_x[x].size() < nbOnes.size())
                return false;
        }
        lastValue = i;
    }
    return true;
}
bool rightMove_y(vector<vector<char>> &matrix, char y, vector<vector<char>> &rule_y)
{
    vector<char> nbOnes;
    char n = 0;
    char lastValue = 255;
    for (char x;x < matrix.size();x++)
    {
        char i = matrix[x][y];
        if (i == 1)
        {
            nbOnes[n]++;
            if (rule_y[y][n] < nbOnes[n])
                return false;
        }
        else if (lastValue == 1)
        {
            n++;
            nbOnes.push_back(0);
            if (rule_y[y].size() < nbOnes.size())
                return false;
        }
        lastValue = i;
    }
    return true;
}
bool rightMove(vector<vector<char>> &matrix, char x, char y, vector<vector<char>> &rule_x, vector<vector<char>> &rule_y)
{
    rightMove_x(matrix, x, rule_x);
    rightMove_y(matrix, y, rule_y);
}

bool solver(vector<vector<char>> &matrix, vector<vector<char>> &rule_x, vector<vector<char>> &rule_y)
{
}