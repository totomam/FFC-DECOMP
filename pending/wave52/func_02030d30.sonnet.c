#include "ffc/types.h"

extern void func_0202b258(void *a, void *b, int32_t c);
extern int32_t func_0202eba4(void *a);
extern void *func_0202b414(void *a);
extern int32_t func_0202e10c(void *a, void *b);
extern uint32_t func_02092864(const uint8_t *text);
extern int32_t func_02024928(void *a, void *b);

void func_02030d30(uint8_t *p, void *v) {
    void *n;
    int32_t r;
    int32_t r6;

    if (*(void **)(p + 0x90) == 0) return;
    *(void **)(p + 0x47c) = v;
    func_0202b258(*(void **)(p + 0x90), 0, -1);
    if (*(int8_t *)(p + 0x459) == 0) return;
    r = 0;
    if (*(void **)(p + 0x47c) != 0) {
        r = func_0202eba4(*(void **)(p + 0x47c));
    }
    if (r != 0) return;
    if (*(void **)(p + 0x47c) == 0) return;
    n = *(void **)(*(uint8_t **)(p + 0x47c) + 0x5c);
    if (n == 0) return;
    do {
        if (func_0202e10c(func_0202b414(n), p + 0x459) == 0) {
            r6 = -1;
            if (func_02092864(p + 0x469)) {
                r6 = func_02024928(*(void **)((uint8_t *)n + 0x34), p + 0x469);
            }
            func_0202b258(*(void **)(p + 0x90), n, r6);
            return;
        }
        n = *(void **)((uint8_t *)n + 4);
    } while (n != 0);
}
