#include<bits/stdc++.h>
using namespace std;
//Graph class represents a directed graph using adjacency list
class Graph{
public:
    map<int, bool>visited;
    map<int, list<int> > adj;

    //method to add an edge to graph
    void addEdge(int v, int w);

    //DFS traversal of the vertices reachable from v;
    void DFS(int v);

};

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::DFS(int v){
    visited[v]=true;
    cout << v << " ";

    list<int>::iterator i;
    for(i=adj[v].begin(); i!=adj[v].end(); i++){
        if(!visited[*i]){
            DFS(*i);
        }
    }
}

int main(){
Graph g;
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(1, 2);
g.addEdge(2, 0);
g.addEdge(2, 3);
g.addEdge(3, 3);
g.DFS(2);
return 0;
}
