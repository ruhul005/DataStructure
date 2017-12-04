#include"graphtype.h"
#include<iostream>

using namespace std;

const int NULL_EDGE=0;

template<class VertexType>
GraphType<VertexType>::GraphType(){
    numVertices=0;
    maxVertices=50;
    vertices= new VertexType[50];
    edges = new int*[50];
    for(int i=0;i<50;i++)
        edges[i]=new int[50];
    marks=new bool[50];
}

template<class VertexType>
GraphType<VertexType>::GraphType(int maxV){
    numVertices=0;
    maxVertices=maxV;
    vertices=new VertexType[maxV];
    edges = new int*[maxV];
    for(int i=0;i<maxV;i++)
        edges[i]=new int*[maxV];
        marks=new bool[maxV];
}

template<class VertexType>
GraphType<VertexType>::~GraphType(){
    delete[] vertices;
    delete[] marks;
    for(int i=0;i<maxVertices;i++)
        delete[] edges[i];
    delete [] edges;
}

template<class VertexType>
void GraphType<VertexType>::MakeEmpty(){
    numVertices=0;
}

template<class VertexType>
bool GraphType<VertexType>::IsEmpty(){
    return (numVertices==0);
}

template<class VertexType>
bool GraphType<VertexType>::IsFull(){
    return(numVertices=maxVertices);
}

template<class VertexType>
void GraphType<VertexType>::AddVertex(VertexType vertex){
    vertices[numVertices]= vertex;
    for(int index=0; index<numVertices;index++){
        edges[numVertices] [index]=NULL_EDGE;
        edges[index][numVertices]= NULL_EDGE;
        
    }
    numVertices++;
}

template<class VertexType>
int GraphType<VertexType>::IndexIs(VertexType* vertices,VertexType vertex){
    int index=0;
    while(!(vertex==vertices[index]))
        index++;
    return index;
}

template<class VertexType>
void GraphType<VertexType>::ClearMarks(){
    for(int i=0;i<maxVertices;i++){
        marks[i]=false;
    }
}

template<class VertexType>
void GraphType<VertexType>::MarkVertec(VertexType vertex){
    int index=IndexIs(vertices,vertex);
    marks[index]=true;
}

template<class VertexType>
bool GraphType<VertexType>::IsMarked(VertexType vertex){
    int index= IndexIs(vertices , vertex);
    return marks[index];
}
