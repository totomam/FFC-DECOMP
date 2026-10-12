#include "ffc/types.h"

typedef struct Ent {
    struct Ent *next;
    uint32_t pad[5];
} Ent;

typedef struct Ctl {
    Ent *head;
    uint32_t f4;
    void *f8;
    uint32_t fc;
    void *f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
} Ctl;

extern void func_0208a250(void);
extern void func_0208a3b4(void);
extern Ctl *func_02089fa8(int x);
extern void func_0208a008(void);
extern void func_0208a030(int x);
extern Ent data_02141c80[];
extern Ctl data_021419a4;
extern uint32_t data_02143400[];
extern uint8_t data_02143468[];
extern uint8_t data_02141a00[];
extern void *data_021434e0;

void func_02089e84(void)
{
    uint32_t i;
    Ctl *c;

    func_0208a250();
    data_021419a4.head = data_02141c80;
    for (i = 0; i < 0xff; i++) {
        data_02141c80[i].next = &data_02141c80[i + 1];
    }
    data_02143400[0x68 / 4] = 0;
    data_021419a4.f10 = data_02143468;
    data_021419a4.f8 = 0;
    data_021419a4.fc = 0;
    data_021419a4.f1c = 0;
    data_021419a4.f14 = 0;
    data_021419a4.f18 = 0;
    data_021419a4.f20 = 1;
    data_021419a4.f4 = 0;
    data_021434e0 = data_02141a00;
    func_0208a3b4();
    c = func_02089fa8(1);
    if (c != 0) {
        c->f4 = 0x1d;
        c->f8 = data_021434e0;
        func_0208a008();
        func_0208a030(1);
    }
}
