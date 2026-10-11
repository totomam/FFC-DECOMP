#include "ffc/types.h"

extern char data_ov003_0217bdd0[];
extern void func_0205847c(uint32_t a, uint32_t b);
extern void func_02059538(uint32_t a, uint32_t b);
extern void func_02059a78(uint32_t a, uint32_t b);
extern void func_0205d620(void *p);
extern void func_02062868(void *p);

void *func_ov003_02178480(void *p) {
    uint32_t *s = (uint32_t *)p;
    uint32_t *o;
    uint32_t r5;

    s[0] = (uint32_t)data_ov003_0217bdd0;
    func_0205847c(s[0xc], s[0xd]);
    o = (uint32_t *)s[7];
    r5 = o[5];
    func_02059538(r5, s[8]);
    func_02059a78(r5, s[9]);
    func_0205d620((void *)((uint8_t *)p + 0x38));
    func_02062868(p);
    return p;
}
