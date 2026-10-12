#include "ffc/types.h"

typedef struct G {
    uint8_t a;
    uint8_t pad;
    uint16_t b;
    uint8_t *p;
} G;

extern G data_ov006_021bc778;
extern int func_ov006_021a3744(void);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021a9ea0(void);
extern int func_0208130c(int x, int y);
extern void func_ov006_021af680(void);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021b11fc(int a, int b, int c, int d, int e);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021a9ec0(void);
extern void func_ov006_021a9814(void);

void func_ov006_021a9760(void)
{
    G *g = &data_ov006_021bc778;
    uint8_t *p = g->p;
    int s;
    int idx;
    int code;

    if (*(int32_t *)(p + 0x38) != 0) {
        return;
    }
    if (p[0x57] != 0) {
        return;
    }
    s = func_ov006_021a3744();
    if (s == 0) {
        goto L26;
    }
    if (s == 1) {
        goto L2a;
    }
    return;
L26:
    code = 7;
    goto L98;
L2a:
    if (g->a == 4) {
        g->p[0x54] = 1;
        func_ov006_021b0600(6);
        func_ov006_021a9ea0();
        goto L9c;
    }
    idx = g->a + func_0208130c(g->b, 0x1c);
    if (*(uint8_t *)(*(uint8_t **)g->p + idx * 0x2a + 0x28) == 2) {
        func_ov006_021b0600(9);
        func_ov006_021af680();
        func_ov006_021a37a8();
        func_ov006_021b11fc(0xe, 1, 1, -1, 0);
        func_ov006_021a64c8(func_ov006_021a9ec0);
        return;
    }
    g->p[0x54] = 1;
    g->p[0x52] = (uint8_t)idx;
    code = 6;
L98:
    func_ov006_021b0600(code);
L9c:
    func_ov006_021a64c8(func_ov006_021a9814);
}
