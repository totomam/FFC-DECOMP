/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Entry;

void func_02080514(Entry *p) {
    p[0].a = 0x1000; p[0].b = 0; p[0].c = 0; p[0].d = 0;
    p[1].a = 0x1000; p[1].b = 0; p[1].c = 0; p[1].d = 0;
    p[2].a = 0x1000; p[2].b = 0; p[2].c = 0; p[2].d = 0;
}
