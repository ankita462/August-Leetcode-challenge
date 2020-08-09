class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q1;
        
        int a=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                    a++;
            }
        }
        if(a==0) return 0;
        
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==2)
                {
                    q1.push({i,j});
                }
            }
        }

        int count=0;

        while(!q1.empty())
        {
            int t=q1.size();
            for(int i=0; i<t; i++)
            {
                int x=(q1.front()).first;
                int y=(q1.front()).second;
                
                if (x+1<grid.size() && grid[x+1][y]==1)
                {
                    q1.push({x+1,y});
                    grid[x+1][y]=2;
                }
                if (y+1<grid[0].size() && grid[x][y+1]==1)
                {
                    q1.push({x,y+1});
                    grid[x][y+1]=2;
                }
                if (x-1>=0 && grid[x-1][y]==1)
                {
                    q1.push({x-1,y});
                    grid[x-1][y]=2;
                }    
                if (y-1>=0 && grid[x][y-1]==1)
                {
                    q1.push({x,y-1});
                    grid[x][y-1]=2;
                }
                
                q1.pop();
            }
            count++;
        }
        
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        return count-1;
    }
};
