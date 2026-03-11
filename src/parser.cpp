#include "../header/sqlite.hpp"

void main_parser(std::vector<std::string> bloc) {
    
}

void query_parser(std::string line) {
    if (line == ".quit" || line == ".exit")
        exit(0);
}

void general_parser(std::vector<std::string> bloc) {
    if (bloc[0][0] == '.') {
            query_parser(bloc[0]);
    }
}