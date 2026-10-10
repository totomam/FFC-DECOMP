/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint32_t g;
    uint32_t h;
    uint32_t i;
    uint32_t j;
    uint32_t k;
    uint32_t l;
    uint32_t m;
    uint32_t n;
    uint32_t o;
    uint32_t p;
} Blk;

void func_02080a40(Blk *p) {
    Blk t = { 0x1000, 0, 0, 0, 0, 0x1000, 0, 0, 0, 0, 0x1000, 0, 0, 0, 0, 0x1000 };
    *p = t;
}
