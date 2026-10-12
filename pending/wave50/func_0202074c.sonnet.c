#include "ffc/types.h"

typedef struct { int32_t x0, y0, x1, y1; } Rect;
typedef struct { int32_t a1, a2; Rect r; } Args;

extern uint16_t *func_0205daac(void *p);
extern void func_0205a028(void *obj, Rect r, uint32_t v, uint32_t w, uint32_t z, uint32_t y);

void func_0202074c(void *self, Args a)
{
    if (a.r.x0 > a.r.x1) return;
    if (a.r.y0 > a.r.y1) return;
    {
        uint32_t r5 = *(uint32_t *)(*(uint32_t *)((uint8_t *)self + 0x28) + 0x18);
        uint16_t *arr = func_0205daac((uint8_t *)self + 0x30);
        uint32_t v = r5 + arr[a.a1 + a.a2 * *(uint32_t *)((uint8_t *)self + 0x70)];
        uint32_t w = *(uint32_t *)(*(uint32_t *)((uint8_t *)self + 0x2c) + 0x18);
        func_0205a028(*(void **)((uint8_t *)self + 0x20), a.r, v, w, 0, 0);
    }
}
