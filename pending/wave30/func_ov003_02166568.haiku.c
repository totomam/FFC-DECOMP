#include "ffc/types.h"

extern void func_020424e0(void *);
extern void func_ov003_0214dda8(void);
extern void *func_02056aec(void);
extern void *func_ov003_0214de14(void);
extern void func_02056bc0(void *object, void *node);

void func_ov003_02166568(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    uint8_t v = *(uint8_t *)(p + 0x88);
    *(uint8_t *)(*(void **)(p + 0x84)) = v;
    if (*(uint8_t *)(p + 0x88) != 0) {
        func_020424e0(*(void **)(p + 0x80));
        func_ov003_0214dda8();
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
        return;
    }
    void *r4 = func_02056aec();
    func_020424e0(*(void **)(p + 0x80));
    void *n = func_ov003_0214de14();
    func_02056bc0(p + 0x14, n);
    func_02056bc0(p, r4);
}
