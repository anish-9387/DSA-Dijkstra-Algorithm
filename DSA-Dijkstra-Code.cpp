#include<iostream>
#include<vector>
#include<climits>
#include<queue>
#include<stack>
using namespace std;

class Edge{
public:
    int v;
    int wt;
    Edge(int v, int wt){
        this->v = v;
        this->wt = wt;
    }
};

void dijkstra(int src, vector<vector<Edge>>& graph, int V){
    // Min heap --> pair<distance, node>
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    vector<int> dist(V,INT_MAX);   // distance from src
    vector<int> parent(V,-1);      // store path

    // Initialize source
    dist[src] = 0;
    pq.push({0,src});

    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        for(Edge e : graph[u]){
            if(dist[e.v] > dist[u] + e.wt){
                dist[e.v] = dist[u] + e.wt;
                parent[e.v] = u;
                pq.push({dist[e.v],e.v});
            }
        }
    }

    // Print shortest distance
    cout<<"\nShortest distances from source node "<<src<<":\n";
    for(int i=0; i<V; i++){
        cout<<"Node "<<i<<" : "<<dist[i]<<"\n";
    }

    // Print paths
    cout<<"\nPaths from source node "<<src<<":\n";
    for(int i=0; i<V; i++){
        if(dist[i] == INT_MAX){
            cout<<"Node "<<i<<" : No path\n";
            continue;
        }
        stack<int> path;
        int v = i;
        while(v != -1){
            path.push(v);
            v = parent[v];
        }
        cout<<"Node "<<i<<" : ";
        while(!path.empty()){
            cout<<path.top();
            path.pop();
            if(!path.empty()){
                cout<<" -> ";
            }
        }
        cout<<"  (Cost: "<<dist[i]<<")\n";
    }
}

int main(){
    int V = 6; // number of vertices
    vector<vector<Edge>> graph(V);

    // Example Graph (Undirected)
    graph[0].push_back(Edge(1,2));
    graph[1].push_back(Edge(0,2));

    graph[0].push_back(Edge(2,4));
    graph[2].push_back(Edge(0,4));

    graph[1].push_back(Edge(2,1));
    graph[2].push_back(Edge(1,1));

    graph[1].push_back(Edge(3,7));
    graph[3].push_back(Edge(1,7));

    graph[2].push_back(Edge(4,3));
    graph[4].push_back(Edge(2,3));

    graph[3].push_back(Edge(5,1));
    graph[5].push_back(Edge(3,1));

    graph[4].push_back(Edge(3,2));
    graph[3].push_back(Edge(4,2));

    // Run Dijkstra from source node 1
    dijkstra(1,graph,V);

    return 0;
}