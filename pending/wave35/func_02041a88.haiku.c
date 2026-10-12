#include "ffc/types.h"

extern void func_0203755c(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov008_0219be94(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern void func_02037568(void);

void func_02041a88(void *param)
{
    uint8_t *p = (uint8_t *)param;
    uint32_t state = *(uint32_t *)(p + 0x84);
    void *r1;
    void *r0;

    *(uint32_t *)(p + 0x84) = *(uint32_t *)(p + 0x84) + 1;
    switch (state) {
    case 0:
        func_0203755c();
        r0 = func_0205681c(0x108);
        r1 = r0;
        if (r0 != 0) {
            r1 = func_ov008_0219be94(r0, *(void **)(p + 0x80));
        }
        func_02056bc0(p + 0x14, r1);
        break;
    case 1:
        func_02037568();
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
        break;
    }
}
