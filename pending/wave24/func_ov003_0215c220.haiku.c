#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
} Vec3;

typedef struct {
    uint32_t pad[4];
    Vec3 t;
} Frame;

extern Vec3 *func_02023ecc(void);

void func_ov003_0215c220(int32_t *p, uint8_t *q)
{
    Frame f;
    uint8_t *obj;

    p[0] = 0;
    p[1] = 0;
    obj = *(uint8_t **)(q + 0xa0);
    if (obj != 0) {
        if (*(uint8_t **)(obj + 0x34) != 0) {
            f.t = *func_02023ecc();
            p[0] = -f.t.a;
            p[1] = -f.t.b;
        }
    }
}
