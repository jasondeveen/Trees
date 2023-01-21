#include "../headers/node.h"
#include "iostream"

using namespace std;

Node::Node(string name)
{
    this->name = name;
}

void Node::AddChild(Node *child)
{
    this->children.push_back(child);
    this->children.push_back(0);
}

void Node::Paint()
{
    // top down, bottom up is not an option?
    printf("Not implemented!");
}

void Node::Introduce()
{
    cout << "Hi! My name is " << this->name << " and my children are:" << endl;

    for (int i = 0; this->children.at(i) ; i++)
    {
        cout << "\tChild " << i << ": " << children.at(i)->name << endl;
    }
}