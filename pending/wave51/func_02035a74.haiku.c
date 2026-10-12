#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t index;
    uint8_t flag;
} FuncLoc;

extern void func_02035898(FuncLoc *loc);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void func_02053290(void *object);
extern uint32_t data_0213955c[];
extern uint32_t data_02139508[];

uint32_t func_02035a74(uint32_t p0, uint32_t idx, uint32_t val, uint32_t *acc, uint32_t *prev_out)
{
    FuncLoc loc;
    FuncLoc *lp;
    uint32_t sel;
    uint8_t *obj;
    uint32_t v;

    *prev_out = *acc;
    *acc = *acc + data_0213955c[idx];
    if (*acc > val) {
        if (data_02139508[idx] == 0) {
            return 0;
        }
        if ((int32_t)val < (int32_t)*prev_out) {
            return 0;
        }
        lp = &loc;
        func_02035898(lp);
        sel = val - *prev_out;
        obj = (uint8_t *)func_02052d90(lp->mar, lp->index);
        v = *(uint32_t *)(obj + *(uint32_t *)(obj + 8) + (sel << 2));
        if (lp->mar != 0) {
            if (lp->flag != 0) {
                func_02052d3c(lp->mar, lp->index);
            }
            func_02052c04(lp->mar);
        }
        func_02053290(lp);
        return (uint32_t)obj + v;
    }
    return 0;
}
