#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_020553c4(void *a);
extern void func_02055914(void *elem, void *a);
extern void func_020553e8(void *a);
extern void func_02087678(void *p);

typedef struct {
    void *guard;
    volatile uint8_t active;
} Guard;

void func_02055c20(uint8_t *s, void *a)
{
    Guard g;
    uint32_t *elem;

    g.guard = s + 0x10;
    g.active = 1;
    if (g.active != 0) {
        func_0208763c();
    }
    func_020553c4(a);
    elem = *(uint32_t **)(s + 4);
    if (elem != (uint32_t *)(*(uint32_t *)(s + 4) + (*(uint32_t *)(s + 8) << 2))) {
        do {
            func_02055914((void *)*elem, a);
            elem++;
        } while (elem != (uint32_t *)(*(uint32_t *)(s + 4) + (*(uint32_t *)(s + 8) << 2)));
    }
    func_020553e8(a);
    if (g.active != 0) {
        func_02087678(g.guard);
    }
}
