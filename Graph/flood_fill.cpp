#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                  int newColor)
    {
        // code here
        if (image.size() == 0)
            return image;
        int m = image.size();
        int n = image[0].size();
        int c = image[sr][sc];
        if (newColor == c)
            return image;
        image[sr][sc] = newColor;
        queue<pair<int, int>> colored;
        colored.push({sr, sc});
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {-1, 1, 0, 0};
        while (!colored.empty())
        {
            int x = colored.front().first;
            int y = colored.front().second;
            colored.pop();
            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (nx < 0 || nx >= m || ny < 0 || ny >= n || image[nx][ny] != c)
                    continue;
                image[nx][ny] = newColor;
                colored.push({nx, ny});
            }
        }
        return image;
    }
};