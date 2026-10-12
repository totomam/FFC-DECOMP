#include "ffc/types.h"

extern void func_0209cce4(void);
extern void func_0209cc64(void *p);
extern void func_0209d27d_unk(void);

typedef struct {
    void (*f)(uint8_t *);
    uint8_t pad[0x2c];
} Local;

void func_0209cfc8(uint8_t *base, uint32_t count, uint32_t stride, void (*fn)(uint8_t *)) {
    Local loc;
    uint8_t *p;
    void *volatile sink;
    loc.f = fn;
    sink = &loc;
    if (loc.f == 0) {
        return;
    }
    p = base + count * stride;
    if (count == 0) {
        return;
    }
    do {
        p = p - stride;
        loc.f(p);
        count--;
    } while (count != 0);
}
