#include "ffc/types.h"

typedef void (*fn_t)(void *);

extern void func_0209ce90(void);
extern void func_0209d27d_unk(void);
extern void func_0209cc64(void *p);

void func_0209cf5c(uint8_t *a, int32_t n, int32_t x, fn_t fn, int32_t flag) {
    uint8_t *p;
    if (fn == 0) {
        return;
    }
    if (flag == 0) {
        p = a;
        while (n != 0) {
            fn(p);
            p += x;
            n--;
        }
        return;
    }
    p = a;
    while (n != 0) {
        fn(p);
        p += x;
        n--;
    }
}
