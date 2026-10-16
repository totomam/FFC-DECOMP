#include "ffc/types.h"
typedef struct { uint16_t a, b, c; } T3;
typedef struct { uint16_t f0, f2; T3 t; uint16_t fa; } S;
typedef struct { void *p; uint8_t pad[4]; uint8_t b[12]; } G;
extern void func_ov006_021b4624(void *, int);
extern void func_ov006_021b45b0(void *, int, int, int, int, int, int, void *);
extern void func_ov006_021b4690(void *);
extern T3 data_ov006_021b8638;
extern G *data_ov006_021bc784;
extern uint8_t data_ov006_021b8624[];
void func_ov006_021aab88(void) {
    S s;
    int i = 0;
    s.t = data_ov006_021b8638;
    *(volatile uint16_t *)&s.t.c = 11;
    s.fa = 16;
    func_ov006_021b4624(data_ov006_021bc784->p, 0);
    s.f2 = 0;
    for (; i < 12; i++) {
        G *g = data_ov006_021bc784;
        s.f0 = g->b[i];
        int v = data_ov006_021b8624[i]; s.t.a = v;
        func_ov006_021b45b0(g->p, v, s.t.b, s.t.c, s.fa, 2, 0x480, &s);
    }
    func_ov006_021b4690(data_ov006_021bc784->p);
}
