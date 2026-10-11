#include "ffc/types.h"

extern void func_02056858(void);
extern void func_02056db0(void *p);
extern uint32_t data_ov007_021c3c90;

typedef struct {
    uint32_t vtbl;
    uint8_t pad[0x88];
    uint32_t field_8c;
} Obj;

void *func_ov007_021a23fc(void *p0)
{
    Obj *p = (Obj *)p0;
    p->vtbl = (uint32_t)&data_ov007_021c3c90;
    if (p->field_8c != 0 && p->field_8c != 0) {
        func_02056858();
        p->field_8c = 0;
    }
    func_02056db0(p);
    return p;
}
