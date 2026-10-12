#include "ffc/types.h"

extern void *func_0203b9b4(uint32_t x);
extern void *func_02057958(void);
extern void func_02056bc0(void *object, void *node);

typedef struct Obj Obj;
struct Obj {
    void **vtbl;
};

void func_ov003_02164ec8(void *self)
{
    uint32_t *p = (uint32_t *)self;
    uint32_t *node = (uint32_t *)p[0x20];

    if (node != 0) {
        uint32_t a = node[1];
        uint32_t b = node[2];
        uint32_t m = a & (b ^ a);
        if (m & 0x1001) {
            p[3] = (p[3] & ~0xffu) | 2;
            return;
        }
    } else {
        Obj *obj = (Obj *)func_0203b9b4(1);
        func_02057958();
        p[0x20] = ((uint32_t (*)(Obj *, uint32_t))obj->vtbl[9])(obj, 0);
        func_02056bc0(&p[0x12], obj);
    }

    if (p[0x21] != 0) {
        if (p[0x22] >= p[0x21]) {
            p[3] = (p[3] & ~0xffu) | 2;
            return;
        }
        p[0x22] = p[0x22] + 1;
    }
}
