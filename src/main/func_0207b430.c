#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Iter;

typedef struct {
    uint8_t type;
    uint8_t pad;
    uint16_t u;
    uint16_t v;
    uint32_t extra;
} Ent;

extern int func_0208a554(Iter *out, void *p, uint32_t x, uint32_t y);
extern int func_0208a564(void *p, Ent *e, Iter *it);
extern int func_0207b3a0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

int func_0207b430(uint32_t a0, void *a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    Ent e;
    Iter it;
    Iter out;

    func_0208a554(&out, a1, a2, a3);
    it = out;
    if (a1 == 0) {
        return 0;
    }
    while (func_0208a564(a1, &e, &it) != 0) {
        if (e.type == 1 && a2 == e.v) {
            if (func_0207b3a0(a0, e.u, a3, a4) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
