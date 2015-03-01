#ifndef _mgraph_h__
#define _mgraph_h__
#define MAXV 10
typedef char ElemType;
typedef struct 
{
    int no;     /*  the number of the vertex    */
    ElemType info;      /*   the type of the inedx   */
}VertexType;

typedef struct 
{
    int edges[MAXV][MAXV];
    int n, e;       /*   the number of vertex and edges   */
    VertexType  vexs[MAXV]; /*  the info of the vertex  */
}MGraph;
#endif
