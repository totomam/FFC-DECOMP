#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int v);
extern int data_ov003_0217a3ac[];

typedef struct {
    int x;
    int y;
} W;

typedef struct {
    uint8_t a;
    uint8_t p[3];
    uint8_t b;
} Args;

void *func_ov003_02160768(void *a0, W w, uint8_t a3, Args s)
{
    uint8_t *obj = (uint8_t *)func_0205681c(0x94);
    if (obj == 0) {
        return obj;
    }
    func_02056c9c(obj, 0);
    *(int **)obj = data_ov003_0217a3ac;
    *(void **)(obj + 0x84) = a0;
    *(int *)(obj + 0x88) = w.x;
    *(int *)(obj + 0x8c) = w.y;
    obj[0x90] = a3;
    obj[0x91] = ((Args *)&s)->a;
    obj[0x92] = ((Args *)&s)->b;
    return obj;
}
