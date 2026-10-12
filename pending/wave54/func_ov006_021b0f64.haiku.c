#include "ffc/types.h"

extern void func_02087874(uint8_t *p, uint32_t n);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_02084ca4(uint8_t *dst, const uint8_t *src, uint32_t length);
extern uint8_t data_ov006_021b899e[];
extern uint8_t data_ov006_021b8998[];
extern uint8_t *data_ov006_021bc7f4;

typedef struct {
    uint8_t pad[0xe];
    uint16_t count;
    uint8_t *items[];
} Obj;

void func_ov006_021b0f64(Obj *p)
{
    int i;
    int j;
    int off;
    uint8_t *g;
    uint8_t *item;
    void (*fn)(int);

    for (i = 0; i < p->count; i++) {
        item = p->items[i];
        func_02087874(item, 0xc0);
        if (func_02090410(item + 0xc, data_ov006_021b899e, 8) != 0) {
            continue;
        }
        g = data_ov006_021bc7f4;
        for (j = 0; j < 16; j++) {
            off = j * 7;
            if (func_02090410(item + 4, g + 0x1300 + off, 6) == 0) {
                if (g[0x1306 + off] != 0) {
                    goto next;
                }
                if (!(item[0x15] & 1)) {
                    goto next;
                }
                fn = *(void (**)(int))(g + 0x1370);
                if (fn != 0) {
                    fn(1);
                    return;
                }
                goto done;
            }
        }
        for (j = 0; j < 16; j++) {
            off = j * 7;
            if (func_02090410(g + 0x1300 + off, data_ov006_021b8998, 6) == 0) {
                func_02084ca4(item + 4, g + 0x1300 + off, 6);
                g = data_ov006_021bc7f4;
                g[0x1306 + off] = (item[0x15] & 1) ? 1 : 0;
                goto next;
            }
        }
next:
        ;
    }
done:
    ;
}
