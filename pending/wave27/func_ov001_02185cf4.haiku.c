#include "ffc/types.h"

extern void func_ov001_02185b80(void *p, int32_t v);
extern void func_ov001_02185c78(void *p);
extern void func_ov001_02185ccc(void *p);

typedef struct {
    uint8_t pad0[0x10];
    int32_t f10;
    uint8_t pad1[0x8];
    int32_t f1c;
    uint8_t pad2[0x38];
    void (*f58)(void *, int32_t, int32_t, int32_t);
    int32_t f5c;
} Obj;

void func_ov001_02185cf4(Obj *p)
{
    if (p->f10 == 0) {
        return;
    }
    func_ov001_02185b80(p, 0);
    func_ov001_02185c78(p);
    if (p->f1c > 0) {
        func_ov001_02185ccc(p);
    }
    if (p->f10 == 0) {
        p->f58(p, 2, 0, p->f5c);
    }
}
