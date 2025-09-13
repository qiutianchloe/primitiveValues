#ifndef PRIMITIVEVALUE_H
#define PRIMITIVEVALUE_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

// Version information
#define PRIMITIVEVALUE_VERSION_MAJOR 1
#define PRIMITIVEVALUE_VERSION_MINOR 0
#define PRIMITIVEVALUE_VERSION_PATCH 0

// Public API functions
int primitivevalue_init(void);
int primitivevalue_process(const char* input, char* output, size_t output_size);
void primitivevalue_cleanup(void);

#ifdef __cplusplus
}
#endif

#endif // PRIMITIVEVALUE_H
