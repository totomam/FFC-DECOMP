#include "ffc/types.h"

extern int32_t func_0209831c(void *p, uint32_t v);

typedef struct {
    uint8_t pad[0x24];
    uint16_t h24;
    uint8_t f26;
    uint8_t f27;
    uint8_t f28;
} S;

uint32_t func_02098188(S *p, uint32_t arg) {
    if (p->f26) {
        if (p->f27) {
            if (arg == 0xffff) return arg;
            if (func_0209831c(p, p->h24) < 0) return 0xffff;
            p->h24 = arg;
            p->f28 = 1;
            goto tail;
        }
        if (arg != 0xffff) {
            p->h24 = arg;
            p->f28 = 1;
        } else if (!p->f28) {
            return 0xffff;
        }
        p->f27 = 1;
    } else {
        if (arg == 0xffff) return arg;
        if (func_0209831c(p, arg) < 0) return 0xffff;
    }
tail:
    if (arg == 0xffff) arg = 0xffff0000;
    return (uint16_t)arg;
}
