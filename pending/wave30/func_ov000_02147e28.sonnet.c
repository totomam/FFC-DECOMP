#include "ffc/types.h"

extern uint32_t func_ov000_02147da8();
extern void func_020850f4();
extern uint32_t data_02141510[];

typedef struct {
    uint8_t pad[0x68];
    uint8_t *buf;
    uint32_t size;
} Ring;

typedef struct {
    uint8_t pad[0xa4];
    Ring *ring;
} Ctx;

uint32_t func_ov000_02147e28(uint32_t a, uint32_t b) {
    Ctx *c = (Ctx *)data_02141510[1];
    Ring *r = c->ring;
    uint32_t n;
    if (r) {
        if (r->size) {
            n = func_ov000_02147da8(r->buf, r->size, a, b);
            if (n < r->size) {
                func_020850f4(r->buf + n, r->buf, r->size - n);
                r->size -= n;
                return 0;
            }
            {
                uint32_t s = r->size;
                n -= s;
                r->size = 0;
                return n;
            }
        }
        return func_ov000_02147da8(a, b, 0, 0);
    }
    return 0;
}
