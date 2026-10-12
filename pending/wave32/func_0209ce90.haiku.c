#include "ffc/types.h"

extern void func_0209cce4(void);
extern void func_0209cc64(void *p);

typedef struct {
    void (*fn)(uint32_t);
    uint32_t pad[5];
    void *self;
} Frame;

void func_0209ce90(uint32_t lo, uint32_t hi, uint32_t step, void (*fn)(uint32_t)) {
    Frame f;
    f.fn = fn;
    f.self = &f;
    if (hi > lo) {
        do {
            hi = hi - step;
            f.fn(hi);
        } while (hi > lo);
    }
}
