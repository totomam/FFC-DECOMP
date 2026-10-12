#include "ffc/types.h"

extern int func_ov000_0214ee6c(void *p);
extern int func_020871d8(int ms);
extern int func_ov000_0214e72c(void);
extern void func_0204b098(uint32_t v);

int func_0204a9b8(void *a, uint8_t *b, void *c)
{
    int r4;
    int r7;

    r7 = func_ov000_0214ee6c(c);
    if (r7 == 0 || r7 == -26) {
        r4 = 0;
        goto head;
        do {
            func_020871d8(500);
            func_ov000_0214e72c();
            r4 += 500;
head:
            r7 = func_ov000_0214ee6c(c);
        } while (r7 == -26 && r4 <= 10000);
    }

    if (r7 != -26 && b != 0 && *(uint32_t *)(b + 0xac) != 0) {
        func_0204b098(*(uint32_t *)(b + 0xac));
        b = b + 0xac;
        *(uint32_t *)b = 0;
    }
    return r7;
}
