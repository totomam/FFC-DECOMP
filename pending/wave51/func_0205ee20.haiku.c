#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t d;
} Quad;

extern void func_0205ecc8(void *p, Quad v);
extern void *func_0205681c(uint32_t size);
extern void *func_0205e978(void *obj, Quad q, int32_t e, int32_t f, uint8_t g, uint8_t h);
extern void func_0205ec84(void *p, void *obj);

void func_0205ee20(void *p, Quad q, int32_t e, int32_t f, uint8_t g, uint8_t h)
{
    Quad s = q;
    Quad v;
    void *obj;
    v.a = s.c;
    v.b = s.d;
    v.c = s.a + s.c;
    v.d = s.b + s.d;
    func_0205ecc8(p, v);
    obj = func_0205681c(0x30);
    if (obj) {
        obj = func_0205e978(obj, s, e, f, g, h);
    }
    func_0205ec84(p, obj);
}
