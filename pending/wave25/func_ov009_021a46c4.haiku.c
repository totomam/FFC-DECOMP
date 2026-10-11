#include "ffc/types.h"

extern void func_02035f58(void *buf);
extern void func_0201f600(void *a, void *b, void *c, void *d);
extern void func_ov009_021a4590(void *a, void *b, void *c);
extern void *func_02035fd0(void *object);
extern void *data_020b93b8;

void func_ov009_021a46c4(void *obj, void *param)
{
    uint8_t buf[0x60];

    func_02035f58(buf);
    func_0201f600(data_020b93b8, param, (uint8_t *)obj + 0x220, buf);
    func_ov009_021a4590(obj, param, buf);
    func_02035fd0(buf);
}
