#include "ffc/types.h"

typedef struct Obj {
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
} Obj;

typedef struct Glob {
    uint32_t w0;
    Obj *ptr;
} Glob;

extern Glob data_ov000_02170064;

void func_ov000_0215b7a4(uint32_t x) {
    Obj *p = data_ov000_02170064.ptr;
    p->k = p->j;
    data_ov000_02170064.ptr->j = x;
}
