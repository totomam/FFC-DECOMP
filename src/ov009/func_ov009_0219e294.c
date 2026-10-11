#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern void *func_0203b688(void *p);
extern void *func_02056b10(void *owner);
extern void *func_ov009_0219e2d4(void *p, S s, int c);
extern void func_02056bc0(void *object, void *node);
extern S data_ov009_021b0050;

void *func_ov009_0219e294(void *p)
{
    void *obj = func_0203b688(p);
    void *node = func_02056b10((uint8_t *)p + 0x14);
    void *n2 = func_ov009_0219e2d4(p, data_ov009_021b0050, 1);
    func_02056bc0(obj, n2);
    func_02056bc0(obj, node);
    return obj;
}
