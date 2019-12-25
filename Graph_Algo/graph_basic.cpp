class graph
{
    public: 
        int n_v,n_e;
        vector<vector<int>> adj_list;
        bool isDirected;
        vector<int> isVisited;

        void take_input(bool =true);

        void show_adj_list();

        void addEdge(int ,int ,bool =true);

        void dfs(int );

        void bfs(int );

};

void graph::take_input(bool isDir)
{
    cin>>n_v>>n_e;
    adj_list.resize(n_v);
    isVisited.resize(n_v);
    fill(all(isVisited),-1);
    isDirected = isDir;
    int to,fro;
    for(int i=0;i<n_e;++i)
    {
        cin>>to>>fro;
        addEdge(to-1,fro-1,isDir);
    }
}

void graph::show_adj_list()
{
    int i;
    cout<<"No. of Vertices = "<<n_v<<en;
    cout<<"No. of Edges = "<<n_e<<en;
    rep(i,0,n_v)
    {
        int j;
        cout<<i<<"-> ";
        rep(j,0,adj_list[i].size())
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<en;
    }
}

void graph::addEdge(int to,int fro,bool isDir)
{
    adj_list[to].push_back(fro);
    if(isDir)
        adj_list[fro].push_back(to);
}

/*Use Case
  graph g;
    g.take_input();
    g.show_adj_list();
*/