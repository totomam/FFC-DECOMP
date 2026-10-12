#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02069210(void *object);
extern void *func_0203b81c(uint32_t x);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern void func_02056bc0(void *object, void *node);
extern void func_02069320(void *object, uint32_t value);
extern void func_020695ec(void *object, void *node);
extern void func_020697ac(void *object, void *node);
extern uint8_t data_ov007_021c4098[];
extern uint8_t data_ov007_021c3bdc[];

void func_ov007_021a25a8(uint8_t *a)
{
    uint8_t *r4;
    void *r6;
    uint8_t *flag = *(uint8_t **)(a + 0xbc);
    void *obj;

    *flag = 0;
    r4 = func_0205681c(0x98);
    if (r4 != 0) {
        func_02069210(r4);
        *(void **)r4 = data_ov007_021c4098;
        r6 = func_0203b81c(1);
        obj = func_0203b95c(*(void **)(data_ov007_021c3bdc + 0xc), r6, 0, 1);
        *(void **)(r4 + 0x94) = obj;
        ((void (*)(void *, uint32_t, uint32_t))(*(void ***)(*(uint8_t **)(r4 + 0x94)))[0x38 / 4])(*(void **)(r4 + 0x94), 2, 0);
        ((void (*)(void *))(*(void ***)(*(uint8_t **)(r4 + 0x94)))[0x28 / 4])(*(void **)(r4 + 0x94));
        func_02064390(*(void **)(r4 + 0x94), 0x80, 0x60);
        {
            uint8_t *r7 = r4 + 0x48;
            func_02056bc0(r7, *(void **)(r4 + 0x94));
            func_02056bc0(r7, r6);
        }
        func_02069320(r4, 2);
    }
    *(void **)(a + 0xb8) = r4;
    func_020695ec(a, r4);
    func_020697ac(a, *(void **)(a + 0xb8));
}
