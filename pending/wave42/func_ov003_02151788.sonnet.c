#include "ffc/types.h"
extern int64_t func_0209a71c(int64_t first, int64_t second);
extern void func_ov003_02151450(void *obj, int32_t arg);
typedef struct { int32_t x, y; } V;
typedef struct { int32_t a1, a2, a3, a4, a5, a6; } Args6;
extern void func_ov003_021513ec(void *obj, V v);
extern void func_ov003_02151418(void *obj);
extern void func_ov003_02151434(void *obj);
void func_ov003_02151788(void *p, Args6 s, ...)
{
    int32_t a4 = s.a4;
    int32_t a2 = s.a2;
    int32_t a6 = s.a6;
    V v, w, t;
    if (*(uint32_t *)((uint8_t *)p + 0x80) != 0) {
    func_ov003_02151450(*(void **)((uint8_t *)p + 0x88), 2);
    w.x = (int32_t)((func_0209a71c(s.a1, s.a5) + 0x800) >> 12);
    w.y = (int32_t)((func_0209a71c(a2, a6) + 0x800) >> 12);
    t = w;
    v.x = (t.x >> 12) + s.a3;
    v.y = (t.y >> 12) + a4;
    func_ov003_021513ec(*(void **)((uint8_t *)p + 0x88), v);
    func_ov003_02151418(*(void **)((uint8_t *)p + 0x88));
    } else {
        func_ov003_02151434(*(void **)((uint8_t *)p + 0x88));
    }
}
