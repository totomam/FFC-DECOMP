#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02058188(void *a, void *b);

typedef struct {
    void *p;
    volatile uint8_t f;
} Guard;

typedef struct {
    uint8_t pad[0x20];
    int32_t cnt;
} Obj;

void func_0205fd04(uint8_t *a, Obj *b) {
    Guard g;

    g.p = a + 0x20;
    g.f = 1;
    if (g.f) {
        func_0208763c(g.p);
    }
    if (--b->cnt != 0) {
        if (g.f) {
            func_02087678(g.p);
        }
        return;
    }
    func_02058188(a, b);
    if (g.f) {
        func_02087678(g.p);
    }
}
