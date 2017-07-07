#include<iostream>
#include<list>
using namespace std;
class graphBfs{
    int nodes;
    list<int> *adj;
    public:
    graphBfs(int V); /*Constructor*/
    void addEdge(int v, int w); /*Edge from vertex v to vertex w*/
    void BFS(int s);
};

graphBfs::graphBfs(int V){
    nodes = V;
    adj = new list<int>[V];
}
void graphBfs::addEdge(int v, int w){
    adj[v].push_back(w);
}

void graphBfs::BFS(int s){
    /*Visited list*/
    bool visited[nodes];
    for(int i =0; i < 9; i++){
        visited[i] = false;
    }
    /*Create queue*/
    list<int> queue;
    queue.push_back(s);
    visited[s] = true;
    list<int>::iterator i;
    /*Loop*/
    while(!queue.empty()) {
       /* Get one node from queue at time*/
        s = queue.front();
        cout << s << " " ;
        queue.pop_front();
       /* Check for the available path from that node*/
        for(i=adj[s].begin(); i != adj[s].end(); ++i){
            if(!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

int main(){
    class graphBfs gfs(9);
    gfs.addEdge(0,1);
    gfs.addEdge(0,3);
    gfs.addEdge(1,2);
    gfs.addEdge(1,4);
    gfs.addEdge(3,4);
    gfs.addEdge(3,6);
    gfs.addEdge(4,5);
    gfs.addEdge(4,7);
    gfs.addEdge(5,8);
    gfs.addEdge(7,8);
    cout << "Breadth first search" << endl;
    gfs.BFS(0);
    cout << endl;
    return 0;
}
