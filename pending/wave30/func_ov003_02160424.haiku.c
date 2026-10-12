#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov003_021601b4(void *self);
extern void func_02056c4c(void *obj);
extern void *func_ov003_021603c4(void *self, Pair v, int zero, void *arg);
extern void *func_0203b708(uint32_t size);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_0217a404;

void func_ov003_02160424(void *self, void *arg, int flag)
{
    void *node;
    void *obj;
    void *inner;

    func_ov003_021601b4(self);
    if (flag != 0) {
        func_02056c4c(*(void **)((uint8_t *)self + 0xd8));
    }
    node = func_ov003_021603c4(self, data_ov003_0217a404, 0, arg);
    obj = func_0203b708(0x70);
    inner = *(void **)((uint8_t *)self + 0xd8);
    func_02056bc0(inner, obj);
    func_02056bc0(inner, node);
}
