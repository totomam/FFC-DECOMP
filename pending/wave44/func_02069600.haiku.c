#include "ffc/types.h"

extern void func_02056bf4(uint32_t a, uint8_t *b);
extern void func_0206a544(void *out, void *list);
extern void func_0202a9ac(void *cursor);

void func_02069600(uint8_t *owner, uint8_t *obj)
{
    uint8_t * volatile base = owner;
    uint32_t tmp[4];
    uint8_t *cursor;

    func_02056bf4(*(uint32_t *)(base + 0x90), obj);
    *(uint32_t *)(obj + 0x80) = 0;
    cursor = *(uint8_t **)(base + 0xac);
    while (cursor != base + 0xa8) {
        if (*(uint8_t **)(cursor + 0xc) == obj || *(uint8_t **)(cursor + 0x14) == obj) {
            func_0206a544(tmp, base + 0xa4);
            cursor = *(uint8_t **)(base + 0xac);
        } else {
            func_0202a9ac(&cursor);
        }
    }
}
