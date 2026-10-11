#include "ffc/types.h"

extern void func_02087058(void);
extern void func_01ff9038(void);

typedef struct {
    uint32_t pad[2];
    void (*fn)(void);
    uint32_t count;
} FuncOv000Obj;

void func_ov000_021503a0(FuncOv000Obj *p)
{
    if (p->fn == func_01ff9038) {
        p->count--;
        if (p->count == 0) {
            p->fn = 0;
            func_02087058();
        }
    }
}
