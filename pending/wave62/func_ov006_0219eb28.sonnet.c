#include "ffc/types.h"
extern uint8_t func_ov006_0219ecfc(int a, int b);
extern int func_ov006_0219cedc(int a);
extern uint16_t func_ov006_0219f0a4(void);
extern void func_ov006_0219ef5c(void *d, void *s, int n);
extern void func_ov006_0219ec2c(void *a, void *b, int n, int c);
extern void func_ov006_0219ec90(void *a, int b, int c, int d);
extern void func_ov006_0219ceec(int a);
extern uint8_t data_ov006_021baf44[];
extern uint8_t data_ov006_021baf46[];
typedef struct { uint16_t h; uint8_t pad[2]; uint8_t buf[8]; int p; int x; } L;
int func_ov006_0219eb28(int a, int b, int c, uint8_t *d, void *e, void *f, int g)
{
    L l;
    *d = func_ov006_0219ecfc(a, c);
    l.p = func_ov006_0219cedc(c);
    if (l.p == 0) return -1;
    l.h = func_ov006_0219f0a4();
    func_ov006_0219ef5c(e, &l.h, 2);
    func_ov006_0219ef5c(data_ov006_021baf44, e, 2);
    func_ov006_0219ef5c(data_ov006_021baf46, f, g);
    func_ov006_0219ec2c(l.buf, data_ov006_021baf44, g + 2, c);
    func_ov006_0219ec90(l.buf, b, a, c);
    func_ov006_0219ceec(l.p);
    return 0;
}
