#include "ffc/types.h"
typedef struct { int32_t x, y; } V2;
typedef struct { V2 a; V2 b; } Q;
extern void func_0205ecc8(void *p, Q q);
extern void *func_0205681c(uint32_t size);
extern void *func_0205e978(void *obj, V2 pos, V2 size, int32_t e, int32_t f, uint8_t g, uint8_t h);
extern void func_0205ec84(void *p, void *obj);

void func_0205ee20(void *p, V2 pos, V2 size, int32_t e, int32_t f, uint8_t g, uint8_t h)
{
    Q r;
    V2 end;
    Q q;
    void *obj;
    end.x = size.x + pos.x;
    end.y = size.y + pos.y;
    r.a = end;
    q.b = r.a;
    r.b = size;
    q.a = r.b;
    func_0205ecc8(p, q);
    obj = func_0205681c(0x30);
    if (obj) {
        obj = func_0205e978(obj, pos, size, e, f, g, h);
    }
    func_0205ec84(p, obj);
}
