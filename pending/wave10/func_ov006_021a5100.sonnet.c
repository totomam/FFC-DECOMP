/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_ov006_021a4b14(uint8_t a, int b, int c);
void func_ov006_021b5770(void *obj, void *fn);
void func_ov006_021a5140(void);
extern uint8_t *data_ov006_021bc6fc;
void func_ov006_021a5100(void *obj);
}

struct Num { int v; int w; Num(int x) : v(x), w(0) {} ~Num() {} };
inline int lo(const Num &a) { return a.v & 0xff; }

void func_ov006_021a5100(void *obj) {
    uint8_t *base = data_ov006_021bc6fc;
    int idx = lo(Num(**(uint32_t **)(base + 0xc0))) + 0xc;

    func_ov006_021a4b14(base[0x11d], 3, idx);
    if (idx >= 0xc0) {
        func_ov006_021b5770(obj, (void *)func_ov006_021a5140);
    }
}
