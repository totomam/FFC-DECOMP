#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S2;

extern void *func_ov003_0214649c(void *p);
extern void *func_ov003_02153cb4(void *x, uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov003_02148b50(void *p, S2 s);
extern void *func_ov003_0214f18c(void *obj, void *p, void *x, S2 s, uint32_t r, uint32_t one, void *r7);
extern void func_02056bc0(void *object, void *node);

void *func_ov003_02149964(void *p, volatile S2 s, ...)
{
    void *r7;
    void *node;
    uint32_t r;

    r7 = func_ov003_02153cb4(func_ov003_0214649c(p), s.a, s.b);
    node = func_0205681c(0xd0);
    if (node != 0) {
        r = func_ov003_02148b50(p, *(S2 *)&s);
        node = func_ov003_0214f18c(node, p, *(void **)((uint8_t *)p + 0x178), *(S2 *)&s, r, 1, r7);
    }
    func_02056bc0(*(void **)((uint8_t *)p + 0x18c), node);
    return node;
}
