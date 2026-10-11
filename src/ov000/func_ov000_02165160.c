#include "ffc/types.h"

extern void *func_ov000_02164ed0(void *p);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
} S;

uint32_t func_ov000_02165160(void *p) {
    S *s = (S *)func_ov000_02164ed0(p);
    if (s->fc != 0) {
        return 1;
    }
    if (s->f0 == 0) {
        return 2;
    }
    return 0;
}
