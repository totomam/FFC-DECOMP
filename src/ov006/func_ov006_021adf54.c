#include "ffc/types.h"

typedef struct Glob {
    uint8_t state;
    uint8_t pad[3];
    uint8_t *tab;
} Glob;

extern Glob data_ov006_021bc7ac;
extern uint8_t data_ov006_021b877c[];
extern uint8_t data_ov006_021b877e[];

extern int func_ov006_021b1420(void);
extern void func_ov006_021b0600(int);
extern void func_ov006_021b0384(int);
extern int func_ov006_021b3bf8(void *, int);
extern void func_ov006_021b3e20(int, int, int);
extern void func_ov006_021b3cec(void *, int, uint16_t, uint16_t);
extern void func_ov006_021b3d84(void *, int, int);
extern void func_ov006_021b3b9c(void *);
extern void func_ov006_021b13f8(void);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021ae02c(void);

void func_ov006_021adf54(void)
{
    Glob *g = &data_ov006_021bc7ac;
    int k = g->state - 4;
    int s = func_ov006_021b1420();

    if (s != 0) {
        if (s != 1) {
            return;
        }
        int off = k * 4;
        void *obj;
        int h;

        func_ov006_021b0600(0xe);
        func_ov006_021b0384(k);
        obj = *(void **)(g->tab + off + 4);
        h = func_ov006_021b3bf8(obj, 0);
        func_ov006_021b3e20(0, 0x56, h);
        obj = *(void **)(g->tab + off + 4);
        func_ov006_021b3cec(obj, -1, *(uint16_t *)(data_ov006_021b877c + off),
                            *(uint16_t *)(data_ov006_021b877e + off));
        obj = *(void **)(g->tab + off + 4);
        func_ov006_021b3d84(obj, -1, 3);
        obj = *(void **)(g->tab + off + 0x10);
        func_ov006_021b3b9c(obj);
        *(void **)(g->tab + off + 0x10) = 0;
    } else {
        int off = k * 4;
        int off2 = (k + 3) * 4;
        void *obj;
        int h;

        func_ov006_021b0600(7);
        obj = *(void **)(g->tab + off + 0x10);
        h = func_ov006_021b3bf8(obj, 0);
        func_ov006_021b3e20(0, 0x11, h);
        obj = *(void **)(g->tab + off + 0x10);
        func_ov006_021b3cec(obj, -1, *(uint16_t *)(data_ov006_021b877c + off2),
                            *(uint16_t *)(data_ov006_021b877e + off2));
        obj = *(void **)(g->tab + off + 0x10);
        func_ov006_021b3d84(obj, -1, 3);
    }

    func_ov006_021b13f8();
    func_ov006_021a64c8(func_ov006_021ae02c);
}
