#include "ffc/types.h"

extern void *func_0203b688(void *a);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02165d80(void *node, void *a, uint16_t v, int flag);
extern void *func_ov003_02165e08(void *node, void *a, uint16_t v, int flag);
extern void func_02056bc0(void *object, void *node);

void *func_ov003_0216bf0c(void *a, void *b)
{
    uint8_t *bp = (uint8_t *)b;
    void *obj = func_0203b688(a);
    void *n = func_0205681c(0x1c);
    if (n != 0) {
        uint16_t v = (uint16_t)*(uint32_t *)(bp + *(uint32_t *)(bp + 8));
        n = func_ov003_02165d80(n, a, v, 0);
    }
    void *m = func_0205681c(0x1c);
    if (m != 0) {
        uint16_t v = (uint16_t)*(uint32_t *)(bp + *(uint32_t *)(bp + 8));
        m = func_ov003_02165e08(m, a, v, 1);
    }
    func_02056bc0(obj, m);
    func_02056bc0(obj, n);
    return obj;
}
