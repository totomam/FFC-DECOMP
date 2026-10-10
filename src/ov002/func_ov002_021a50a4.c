#include "ffc/types.h"

extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern uint8_t data_ov002_021d522c[];

typedef struct {
    uint8_t *base;
    uint32_t count;
} Tbl;

void *func_ov002_021a50a4(Tbl *t, uint32_t idx) {
    if (idx >= t->count) {
        func_02091a24(data_ov002_021d522c);
        func_0208f42c();
    }
    return t->base + idx * 12;
}
