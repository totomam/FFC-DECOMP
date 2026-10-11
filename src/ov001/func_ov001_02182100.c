#include "ffc/types.h"

typedef struct {
    uint32_t pad0[3];
    uint32_t state;
    uint32_t pad1;
    uint32_t f14;
    uint32_t pad2[3];
    uint32_t f24;
} FfcObj;

extern int32_t func_ov001_021804d0(FfcObj *o, void *arg);
extern void func_ov001_02181f60(FfcObj *o);

int32_t func_ov001_02182100(FfcObj **pp, void **qq)
{
    FfcObj *o = *pp;
    void *arg = *qq;
    if (o->state != 7) {
        if (func_ov001_021804d0(o, arg) == 0) {
            return 0;
        }
    }
    if (o->state == 7 && o->f14 == 0 && o->f24 == 0) {
        func_ov001_02181f60(o);
    }
    return 1;
}
