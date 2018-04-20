#include<iostream>
#include<list>

using namespace std;

class graph{
    int V;
    list<int> *adj;
    void dfs_trv(int v, bool visited[]);
    public:
        graph(int V);
        /* First one is curr node and w is adj node*/
        void add_edge(int v, int w);
        void dfs(int v);
};
/*Cotnructotr*/
graph::graph(int V){
    this->V = V; 
    adj = new list<int>[V];
}

void graph::add_edge(int v, int w){
    adj[v].push_back(w);
}
void graph::dfs_trv(int v, bool visited[]){
    visited[v] = true;
    cout << " " << v << " " << endl;
    /*iterate thru list of vertices connected to v */
    list<int>::iterator i;
    for(i=adj[v].begin(); i != adj[v].end(); i++){
        if(visited[*i] ==false)
            dfs_trv(*i, visited);
    }
}

void graph::dfs(int v){
    bool *visited  = new bool[V];
    for(int i =0; i<V; i++){
        visited[i] = false;
    }
    dfs_trv(v, visited);
}

int main(){
    /*Add edges */
    graph g(4);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 0);
    g.add_edge(2, 3);
    g.add_edge(3, 3);

    cout << "DFS traversal" << endl;
    g.dfs(2);
    return 0;
}
