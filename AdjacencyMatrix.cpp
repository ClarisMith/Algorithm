#include<bits/stdc++.h>
using namespace std;

class Graph 
{
    public:
    int V;

    vector<vector<int>> adjMatrix;

    Graph(int V)
    {
        this->V = V;

        adjMatrix.resize(V,vector<int>(V,0));

    }

    void addedge(int m , int n)
    {
        adjMatrix[m][n]=1;
        adjMatrix[m][n]=1;
    }

    void Display()
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j<V ; j++)
            {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};


int main()
{
    int V,E;

    cout <<  "Enter the number of vertices:";
    cin >> V;

    Graph g(V);

    cout << "Enter the number of edges:";
    cin >> E;

    for(int i = 0 ;i <E; i++)
    {
    int m,n;
    cout << "Enter the endpoints of edge" << i+1 << "(m,n):";
    cin >> m >>n;

    if(m >= 0 && m < V && n>= 0 && n  < V)
    {
        g.addedge(m,n);
    }
    else
    {
        cout << "Invalid Vertices! Please enter vertices between 0 and " << V-1 << endl;
    }

    }

    g.Display();

    return 0;
    

}
