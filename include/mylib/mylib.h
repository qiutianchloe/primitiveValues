#ifndef MYLIB_H
#define MYLIB_H

#ifdef __cplusplus
extern "C" {
#endif

// Version information
#define MYLIB_VERSION_MAJOR 1
#define MYLIB_VERSION_MINOR 0
#define MYLIB_VERSION_PATCH 0

// Public API functions
int mylib_init(void);
int mylib_process(const char* input, char* output, size_t output_size);
void mylib_cleanup(void);

#ifdef __cplusplus
}
#endif

#endif // MYLIB_H
