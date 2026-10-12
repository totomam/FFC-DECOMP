#include "ffc/types.h"

typedef struct {
    uint8_t idx;
    uint8_t pad[3];
    uint32_t *tbl;
} Ctx;

extern uint8_t data_ov006_021b8804[];
extern uint8_t data_ov006_021b8808[];
extern Ctx data_ov006_021bc7ac;
extern int32_t func_ov006_021b0018(void);
extern void func_ov006_021af520(uint32_t a, uint8_t b, uint8_t c);
extern void func_ov006_021b3c84(uint32_t a, int32_t b, int32_t c, uint8_t d);

void func_ov006_021ae048(void)
{
    uint8_t buf[8];
    uint8_t *p = buf + 4;
    int32_t n;
    uint8_t v;

    buf[4] = data_ov006_021b8804[0];
    buf[5] = data_ov006_021b8804[1];
    buf[6] = data_ov006_021b8804[2];
    buf[7] = data_ov006_021b8804[3];
    buf[0] = data_ov006_021b8808[0];
    buf[1] = data_ov006_021b8808[1];
    buf[2] = data_ov006_021b8808[2];
    buf[3] = data_ov006_021b8808[3];

    if (data_ov006_021bc7ac.idx > 3) {
        return;
    }
    v = p[data_ov006_021bc7ac.idx];
    func_ov006_021af520(data_ov006_021bc7ac.tbl[0], v, v);
    if (data_ov006_021bc7ac.idx == 3) {
        return;
    }
    n = func_ov006_021b0018();
    if (n > 2) {
        n = 3;
    }
    func_ov006_021b3c84((data_ov006_021bc7ac.tbl + data_ov006_021bc7ac.idx)[1], -1, 0, buf[n]);
}
