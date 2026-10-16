/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { int32_t a[16]; } M;
void func_02080a40(M *m) {
    M t = {{0x1000,0,0,0, 0,0x1000,0,0, 0,0,0x1000,0, 0,0,0,0x1000}};
    *m = t;
}
