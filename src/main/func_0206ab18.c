/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void *data_0213e164[];
extern void func_0206a8c4(void *a, void *b);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
struct G { int v; G(int x) : v(x) {} ~G() {} };
inline void *get(const G &a, const G &b) { return data_0213e164[a.v]; }
void func_0206ab18(uint8_t *p);
void func_0206ab18(uint8_t *p) {
    uint8_t *q;
    int i = *(int *)(p + 0x30);
    func_0206a8c4(get(G(i), G(i)), p);
    q = p + 0x18;
    func_0208763c(q);
    p[0x35] = 1;
    func_02087678(q);
}
}
