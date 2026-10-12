#include "ffc/types.h"

extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void func_02056db0(void *p);
extern char data_ov012_021d4708[];

typedef struct {
    void *vt;
    char pad[0x118 - 4];
    void *slot[2];
} Obj;

Obj *func_ov012_021d2db4(Obj *p)
{
    uint32_t i;
    void *x;

    p->vt = data_ov012_021d4708;
    for (i = 0; i < 2; i++) {
        x = *(void **)((char *)p + 0x118 + (i << 2));
        if (x) {
            if (x) {
                func_0205d620(x);
                func_02056844(x);
            }
            *(void **)((char *)(p) + (i << 2) + 0x118) = 0;
        }
    }
    func_02056db0(p);
    return p;
}
