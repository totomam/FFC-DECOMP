#include "ffc/types.h"

extern void func_ov000_0214e6c4(void *obj);
extern void func_02087058(void *obj);
extern uint32_t func_02088978(void);
extern void func_ov000_0214ec50(void *obj);
extern void func_ov000_0214ecb8(void *obj);
extern void func_0208898c(uint32_t v);
extern uint8_t *data_ov000_02169a34;

typedef void (*FnT)(void *);

void func_ov000_0214e600(uint8_t *p)
{
    uint32_t r4;
    int8_t x;
    int32_t flag;
    uint8_t *base;
    void *node;
    void *next;

    if (p == 0) {
        return;
    }
    *(uint16_t *)(p + 0xac) = 0;
    x = *(int8_t *)(p + 0xaf);
    flag = 1;
    if (x != 0) {
        if (x != 4) {
            flag = 0;
        }
    }
    if (flag != 0) {
        func_ov000_0214e6c4(*(void **)(p + 0xa4));
        func_ov000_0214e6c4(*(void **)(p + 0xa0));
    } else if (x == 1) {
        node = *(void **)(*(uint8_t **)(p + 0xa0) + 0x104);
        while (node != 0) {
            next = *(void **)node;
            (*(FnT *)(data_ov000_02169a34 + 0x1c))(node);
            node = next;
        }
        *(uint16_t *)(*(uint8_t **)(p + 0xa0) + 0x108) = 0;
        *(uint32_t *)(*(uint8_t **)(p + 0xa0) + 0x100) = 0;
        *(uint32_t *)(*(uint8_t **)(p + 0xa0) + 0x104) = 0;
        func_02087058(*(uint8_t **)(p + 0xa0) + 0x10c);
        func_ov000_0214e6c4(*(void **)(p + 0xa0));
    } else if (x == 2) {
        func_ov000_0214e6c4(*(void **)(p + 0xa4));
    }
    r4 = func_02088978();
    func_ov000_0214ec50(p);
    func_ov000_0214ecb8(p);
    (*(FnT *)(data_ov000_02169a34 + 0x1c))(p);
    func_0208898c(r4);
}
