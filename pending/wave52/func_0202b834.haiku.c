#include "ffc/types.h"

extern void *func_02023fd8(void *);
extern int func_02084b00(void *, void *);
extern int func_02024a18(void *, int, void *, int);
extern void func_02080d08(void *, void *, void *);
extern void func_0202b834(void *, uint8_t *, int, int, void *);

void func_0202b834(void *unused, uint8_t *p, int a, int b, void *d)
{
    uint8_t out[0x40];
    uint8_t buf[0x40];
    void *h;

    h = func_02023fd8(*(void **)(p + 0x34));
    func_02084b00(h, buf);
    if (a >= 0) {
        if (func_02024a18(*(void **)(p + 0x34), a, out, b) != 0) {
            func_02080d08(out, buf, buf);
        }
    }
    func_02080d08(d, buf, d);
    if (*(uint8_t **)(p + 0x38) != 0) {
        func_0202b834(p, *(uint8_t **)(p + 0x38), *(int *)(p + 0x3c), p[0x71], d);
    } else {
        if (p[0xb8] != 0) {
            func_02080d08(d, p + 0x78, d);
        }
    }
}
