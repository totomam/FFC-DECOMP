#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
} Vec3;

extern Vec3 *func_02023ecc(void *obj);
extern void func_02023e9c(void *obj, Vec3 *v);

void func_ov003_0215c25c(uint8_t *self, int32_t *vec)
{
    Vec3 v;
    void *obj;
    Vec3 *src;

    obj = *(void **)(self + 0xa0);
    if (obj == 0) {
        return;
    }
    {
        void *inner = *(void **)((uint8_t *)obj + 0x34);
        if (inner == 0) {
            return;
        }
        src = func_02023ecc(inner);
        v = *src;
        v.x = -vec[0];
        v.y = -vec[1];
        func_02023e9c(inner, &v);
    }
}
