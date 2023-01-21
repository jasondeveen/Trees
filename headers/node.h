#ifndef NODE_H
#define NODE_H

#include "string"
#include "vector"

class Node
{
private:
    std::string name;
    int numberOfChildren = 0;
    std::vector<Node *> children;
    Node *parent;

public:
    Node(std::string name);
    void AddChild(Node *child);
    void Paint();
    void Introduce();
};

#endif