/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   graphtype.h
 * Author: ruhulamin
 *
 * Created on December 3, 2017, 9:46 AM
 */
#include"stacktype.cpp"
#include"quetype.cpp"
template <class VertexType>
class GraphType{
    public:
        GraphType();
        GraphType(int maxV);
        ~GraphType();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        bool IsMarked(VertexType);
        void AddVertex(VertexType);
        void AddEdge(VertexType, VertexType,int);
        int WeightIs(VertexType,VertexType);
        void GetToVertices(VertexType,QueType<VertexType>&);
        void ClearMarks();
        void MarkVertec(VertexType);
        void DepthFirstSearch(VertexType,VertexType);
        void BreadthFirstSearch(VertexType,VertexType);
        int IndexIs(VertexType* vertices,VertexType vertex);
        
    private:
        int numVertices;
        int maxVertices;
        VertexType* vertices;
        int **edges;
        bool* marks;
            
};
#ifndef GRAPHTYPE_H
#define GRAPHTYPE_H


#endif /* GRAPHTYPE_H */

