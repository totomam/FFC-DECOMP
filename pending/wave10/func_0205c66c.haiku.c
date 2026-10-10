#include "ffc/types.h"

extern uint32_t data_0213e110;
extern uint32_t data_020b0e2c;
extern uint32_t data_020ab220;
extern void func_0205bee8(void);
extern void *func_0205681c(uint32_t size);
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);

typedef struct {
    void *ptr;
    uint32_t pad[2];
    uint32_t cap;
} Buf;

void func_0205c66c(Buf *out, uint32_t n) {
    uint32_t flag = data_0213e110;
    if (!(flag & 1)) {
        data_020b0e2c = 0x3ffffffe;
        data_0213e110 = flag | 1;
    }
    if (n > data_020b0e2c) {
        func_0205bee8();
    }
    void *p = func_0205681c((n + 1) << 2);
    if (p == 0) {
        func_02091a24(&data_020ab220);
        func_0208f42c();
    }
    out->ptr = p;
    out->cap = n + 1;
}
