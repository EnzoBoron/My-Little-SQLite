#include "../header/sqlite.hpp"

std::vector<std::string> process_remaining_lines(std::string instruction, std::vector<std::string> bloc) {
     while (instruction[instruction.length() - 1] != ';') {
            std::cout << "   ...> ";
            getline(std::cin, instruction);
            bloc.push_back(instruction);
        }
    return bloc;
}

void main_loop(void) {
    std::string instruction;
    std::vector<std::string> bloc;
    s_state *state = new s_state;
    state->is_working = true;

    std::cout << "SQLite version 2.8.17" << std::endl;
    std::cout << "Enter \".help\" for instructions" << std::endl;

    while (state->is_working) {
        std::cout << "sqlite> ";
        getline(std::cin, instruction);
        bloc.push_back(instruction);
        if (instruction[0] != '.') {
            bloc = process_remaining_lines(instruction, bloc);
        }
        general_parser(bloc);
    }
}