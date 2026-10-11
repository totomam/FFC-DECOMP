#include "ffc/types.h"

extern uint32_t func_ov000_0216591c(void *req);
extern uint32_t func_ov000_02168768(void *h);
extern void func_ov000_02168784(void *h, void *req);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint16_t c;
    uint32_t d;
} Req;

int func_ov001_021815d8(uint8_t *p, uint16_t c, uint32_t b) {
    Req r = {0};
    int ret = 0;
    uint32_t h;

    r.a = *(uint32_t *)(p + 0x58);
    r.b = b;
    r.c = c;
    r.d = func_ov000_0216591c(&r);

    h = func_ov000_02168768(*(void **)(p + 0x60));
    func_ov000_02168784(*(void **)(p + 0x60), &r);
    if (h + 1 == func_ov000_02168768(*(void **)(p + 0x60))) {
        ret = 1;
    }
    return ret;
}
