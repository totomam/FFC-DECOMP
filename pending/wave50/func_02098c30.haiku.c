#include "ffc/types.h"

extern void func_02097e24(uint32_t v);
extern void func_0209710c(uint8_t *obj, uint8_t *data);
extern void func_0209d27d_unk(void);
extern void func_0209cc64(void *local);
extern uint8_t data_020b3178[];

typedef struct Out {
    uint8_t b0;
    uint8_t b1;
    uint8_t pad[2];
    uint8_t *ptr;
} Out;

Out *func_02098c30(Out *o, uint8_t *p) {
    uint8_t *obj;

    o->b0 = 0;
    o->b1 = 0;
    o->ptr = p;

    obj = p + *(int32_t *)(*(uint32_t *)p - 12);
    if (obj[0x2e] == 0) {
        uint32_t v = *(uint32_t *)(obj + 0x30);
        if (v != 0) {
            func_02097e24(v);
        }
        obj = o->ptr + *(int32_t *)(*(uint32_t *)o->ptr - 12);
        if (obj[0x2e] == 0) {
            o->b0 = 1;
            return o;
        }
    }
    obj[0x2e] |= 4;
    if (*(uint32_t *)(obj + 0x20) == 0) {
        obj[0x2e] |= 1;
    }
    if (obj[0x2f] & obj[0x2e]) {
        func_0209710c(obj, data_020b3178);
    }
    return o;
}
