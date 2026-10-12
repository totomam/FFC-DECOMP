#include "ffc/types.h"

extern void func_02087620(void *object);
extern uint32_t func_0205681c(uint32_t n);
extern uint32_t func_02028df8(void);
extern void func_0202f5f8(void);
extern void func_02022a60(void *self, void *param);
extern char data_020ad770[];

void *func_020228a8(void *self, void *param)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t *w = (uint32_t *)self;
    void **node;
    void **head;
    uint32_t r;
    uint32_t f;

    f = w[3] & ~0xffu;
    *(void **)s = (void *)data_020ad770;
    w[3] = f;
    w[7] = 0x320000u;
    w[5] = 1;
    w[6] = 1;
    s[0x20] = 1;

    node = (void **)(s + 0x4c);
    head = node + 1;
    head[1] = (void *)head;
    node[1] = (void *)head;
    w[0x13] = 0;

    *(void **)(s + 0x208) = param;
    func_02087620(s + 0x220);

    s[0x254] = 0;
    s[0x255] = 0;
    w[0x258 / 4] = 0;

    r = func_0205681c(0x18);
    if (r != 0) {
        r = func_02028df8();
    }
    w[0x21c / 4] = r;

    func_0202f5f8();
    func_02022a60(self, param);
    return self;
}
