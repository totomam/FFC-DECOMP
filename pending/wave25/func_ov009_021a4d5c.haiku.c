#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} PairRet;

extern void func_02035f58(void *object);
extern void func_ov009_021ad6ac(void *p0, void *p1, void *obj);
extern void func_ov009_021ad660(PairRet *ret, void *p0, void *p1);
extern void func_ov009_021a4cc8(void *p0, void *obj, PairRet v);
extern void *func_02035fd0(void *object);

void func_ov009_021a4d5c(void *param0, void *param1)
{
    PairRet tmp;
    uint8_t obj[0x60];

    func_02035f58(obj);
    func_ov009_021ad6ac(param0, param1, obj);
    func_ov009_021ad660(&tmp, param0, param1);
    func_ov009_021a4cc8(param0, obj, tmp);
    func_02035fd0(obj);
}
