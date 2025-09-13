#include "mylib/mylib.h"
#include <iostream>

int main() {
    mylib_init();
    
    char output[256];
    int result = mylib_process("Hello, World!", output, sizeof(output));
    
    if (result == 0) {
        std::cout << "Processed: " << output << std::endl;
    }
    
    mylib_cleanup();
    return 0;
}
