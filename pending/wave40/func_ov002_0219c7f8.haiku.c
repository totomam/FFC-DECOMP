#include "ffc/types.h"

extern uint32_t func_ov002_021ae5ec(uint32_t v);
extern void func_0205f0d4(void *arr, uint32_t *pos, uint32_t *key, uint8_t flag);
extern void func_02055ae8(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);

void func_ov002_0219c7f8(uint8_t *obj, uint32_t key, uint32_t a, uint32_t b) {
    uint32_t *p = *(uint32_t **)(obj + 0x10C);
    uint32_t *end = p + *(uint32_t *)(obj + 0x110);
    uint16_t k = (uint16_t)func_ov002_021ae5ec(key);
    uint8_t buf[12];
    uint8_t *pf = buf;

    while (p != end) {
        if ((int)k < (int)(uint16_t)func_ov002_021ae5ec(*p)) {
            break;
        }
        p++;
    }

    *pf = 0;
    func_0205f0d4(obj + 0x10C, p, &key, *pf);
    if (key != 0) {
        key += 0x80;
    }
    func_02055ae8(obj + 0xe0, key);
    func_02056bc0(obj + 0x48, key);
}
