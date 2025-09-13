#include "primitivevalue/primitivevalue.h"
#include <cstring>
#include <iostream>

int primitivevalue_init(void) {
    std::cout << "PrimitiveValue library initialized" << std::endl;
    return 0;
}

int primitivevalue_process(const char* input, char* output, size_t output_size) {
    if (!input || !output || output_size == 0) {
        return -1;
    }
    
    size_t len = strlen(input);
    if (len >= output_size) {
        return -1;
    }
    
    strcpy(output, input);
    return 0;
}

void primitivevalue_cleanup(void) {
    std::cout << "PrimitiveValue library cleaned up" << std::endl;
}
