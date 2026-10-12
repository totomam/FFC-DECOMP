#include "ffc/types.h"

extern uint8_t func_ov006_0219ecfc(uint32_t a, uint32_t c);
extern void *func_ov006_0219cedc(uint32_t c);
extern uint16_t func_ov006_0219f0a4(void);
extern void func_ov006_0219ef5c(void *dst, const void *src, uint32_t n);
extern void func_ov006_0219ec2c(void *out, const void *src, uint32_t n, uint32_t c);
extern void func_ov006_0219ec90(void *out, uint32_t b, uint32_t a, uint32_t c);
extern void func_ov006_0219ceec(void *p);
extern uint8_t data_ov006_021baf44[];
extern uint8_t data_ov006_021baf46[];

typedef struct {
    uint32_t x;
    uint32_t y;
    void *p;
    uint32_t z;
} Local;

int func_ov006_0219eb28(uint32_t a, uint32_t b, uint32_t c, uint8_t *d,
                        void *e, void *f, uint32_t g)
{
    uint16_t tmp;
    Local s;

    *d = func_ov006_0219ecfc(a, c);
    s.p = func_ov006_0219cedc(c);
    if (s.p == 0) {
        return -1;
    }
    tmp = func_ov006_0219f0a4();
    func_ov006_0219ef5c(e, &tmp, 2);
    func_ov006_0219ef5c(data_ov006_021baf44, e, 2);
    func_ov006_0219ef5c(data_ov006_021baf46, f, g);
    func_ov006_0219ec2c(&s, data_ov006_021baf44, g + 2, c);
    func_ov006_0219ec90(&s, b, a, c);
    func_ov006_0219ceec(s.p);
    return 0;
}
