#include "../header/sqlite.hpp"

int main(int ac, char**av) {
    file *m_file = new file();
    if (ac == 1) {
        m_file->name = "test";
    } else if (ac == 2) {
        std::cout << av[0] << " " << av[1] << std::endl;
        return 0;
    } else {
        return 84;
    }

    main_loop();

    return 0;
}