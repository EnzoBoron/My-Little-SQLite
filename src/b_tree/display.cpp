#include "../../header/b_tree.hpp"

void display_children(Node *node) {
    std::cout << "---CHILDREN---" << std::endl;
    for (int i = 0; i < node->children.size(); i++) {
        std::cout << "adress: " << node->children[i] << std::endl;
        std::cout << "leaf: " << node->children[i]->leaf << std::endl;
        for (size_t y = 0; y < node->numbers.size(); y++)
            std::cout << "number: " << node->children[i]->numbers[y] << std::endl;
        for (size_t y = 0; y < node->children[i]->texts.size(); y++)
            std::cout << "texts: " << node->children[i]->texts[y] << std::endl;
        std::cout << "END OF DISPLAY" << std::endl; 
    }
}

void display_btree(Node *node) {
    std::cout << "children: " << std::endl;
    for (int i = 0; i < node->children.size(); i++)
        std::cout << node->children[i] << " -> ";
    std::cout << std::endl;
    
    std::cout << "Numbers: " << std::endl;
    for (size_t i = 0; i < node->numbers.size(); i++)
        std::cout << node->numbers[i] << " -> ";
    std::cout << std::endl;

    std::cout << "leaf: " << node->leaf << std::endl;
    
    for (int i = 0; i < node->texts.size(); i++)
        std::cout << "text" << node->texts[i] << std::endl;
    
    for (int i = 0; i < node->reals.size(); i++)
        std::cout << "reals" << node->reals[i] << std::endl;

    for (int i = 0; i < node->blobs.size(); i++)
        std::cout << "blobs" << node->blobs[i] << std::endl;
} 