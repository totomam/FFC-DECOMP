#include "ffc/types.h"

extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036d34(const void *object);

typedef struct {
    uint8_t flag;
    uint8_t pad[0x13];
    uint8_t obj[0x2c - 0x14];
} Ent;

typedef struct {
    uint8_t pad[0x68];
    uint8_t *list;
} Owner;

uint32_t func_0201fca8(Owner *p, const void *q, uint32_t c, uint32_t a, uint32_t n) {
    uint32_t i;
    uint32_t cnt;
    uint32_t off;

    if (c) {
        for (i = 0; i < 20; i++) {
            off = i * 0x2c;
            if (p->list[off]) {
                if (func_02036cd8(p->list + off + 0x14) == func_02036cd8(q)) {
                    return 0;
                }
            }
        }
    }
    if (a) {
        cnt = 0;
        for (i = 0; i < 20; i++) {
            off = i * 0x2c;
            if (p->list[off]) {
                if (func_02036d34(p->list + off + 0x14)) {
                    cnt++;
                }
            }
            if (cnt >= n) {
                return 0;
            }
        }
    }
    return 1;
}
