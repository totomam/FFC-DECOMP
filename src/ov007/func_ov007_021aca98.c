#include "ffc/types.h"

extern void func_020692a4(void *object);
extern int func_0209a76c(int a, int b);

void func_ov007_021aca98(void *p)
{
    uint8_t *b = (uint8_t *)p;

    if (b[0xfe] == 0) {
        b[0xfd] = 0;
    } else {
        b[0xfd] = func_0209a76c(b[0xfe] - 1, 5);
    }

    if (b[0xfd] == 0) {
        func_020692a4(*(void **)(b + 0xd4));
        func_020692a4(*(void **)(b + 0xd8));
        {
            void *s = *(void **)(*(void **)(b + 0xd4) + 0x98);
            void **vt = *(void ***)s;
            ((void (*)(void *))vt[11])(s);
        }
        {
            void *s = *(void **)(*(void **)(b + 0xd8) + 0x98);
            void **vt = *(void ***)s;
            ((void (*)(void *))vt[11])(s);
        }
    }
}
