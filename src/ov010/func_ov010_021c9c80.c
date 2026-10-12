#include "ffc/types.h"

extern void func_ov009_021ad868(void *p);
extern void func_ov009_021ad8a8(void *p);
extern void func_02069288(void *object);
extern void func_020692a4(void *object);

typedef void (*VFn)(void *self);

void func_ov010_021c9c80(void *p) {
    uint8_t *b = (uint8_t *)p;

    func_ov009_021ad868(p);
    func_ov009_021ad8a8(p);
    if (b[0x27e] != 0) {
        func_02069288(*(void **)(b + 0x294));
        {
            void *sub = *(void **)((uint8_t *)*(void **)(b + 0x294) + 0x98);
            VFn *vt = *(VFn **)sub;
            vt[10](sub);
        }
        func_02069288(*(void **)(b + 0x298));
        {
            void *sub = *(void **)((uint8_t *)*(void **)(b + 0x298) + 0x98);
            VFn *vt = *(VFn **)sub;
            vt[10](sub);
        }
    } else {
        func_020692a4(*(void **)(b + 0x294));
        {
            void *sub = *(void **)((uint8_t *)*(void **)(b + 0x294) + 0x98);
            VFn *vt = *(VFn **)sub;
            vt[11](sub);
        }
        func_020692a4(*(void **)(b + 0x298));
        {
            void *sub = *(void **)((uint8_t *)*(void **)(b + 0x298) + 0x98);
            VFn *vt = *(VFn **)sub;
            vt[11](sub);
        }
    }
}
