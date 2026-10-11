#include "ffc/types.h"

extern void *func_ov000_02146820(void);
extern void func_020870e8(void);
extern void func_020870a0(void *object);

typedef struct {
    void *obj;
    uint32_t state;
    uint8_t flag;
} Obj;

void func_ov000_02147184(void) {
    Obj *p = (Obj *)func_ov000_02146820();
    if (p) {
        func_020870e8();
        p->flag = 0;
        if (p->state - 1 > 1) {
            return;
        }
        p->state = 0;
        func_020870a0(p->obj);
    }
}
