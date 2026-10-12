#include "ffc/types.h"

extern void func_02056bf4(uint32_t a, uint8_t *b);
extern void func_0206a544(void *out, void *list);
extern void func_0202a9ac(void *cursor);

void func_02069600(uint8_t *owner, uint8_t *obj)
{
    struct { uint8_t * volatile base; uint32_t tmp[4]; uint8_t *cursor; } s;
    s.base = owner;

    func_02056bf4(*(uint32_t *)(owner + 0x90), obj);
    uint8_t *list = s.base + 0xa4;
    uint8_t *end = s.base + 0xa8;
    *(uint32_t *)(obj + 0x80) = 0;
    for (;;) {
        s.cursor = *(uint8_t **)(s.base + 0xac);
        if (s.cursor == end) break;
        do {
            if (*(uint8_t **)(s.cursor + 0xc) == obj || *(uint8_t **)(s.cursor + 0x14) == obj) {
                func_0206a544(s.tmp, list);
                break;
            }
            func_0202a9ac(&s.cursor);
        } while (s.cursor != end);
    }
}
