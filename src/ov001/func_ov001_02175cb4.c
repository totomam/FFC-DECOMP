#include "ffc/types.h"

typedef struct Obj {
    uint8_t pad[0x14];
    void *f14;
    int32_t f18;
} Obj;

extern uint32_t func_ov001_0217ef6c(void *a, void *p);
extern int32_t func_ov001_0217c8f0(void *a, void *b, void *out);
extern void func_ov000_021653f4(void *p);
extern int32_t func_ov001_0217cb40(void *o);
extern void func_ov001_0217c9e8(void *a, void *o);
extern uint8_t data_ov001_02190100[];

uint32_t func_ov001_02175cb4(void *a, void *b) {
    Obj *out;
    uint8_t *p;

    if (a == 0 || (p = *(uint8_t **)a) == 0) {
        return 2;
    }
    if (*(uint32_t *)(p + 0x108) != 0) {
        return 0;
    }
    if (*(uint32_t *)(p + 0x1f4) == 4) {
        func_ov001_0217ef6c(a, data_ov001_02190100);
        return 2;
    }
    if (func_ov001_0217c8f0(a, b, &out) == 0) {
        return 0;
    }
    out->f18 = out->f18 - 1;
    if (*(uint32_t *)(p + 0x100) == 0) {
        if (out->f18 <= 0) {
            func_ov000_021653f4(out->f14);
            out->f14 = 0;
            if (func_ov001_0217cb40(out) != 0) {
                func_ov001_0217c9e8(a, out);
            }
        }
    }
    return 0;
}
