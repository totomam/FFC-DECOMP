#include "ffc/types.h"

typedef struct {
    uint8_t pad[0xc];
    int32_t state;
} FuncObj;

extern void func_ov001_0218054c(void);
extern void func_ov001_02181b2c(void *p);
extern void func_ov001_02180004(void *p, int32_t v);
extern void func_ov001_02181f60(void *p);
extern void func_ov001_021818f8(void *p);

void func_ov001_02180518(void *p, int32_t x) {
    FuncObj *o = (FuncObj *)p;
    if (x != 0) {
        if (o->state < 7) {
            func_ov001_0218054c();
            func_ov001_02181b2c(p);
            func_ov001_02180004(p, 0);
            func_ov001_02181f60(p);
        }
    } else {
        o->state = 6;
        func_ov001_021818f8(p);
    }
}
