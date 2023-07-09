#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<int>> grid 
  {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
  };

  for(int i = 0; i < grid.size(); i++)
  {
    for(int j = 0; j < grid.size(); j++)
    {
      cout << grid[i][j] << " ";
    }
    cout << "\n";
  }

    int Y = 2, X = 2;
    
  while (1 == 1)
  {
    cout << "==================\n";
    char dir;
    cin >> dir;

    grid[Y][X] = 0;

    switch(dir)
    {
      case 'W':
      case 'w':
        Y--; break;

      case 'S':
      case 's':
        Y++; break;

      case 'A':
      case 'a':
        X--; break;

      case 'D':
      case 'd':
        X++; break;

      default:
        break;
    }

    grid[Y][X] = 1;

    for(int i = 0; i < grid.size(); i++)
    {
      for(int j = 0; j < grid.size(); j++)
      {
        cout << grid[i][j] << " ";
      }
      cout << "\n";
    }
  }

  return 0;
}