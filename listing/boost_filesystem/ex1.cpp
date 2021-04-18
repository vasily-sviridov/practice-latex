#include <iostream>
#include <boost/filesystem.hpp>

int main() {
    boost::filesystem::recursive_directory_iterator begin("./");
    boost::filesystem::recursive_directory_iterator end;

    for (; begin != end; begin++) {
        std::cout << *begin << std::endl;
    }
    return 0;
}