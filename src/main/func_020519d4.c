/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_0208763c(void *p);
void func_0207e1cc(void *p, int n);
void func_0207fbb0(void);
void func_02056858(void *p);
void func_02087678(void *p);
extern uint8_t data_0213dfac[];
extern uint8_t data_020b04ec[];

typedef struct {
    uint8_t pad[0x10];
    void *f10;
} Glob;

extern Glob data_0213df68;

struct Guard {
    void *p;
    uint8_t f;
    Guard(void *q) : p(q), f(1) {}
    ~Guard() {
        if (f) {
            func_02087678(p);
        }
    }
};

void func_020519d4(void) {
    if (data_0213df68.f10 == 0) {
        return;
    }
    Guard g(data_0213dfac);
    if (g.f) {
        func_0208763c(data_0213dfac);
    }
    func_0207e1cc(data_020b04ec, 3);
    func_0207fbb0();
    func_02056858(data_0213df68.f10);
    data_0213df68.f10 = 0;
}
}
