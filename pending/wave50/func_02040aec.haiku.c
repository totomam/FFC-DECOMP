#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t data_020b93b8;
extern Pair data_020af2c0;

extern uint32_t func_0201ea58(uint32_t v);
extern uint32_t func_0201c9ac(uint32_t v, uint32_t code);
extern uint32_t func_0201eb5c(uint32_t v);
extern void *func_0203f784(void *object, uint32_t code);
extern void func_02056bc0(void *object, void *node);

void func_02040aec(void *obj) {
    uint32_t id;
    void *node;
    Pair tmp;

    id = func_0201ea58(data_020b93b8);
    if (func_0201c9ac(data_020b93b8, 0x1d) == 0) {
        node = func_0203f784(obj, 0x2f);
    } else if (id == 0) {
        node = func_0203f784(obj, 0x21);
    } else if (id == func_0201eb5c(data_020b93b8)) {
        node = func_0203f784(obj, 0x20);
    } else {
        node = func_0203f784(obj, 0x15);
    }

    func_02056bc0((uint8_t *)obj + 0x14, node);

    tmp = data_020af2c0;
    *(Pair *)((uint8_t *)obj + 0x80) = tmp;
}
