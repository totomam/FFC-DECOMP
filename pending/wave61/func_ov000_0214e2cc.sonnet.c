#include "ffc/types.h"
typedef struct { uint8_t pad[0x38]; uint16_t b; uint16_t a; } S;
typedef struct { int pad; uint8_t *p; } D;
typedef struct { uint8_t pad[0x24]; int lim; } G;
extern D data_02141510;
extern G data_ov000_0216e01c;
extern void func_02088978(void);
extern void func_0208898c(void);
extern int func_0209a76c(int, int);
static inline int mn(int a, int b) { return a > b ? b : a; }
static inline int calc(S *s) {
    if (s != 0) {
        int a = s->a;
        if (a != 0) {
            int b = s->b;
            if (b != 0) {
                return mn(mn(b, a), data_ov000_0216e01c.lim) * 2;
            }
        }
    }
    return data_ov000_0216e01c.lim * 2;
}
int func_ov000_0214e2cc(int x) {
    S *s = *(S **)(data_02141510.p + 0xa4);
    int n;
    func_02088978();
    n = calc(s);
    func_0208898c();
    if (n > 0) {
        int r = func_0209a76c(x, n);
        if (r > 0) return r * n;
    }
    return x;
}
