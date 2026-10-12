#include "ffc/types.h"

extern uint8_t data_0213df10[];
extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef void (*VFn)(void *);

typedef struct {
    void *p;
    volatile uint8_t on;
} Guard;

void func_0204ec1c(uint8_t *self) {
    Guard g;
    void **it;
    void **end;

    g.p = (uint8_t *)(*(uint8_t **)(data_0213df10 + 8)) + 0x7c;
    g.on = 1;
    if (g.on) {
        func_0208763c(g.p);
    }
    it = *(void ***)(self + 0xa8);
    end = (void **)((uint32_t)it + (*(uint32_t *)(self + 0xac) << 2));
    while ((uint32_t)it != (uint32_t)end) {
        void *obj = *it;
        VFn *vt = *(VFn **)obj;
        vt[3](obj);
        it++;
        end = (void **)((uint32_t)*(void ***)(self + 0xa8) + (*(uint32_t *)(self + 0xac) << 2));
    }
    if (g.on) {
        func_02087678(g.p);
    }
}
