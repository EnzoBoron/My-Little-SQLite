#include "../../header/b_tree.hpp"

Node *begin(void) {
    Node *node = new Node;
    node->leaf = false;

    return node;
}

void add_number(Node *node, int n) {
    node->numbers.push_back(n);
}

void add_node(Node *node, std::vector<int> numbers, std::vector<std::string> texts, std::vector<double> reals, std::vector<void*> blobs) {
    Node *next = new Node;
    next->numbers = numbers;
    next->texts = texts;
    next->reals = reals;
    next->blobs = blobs;
    
    node->children.push_back(next);
}