#include "ffc/types.h"

extern uint32_t data_02140e00[];
extern uint32_t data_02140cc0[];
extern void func_0207d754(void);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_0208658c(uint32_t, void (*)(void));
extern void func_02086724(uint32_t);
extern void func_020866dc(uint32_t);
extern void func_0207d524(uint32_t);

typedef struct {
    uint32_t (*fn)(uint32_t, uint32_t, uint32_t, uint32_t);
} Ops;

typedef struct {
    uint32_t pad[2];
    uint32_t v8;
    Ops *ops;
} Cfg;

typedef struct {
    uint32_t pad[3];
    uint32_t f0c;
    uint32_t f10;
} Obj;

void func_0207d7b8(Obj *a)
{
    uint32_t r4;
    uint32_t r6 = 2 << 18;
    Cfg *cfg;

    r4 = func_02088978();
    *(Obj **)((uint8_t *)data_02140e00 + 0xc) = a;
    func_0208658c(r6, func_0207d754);
    func_02086724(r6);
    func_020866dc(r6);
    func_0208898c(r4);
    cfg = (Cfg *)data_02140cc0;
    cfg->ops->fn(cfg->v8, 0x4100010, a->f10, r6 >> 10);
    func_0207d524(a->f0c);
}
