/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { uint32_t a, b; };
struct X { virtual ~X(); };
struct S { uint8_t pad[0x29c]; X *obj; };
extern "C" {
extern void func_ov009_021ada08(void *p);
extern void func_ov011_021c0708(void *p);
extern void func_ov011_021c2d4c(void *p);
extern void func_ov011_021bff9c(void *p);
extern void func_ov011_021c3100(void *p);
extern Pair func_02069724(void *p);
extern void func_02069828(void *p, Pair v);
extern void func_02069600(void *p);
void func_ov011_021c0644(S *p);
}
static inline void kill(S *p) {
    if (p->obj) { delete p->obj; p->obj = 0; }
}
void func_ov011_021c0644(S *p) {
    func_ov009_021ada08(p);
    func_ov011_021c0708(p);
    func_ov011_021c2d4c(p);
    func_ov011_021bff9c(p);
    func_ov011_021c3100(p);
    func_02069828(p, func_02069724(p));
    if (p->obj != 0) {
        func_02069600(p);
        kill(p);
    }
}
