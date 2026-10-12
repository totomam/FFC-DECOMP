#include "ffc/types.h"

typedef struct { uint8_t v; } Flag;

extern void func_0208763c(void *self, void *other);
extern void *func_020487a0(void *container, void *position, Flag f);
extern void func_02087678(void *p);

void func_02055b88(uint8_t *a, uint8_t *b)
{
    uint32_t *it;
    uint32_t *end;
    uint32_t go;
    Flag f;

    f.v = 0;
    func_0208763c(a + 0x10, b);

    it = *(uint32_t **)(a + 4);
    end = it + *(uint32_t *)(a + 8);
    go = 1;
    while (go) {
        it++;
        go = 0;
        if (it != end) {
            if (*it != (uint32_t)b) {
                go = 1;
            }
        }
    }
    func_020487a0(a + 4, it, f);

    it = *(uint32_t **)(b + 0x10);
    end = it + *(uint32_t *)(b + 0x14);
    go = 1;
    while (go) {
        it++;
        go = 0;
        if (it != end) {
            if (*it != (uint32_t)a) {
                go = 1;
            }
        }
    }
    func_020487a0(b + 0x10, it, f);

    func_02087678(a + 0x10);
}
