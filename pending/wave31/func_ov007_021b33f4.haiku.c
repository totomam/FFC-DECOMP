#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02074028(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02074048(void *a, uint32_t b, uint32_t c);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c62dc[2];

void func_ov007_021b33f4(void *param_1)
{
    uint8_t *obj = (uint8_t *)param_1;
    void *v;
    void *res;
    uint32_t *d;

    v = func_0205681c(0x20);
    if (v != 0) {
        v = func_02074028(v);
    }
    *(void **)(obj + 0xb8) = v;
    func_02056bc0(obj + 0x48, v);
    res = func_02074048(*(void **)(obj + 0xb8), 0xbd2,
        *(uint32_t *)((uint8_t *)(*(void **)data_020b8e44) + 0x80));
    func_02056bc0(obj + 0x14, res);
    d = data_ov007_021c62dc;
    {
        uint32_t a = d[0];
        uint32_t b = d[1];
        *(uint32_t *)(obj + 0xb0) = a;
        *(uint32_t *)(obj + 0xb4) = b;
    }
}
