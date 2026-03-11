#ifndef SQLITE_HPP
#define SQLITE_HPP

    #include <iostream>
    #include <string>
    #include <vector>

    struct file
    {
        std::string name;
    };

    struct s_state
    {
        bool is_working;
    };

    void main_loop(void);
    void main_parser(std::vector<std::string>);
    

#endif /* SQLITE_HPP */
