#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02035f58(void *p);
extern void func_0201f600(void *a, uint32_t b, void *c, void *d);
extern void func_ov009_021a4cc8(void *obj, void *buf, Pair v);
extern void *func_02035fd0(void *object);
extern void *data_020b93b8;
extern Pair data_ov009_021b093c[];

void func_ov009_021a4d18(uint8_t *a, uint32_t idx)
{
    uint8_t buf[0x60];

    func_02035f58(buf);
    func_0201f600(data_020b93b8, idx, a + 0x220, buf);
    func_ov009_021a4cc8(a, buf, data_ov009_021b093c[idx]);
    func_02035fd0(buf);
}
