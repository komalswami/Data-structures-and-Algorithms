#include<bits/stdc++.h>

using namespace std;

 

//every edge has 3 values associated with it source, destination and weight

struct edge

{

    int s,d,w;

};

 

int bellmanFord(int n, int e, int src, vector<edge> &edge, vector<int> &dist)

{

    int i,j;

    int s,d,w;

 

    i=src;

 

    dist[i-1]=0;

 

    //n-1 passes

    for(i=1;i<n;i++)

    {

        //for each edge

        for(j=0;j<e;j++)

        {

            s=edge[j].s;

            d=edge[j].d;

            w=edge[j].w;

 

            //if we can get a smaller value of dist[d] using this edge, replace it

            if(dist[s]!=INT_MAX && dist[s]+w<dist[d])

            {

                dist[d]=dist[s]+w;

            }

        }

    }

 

    //this loop is to detect a negative loop

    for(j=0;j<e;j++)

    {

        s=edge[i].s;

        d=edge[i].d;

        w=edge[i].w;

 

        if(dist[s]!=INT_MAX && dist[s]+w<dist[d])

        {

            //we have caught a negative loop

            return 0;

        }

    }

 

    //all okay signal

    //indicating no negative loop

    return 1;

}

 

int main()

{

    int i;

    int n,e;

    int s,d,w;

    int src;

 

    cout<<"Enter the number of vertices ";

    cin>>n;

 

    cout<<"Enter the number of edges ";

    cin>>e;

 

    vector<edge> edge(e);

 

    cout<<"Enter the src, dest and weight of each edge"<<endl;

    for(i=0;i<e;i++)

    {

        cin>>s>>d>>edge[i].w;

        edge[i].s=s-1;

        edge[i].d=d-1;

    }

 

    cout<<"Enter the source vertex ";

    cin>>src;

 

 

    //create a vector of size n(for n vertices) and initialize the value of each element to infinity

    //dist[i]=the minimum distance of vertex i from source vertex

    vector<int> dist(n,INT_MAX);

 

    i=bellmanFord(n,e,src,edge,dist);

 

    cout<<endl;

 

    if(i)

    {

        cout<<"vectex      Min. distance from source"<<endl;

        for(i=0;i<n;i++)

        {

            cout<<i+1<<"         "<<dist[i]<<endl;

        }

    }

 

    else

    {

        //negative loop

        cout<<"There is a negative weight loop in the graph "<<endl;

    }

 

    return 0;

}