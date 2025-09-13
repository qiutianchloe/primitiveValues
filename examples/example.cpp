#include "primitivevalue/primitivevalue.h"
#include <iostream>

int main() {
    primitivevalue_init();
    
    char output[256];
    int result = primitivevalue_process("Hello, PrimitiveValue!", output, sizeof(output));
    
    if (result == 0) {
        std::cout << "Processed: " << output << std::endl;
    }
    
    primitivevalue_cleanup();
    return 0;
}
