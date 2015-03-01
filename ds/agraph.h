#ifndef _agraph_h__
#define _agraph_h__
typedef char ElemType;
typedef int InfoType;

/*  the type of vertex adj  */
typedef struct ANode
{
    int adjvex; /*  the number of adj*/
    struct ANode *nextarc;  /*  point to the next arc*/
    InfoType info;  /* the info edges    */
}ArcNode;

/*  the type of the vertex   */
typedef struct VNode
{
    ElemType data;  /*  the info the vertex */
    ArcNode *firstarc;  /*  point to the first vertex   */
}

typedef VNode AdjList[MAXV];    /*  adjlist type    */
typedef struct 
{
    AdjList adjlist;    
    int n, e;
}AGraph;
#endif
