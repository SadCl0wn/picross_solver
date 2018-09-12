#pragma once
#include <vector>

using namespace std;

bool rightMove_x(vector<vector<char>>& matrix,char x,vector<vector<char>> &rule_x);
bool rightMove_y(vector<vector<char>>& matrix,char y,vector<vector<char>> &rule_y);
bool rightMove(vector<vector<char>>& matrix,char x,char y,vector<vector<char>> &rule_x,vector<vector<char>> &rule_y);
bool solver(vector<vector<char>>& matrix,vector<vector<char>> &rule_x,vector<vector<char>> &rule_y);