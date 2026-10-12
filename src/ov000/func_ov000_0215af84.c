#include "ffc/types.h"

typedef struct Obj {
    uint32_t w[0x40];
} Obj;

typedef struct Glob {
    uint32_t pad;
    Obj *obj;
} Glob;

extern uint32_t func_ov000_02159000(uint32_t a);
extern uint32_t func_ov000_0215981c(void);
extern void func_ov000_02159834(void *a, void *b, void *c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_ov000_0215b998(void);
extern Glob data_ov000_02170064;

uint32_t func_ov000_0215af84(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6) {
    if (func_ov000_02159000(a0) != 0 || (int32_t)data_ov000_02170064.obj->w[9] < 3 || func_ov000_0215981c() != 0) {
        return 0;
    }
    data_ov000_02170064.obj->w[0x1e] = a1;
    data_ov000_02170064.obj->w[0x1f] = a2;
    func_ov000_02159834(&data_ov000_02170064.obj->w[0x36], &data_ov000_02170064.obj->w[0x76], (void *)func_ov000_0215b998, 0, a3, a4, a5, a6);
    return 1;
}
