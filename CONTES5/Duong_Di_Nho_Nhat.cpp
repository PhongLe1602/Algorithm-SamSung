// C++ program to get least cost path in a grid from
// top-left to bottom-right
#include <bits/stdc++.h>
using namespace std;

int ROW,COL;
int grid[505][505];
// structure for information of each cell
struct cell
{
	int x, y;
	int distance;
	cell(int x, int y, int distance) :
		x(x), y(y), distance(distance) {}
};

// Utility method for comparing two cells
bool operator<(const cell& a, const cell& b)
{
	if (a.distance == b.distance)
	{
		if (a.x != b.x)
			return (a.x < b.x);
		else
			return (a.y < b.y);
	}
	return (a.distance < b.distance);
}

// Utility method to check whether a point is
// inside the grid or not
bool isInsideGrid(int i, int j)
{
	return (i >= 0 && i < ROW && j >= 0 && j < COL);
}

// Method returns minimum cost to reach bottom
// right from top left
int shortest(int grid[505][505], int row, int col)
{
	int dis[row][col];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			dis[i][j] = INT_MAX;
	int dx[] = {-1, 0, 1, 0};
	int dy[] = {0, 1, 0, -1};

	set<cell> st;

	// insert (0, 0) cell with 0 distance
	st.insert(cell(0, 0, 0));

	// initialize distance of (0, 0) with its grid value
	dis[0][0] = grid[0][0];

	// loop for standard dijkstra's algorithm
	while (!st.empty())
	{
		// get the cell with minimum distance and delete
		// it from the set
		cell k = *st.begin();
		st.erase(st.begin());

		// looping through all neighbours
		for (int i = 0; i < 4; i++)
		{
			int x = k.x + dx[i];
			int y = k.y + dy[i];

			// if not inside boundary, ignore them
			if (!isInsideGrid(x, y))
				continue;

			// If distance from current cell is smaller, then
			// update distance of neighbour cell
			if (dis[x][y] > dis[k.x][k.y] + grid[x][y])
			{
				// If cell is already there in set, then
				// remove its previous entry
				if (dis[x][y] != INT_MAX)
					st.erase(st.find(cell(x, y, dis[x][y])));

				// update the distance and insert new updated
				// cell in set
				dis[x][y] = dis[k.x][k.y] + grid[x][y];
				st.insert(cell(x, y, dis[x][y]));
			}
		}
	}

	// uncomment below code to print distance
	// of each cell from (0, 0)
	/*
	for (int i = 0; i < row; i++, cout << endl)
		for (int j = 0; j < col; j++)
			cout << dis[i][j] << " ";
	*/
	// dis[row - 1][col - 1] will represent final
	// distance of bottom right cell from top left cell
	return dis[row - 1][col - 1];
}

// Driver code to test above methods
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>ROW>>COL;
		grid[ROW][COL]={};
		for(int i=0;i<ROW;i++){
			for(int j=0;j<COL;j++)cin>>grid[i][j];
		}
		cout << shortest(grid, ROW, COL) << endl;
	}
	return 0;
}