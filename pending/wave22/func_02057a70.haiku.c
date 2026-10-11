#include "ffc/types.h"

extern char data_020b0cdc[];
extern char data_020b0cf0[];
extern void func_02054738(void *p);
extern void func_0209d06c(void *a, uint32_t b, uint32_t c, void *d);
extern void func_02057658(void);
extern void func_02057934(void *p);

typedef struct {
    void *vt;
    uint8_t pad0[0x14 - 4];
    void *vt2;
    uint8_t pad1[0x20 - 0x18];
    void *m;
} Obj;

void *func_02057a70(void *p) {
    Obj *o = (Obj *)p;
    o->vt = data_020b0cdc;
    o->vt2 = data_020b0cf0;
    func_02054738((char *)p + 0x14);
    func_0209d06c(o->m, 0x2c, 8, (void *)func_02057658);
    func_02057934(p);
    return p;
}
