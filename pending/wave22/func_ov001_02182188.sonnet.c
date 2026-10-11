#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x18];
    int32_t field18;
} Obj;

extern void func_ov001_021807e8();
extern int32_t func_ov001_0217fe8c(Obj *p);
extern void func_ov001_02181ddc(Obj *p);

void func_ov001_02182188(Obj *p) {
    if (p->field18 == 0) {
        p->field18 = 1;
        func_ov001_021807e8();
        if (func_ov001_0217fe8c(p)) {
            func_ov001_02181ddc(p);
        }
    }
}
