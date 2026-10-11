#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0203b6fc(void);
extern void *func_ov009_021adba4(void *p, Pair s, int c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov009_021b0c78;

void *func_ov009_021adb7c(void *param)
{
    void *obj = func_0203b6fc();
    void *node = func_ov009_021adba4(param, data_ov009_021b0c78, 1);
    func_02056bc0(obj, node);
    return obj;
}
