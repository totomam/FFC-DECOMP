#include "ffc/types.h"

typedef struct {
    void *ptr;
    uint8_t pad[18];
    uint8_t b16;
} Slot;

extern uint8_t *func_ov000_02163350(void);
extern uint32_t func_ov000_0216376c(void);
extern void func_ov000_02163488(void *p);
extern void func_ov000_02163758(void);
extern uint32_t func_ov000_02163408(void);
extern void func_ov000_02163414(void *p);
extern void *func_ov000_02163654(void *p);
extern void func_ov000_0215b900(uint8_t x);
extern void *func_ov000_02163690(uint8_t x);

void func_ov000_02160818(void) {
    uint8_t *obj = func_ov000_02163350();
    Slot *s;
    if (obj[0x14] == 2) {
        if (func_ov000_0216376c() == 0) return;
        func_ov000_02163488(func_ov000_02163350() + 0x554);
        func_ov000_02163758();
        return;
    }
    if (func_ov000_02163408() == 1) {
        func_ov000_02163414(func_ov000_02163350() + 0x554);
        func_ov000_02163758();
        return;
    }
    s = (Slot *)(func_ov000_02163350() + 0x57c);
    if (s->ptr == 0) return;
    {
        uint8_t *g = func_ov000_02163654(s->ptr);
        if (g != 0) func_ov000_0215b900(g[0x16]);
    }
    {
        uint8_t *x = func_ov000_02163690(s->b16);
        if (x != 0) func_ov000_0215b900(x[0x16]);
    }
    func_ov000_02163488(s);
    s->ptr = 0;
}
