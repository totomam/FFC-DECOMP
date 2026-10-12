#include "ffc/types.h"

typedef struct {
    uint16_t x;
    uint16_t y;
} Pos;

typedef struct {
    uint8_t pad0[0x10];
    uint16_t h10;
    uint8_t pad1[4];
    uint16_t h16;
    uint8_t b18;
    uint8_t b19;
    uint8_t pad2;
    uint8_t b1b;
    uint8_t b1c;
    uint8_t b1d;
} Obj;

extern int func_ov006_021b4d34(void *p);
extern void func_ov006_021b4ef0(void *p);
extern void func_ov006_021af7f8(int n);
extern void func_ov006_021af9bc(int n);
extern void func_ov006_021b0644(void);
extern uint8_t data_ov006_021b8acc[];
extern Obj *data_ov006_021bc7dc;
extern uint8_t data_ov006_021b890b[];

void func_ov006_021af778(void)
{
    Pos pos;
    int n;
    int m;
    int y;
    int h;
    int b;

    if (func_ov006_021b4d34(data_ov006_021b8acc) != 0) {
        func_ov006_021b4ef0(&pos);
        if ((int)pos.x >= (int)data_ov006_021bc7dc->h10 - 30) {
            y = pos.y;
            h = data_ov006_021bc7dc->h16;
            b = data_ov006_021bc7dc->b18;
            n = b + (y - h);
            if (n < 0) {
                n = 0;
            } else {
                m = data_ov006_021bc7dc->b19 - data_ov006_021b890b[data_ov006_021bc7dc->b1b];
                if (n >= m) {
                    n = m;
                }
            }
            func_ov006_021af7f8(n);
            func_ov006_021af9bc(n);
            data_ov006_021bc7dc->b1d = 2;
            return;
        }
    }
    func_ov006_021b0644();
    data_ov006_021bc7dc->b1c = 0;
    data_ov006_021bc7dc->b1d = 3;
}
