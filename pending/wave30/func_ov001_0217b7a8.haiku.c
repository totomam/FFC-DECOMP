#include "ffc/types.h"

extern void func_ov000_02165474(void *p, int v);
extern void func_ov000_02165428(void *p);
extern void func_ov000_021653f4(void *p);

void func_ov001_0217b7a8(void *mgr_pp, uint32_t *obj)
{
    uint32_t *mgr = *(uint32_t **)mgr_pp;
    if (obj[0] == 3) {
        uint32_t *node = (uint32_t *)obj[1];
        mgr[0x8e] = mgr[0x8e] - 1;
        func_ov000_02165474((void *)node[1], 2);
        func_ov000_02165428((void *)node[1]);
        func_ov000_021653f4((void *)node[6]);
        node[6] = 0;
        func_ov000_021653f4((void *)node[2]);
        node[2] = 0;
    }
    func_ov000_021653f4((void *)obj[1]);
    obj[1] = 0;
    func_ov000_021653f4(obj);
}
