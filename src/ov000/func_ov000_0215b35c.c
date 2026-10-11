#include "ffc/types.h"

typedef struct Obj {
    uint8_t pad[0x88];
    uint32_t f88;
    uint32_t f8c;
} Obj;

typedef struct Glob {
    uint32_t x;
    Obj *obj;
} Glob;

extern Glob data_ov000_02170064;

int func_ov000_0215b35c(uint32_t a, uint32_t b) {
    if (data_ov000_02170064.obj == 0) {
        return 0;
    }
    data_ov000_02170064.obj->f88 = a;
    data_ov000_02170064.obj->f8c = b;
    return 1;
}
