#ifndef Mesh_hpp
#define Mesh_hpp

#pragma once

#include <GL/glew.h>
#include <stdio.h>

class Mesh
{
public:
    Mesh();

    void CreateMesh(GLfloat *vertices, unsigned int *indices, unsigned int numOfVertices, unsigned int numOfIndices);
    void RenderMesh();
    void ClearMesh();

    ~Mesh();

private:
    GLuint VAO, VBO, IBO;
    GLsizei indexCount;
};

#endif /* Mesh_hpp */
