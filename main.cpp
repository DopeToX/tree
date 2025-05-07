#include <iostream>
using namespace std;
class tree{
    Node(Node)* root;
}
class Node
{
public:
    int data;
    Node* left, * right;

    Node(int key){
        data = key;
        left=0;
        right=0;
    }

}