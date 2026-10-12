#include "ffc/types.h"

extern int64_t func_0209a71c(int64_t first, int64_t second);
extern void func_ov003_02151450(void *obj, int32_t arg);
extern void func_ov003_021513ec(void *obj, int32_t x, int32_t y);
extern void func_ov003_02151418(void *obj);
extern void func_ov003_02151434(void *obj);

typedef struct {
    int32_t a1, a2, a3, a4, a5, a6;
} Args6;

void func_ov003_02151788(void *p, Args6 s)
{
    int32_t a2 = s.a2;
    int32_t a4 = s.a4;
    int32_t a6 = s.a6;
    int32_t x, y;
    void *obj;

    if (*(uint32_t *)((uint8_t *)p + 0x80) == 0) {
        obj = *(void **)((uint8_t *)p + 0x88);
        func_ov003_02151434(obj);
        return;
    }

    obj = *(void **)((uint8_t *)p + 0x88);
    func_ov003_02151450(obj, 2);

    x = (int32_t)((func_0209a71c(s.a1, s.a5) + 0x800) >> 12);
    y = (int32_t)((func_0209a71c(a2, a6) + 0x800) >> 12);

    obj = *(void **)((uint8_t *)p + 0x88);
    func_ov003_021513ec(obj, (x >> 12) + s.a3, (y >> 12) + a4);

    obj = *(void **)((uint8_t *)p + 0x88);
    func_ov003_02151418(obj);
}
