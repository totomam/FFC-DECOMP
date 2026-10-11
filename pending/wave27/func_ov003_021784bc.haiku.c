#include "ffc/types.h"

extern uint8_t data_ov003_0217bdd0;
extern void func_0205847c(uint32_t a, uint32_t b);
extern void func_02059538(void *a, uint32_t b);
extern void func_02059a78(void *a, uint32_t b);
extern void func_0205d620(void *a);
extern void func_02062868(void *a);
extern void func_02056844(void *a);

void *func_ov003_021784bc(void *s)
{
    char *p = (char *)s;
    uint32_t b34 = *(uint32_t *)(p + 0x34);

    *(void **)p = &data_ov003_0217bdd0;
    func_0205847c(*(uint32_t *)(p + 0x30), b34);
    {
        char *o = *(char **)(p + 0x1c);
        uint32_t b20 = *(uint32_t *)(p + 0x20);
        void *r5 = *(void **)(o + 0x14);
        func_02059538(r5, b20);
        func_02059a78(r5, *(uint32_t *)(p + 0x24));
    }
    func_0205d620(p + 0x38);
    func_02062868(s);
    func_02056844(s);
    return s;
}
