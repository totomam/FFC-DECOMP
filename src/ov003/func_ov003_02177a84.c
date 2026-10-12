#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_0203b7c0(void *object, uint32_t x);
extern uint8_t data_ov003_0217bd50[];

typedef struct {
    uint8_t pad[0xf0];
    uint32_t count;
    struct {
        uint32_t key;
        uint32_t val;
    } e[];
} Obj;

void func_ov003_02177a84(Obj *self, uint32_t key)
{
    uint32_t i;
    uint8_t buf[0x44];

    for (i = 0; i < self->count; i++) {
        if (self->e[i].key == key) {
            return;
        }
    }

    func_02091b10(buf, (uint32_t)data_ov003_0217bd50, key);
    self->e[self->count].val = func_0203b7c0(buf, 0);
    self->e[self->count].key = key;
    self->count = self->count + 1;
}
