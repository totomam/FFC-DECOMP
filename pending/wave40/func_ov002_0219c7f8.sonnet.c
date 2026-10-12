#include "ffc/types.h"

typedef struct { uint8_t f; } F;
extern uint32_t func_ov002_021ae5ec(uint32_t v);
extern void func_0205f0d4(void *arr, uint32_t *pos, uint32_t *key, F flag);
extern void func_02055ae8(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);

void func_ov002_0219c7f8(uint8_t *obj, uint32_t key) {
    uint32_t *p = *(uint32_t **)(obj + 0x10C);
    uint32_t *end = p + *(uint32_t *)(obj + 0x110);
    uint16_t k = (uint16_t)func_ov002_021ae5ec(key);
    F fl[12];

    while (p != end) {
        if ((int)k < (int)(uint16_t)func_ov002_021ae5ec(*p)) {
            break;
        }
        p++;
    }
    fl[0].f = 0;
    func_0205f0d4(obj + 0x10C, p, &key, fl[0]);
    uint32_t t = key;
    if (t != 0) {
        t += 0x80;
    }
    func_02055ae8(obj + 0xe0, t);
    func_02056bc0(obj + 0x48, (void *)key);
}
