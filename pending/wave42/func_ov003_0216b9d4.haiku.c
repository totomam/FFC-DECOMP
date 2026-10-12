#include "ffc/types.h"

extern void *func_0203b688(void *p0);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_021645dc(void *obj, void *p0, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);

void *func_ov003_0216b9d4(void *p0, uint8_t *p1)
{
    void *obj;
    uint32_t c[4];
    uint32_t w2, w3, t;
    uint32_t i;
    uint32_t cnt;

    obj = func_0203b688(p0);
    w3 = ((uint32_t *)(p1 + *(uint32_t *)(p1 + 8)))[3];
    w2 = ((uint32_t *)(p1 + *(uint32_t *)(p1 + 8)))[2];
    cnt = *(uint32_t *)(p1 + 4);

    t = (cnt > 4) ? ((uint32_t *)(p1 + *(uint32_t *)(p1 + 8)))[4] : 0;
    c[2] = t;
    if (cnt > 5) t = ((uint32_t *)(p1 + *(uint32_t *)(p1 + 8)))[5];
    c[3] = t;
    t = (cnt > 6) ? ((uint32_t *)(p1 + *(uint32_t *)(p1 + 8)))[6] : 0;
    c[0] = t;
    if (cnt > 7) t = ((uint32_t *)(p1 + *(uint32_t *)(p1 + 8)))[7];
    c[1] = t;

    for (i = 0; i < 2; i++) {
        void *node;
        uint32_t *arr = (uint32_t *)(p1 + *(uint32_t *)(p1 + 8));
        node = func_0205681c(0x98);
        if (node != 0) {
            node = func_ov003_021645dc(node, p0, (uint16_t)arr[i], (uint16_t)arr[1 - i], 0,
                                       (uint16_t)w2, w3, c[2 + i], c[i]);
        }
        func_02056bc0(obj, node);
    }
    return obj;
}
