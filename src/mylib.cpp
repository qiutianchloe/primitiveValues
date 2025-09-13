#include "mylib/mylib.h"
#include <cstring>
#include <iostream>

int mylib_init(void) {
    std::cout << "MyLib initialized" << std::endl;
    return 0;
}

int mylib_process(const char* input, char* output, size_t output_size) {
    if (!input || !output || output_size == 0) {
        return -1;
    }
    
    // Simple example: copy input to output
    size_t len = strlen(input);
    if (len >= output_size) {
        return -1;
    }
    
    strcpy(output, input);
    return 0;
}

void mylib_cleanup(void) {
    std::cout << "MyLib cleaned up" << std::endl;
}
