
int tempm;
int visited[51][51];
int DFS(int **v,int n,int m,int nowi,int nowj){
    visited[nowi][nowj]=1;
    int res=1;
    if(nowi>0&&v[nowi-1][nowj]==1&&!visited[nowi-1][nowj])     res+=DFS(v,n,m,nowi-1,nowj);
    if(nowi<n-1&&v[nowi+1][nowj]==1&&!visited[nowi+1][nowj])   res+=DFS(v,n,m,nowi+1,nowj);
    if(nowj>0&&v[nowi][nowj-1]==1&&!visited[nowi][nowj-1])     res+=DFS(v,n,m,nowi,nowj-1);
    if(nowj<m-1&&v[nowi][nowj+1]==1&&!visited[nowi][nowj+1])   res+=DFS(v,n,m,nowi,nowj+1);
    return res;
}

int maxAreaOfIsland(int** v, int n, int* gridColSize){
    tempm = gridColSize[0];
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<tempm;j++){
            visited[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<tempm;j++){
            if(!visited[i][j]&&v[i][j])
                mx=fmax(mx,DFS(v,n,tempm,i,j));
        }
    }
    return mx;
}