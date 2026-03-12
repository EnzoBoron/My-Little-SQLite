#include "../header/sqlite.hpp"

void main_parser(std::vector<std::string> bloc) {
    Node *node = begin();

    add_number(node, 5);
    add_number(node, 10);
    add_number(node, 15);

    std::vector<int> numbers = {10, 20, 30};
    std::vector<std::string> texts = { "Je suis une fleur", "acadabra" };
    add_node(node, numbers, texts, std::vector<double>(0.0), std::vector<void*>(0));

    display_btree(node);
    display_children(node);
}

void query_parser(std::string line) {
    if (line == ".quit" || line == ".exit")
        exit(0);
}

void general_parser(std::vector<std::string> bloc) {
    if (bloc[0][0] == '.') {
            query_parser(bloc[0]);
    } else {
        main_parser(bloc);
    }

}