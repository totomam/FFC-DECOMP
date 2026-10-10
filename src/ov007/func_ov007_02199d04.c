#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);

void func_ov007_02199d04(uint8_t *p) {
    void *a = func_02056aec();
    void *b = func_0203b708(0x1e);
    uint8_t *obj = p + 0x14;
    func_02056bc0(obj, b);
    func_02056bc0(obj, a);
    **(uint32_t **)(p + 0xcc) = 4;
}
