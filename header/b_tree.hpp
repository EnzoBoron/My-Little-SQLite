#ifndef B_TREE_HPP
#define B_TREE_HPP

    #include <iostream>
    #include <string>
    #include <vector>
    #include <cstdint>

    class Node
    {
        public:
        bool leaf;

        std::vector<Node*> children;
        std::vector<int> keys;

        std::vector<int> numbers;
        std::vector<std::string> texts;
        std::vector<double> reals;
        std::vector<void*> blobs;
    };

    void display_btree(Node *node);
    void display_children(Node *node);

    void add_number(Node *node, int n);
    Node *begin(void);
    void add_node(Node *node,
        std::vector<int> numbers,
        std::vector<std::string> texts,
        std::vector<double> reals,
        std::vector<void*> blobs);
    


#endif /* B_TREE_HPP */
