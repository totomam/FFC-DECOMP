#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02075c00(void *p);
extern void func_02055ae8(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void func_ov001_0218b960(uint8_t *obj)
{
    uint32_t off = 0x738;
    void *p;
    if (*(void **)(obj + off) != 0) {
        return;
    }
    p = func_0205681c(0x5c);
    if (p != 0) {
        p = func_02075c00(p);
    }
    *(void **)(obj + off) = p;
    {
        void *q = obj;
        if (obj != 0) {
            q = obj + 0xb0;
        }
        func_02055ae8((uint8_t *)*(void **)(obj + off) + 0x14, q);
    }
    func_02056bc0(*(void **)(obj + off - 8), *(void **)(obj + off));
}
