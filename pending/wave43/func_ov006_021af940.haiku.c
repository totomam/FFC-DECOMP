#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7dc;
extern uint8_t data_ov006_021b890b[];

void func_ov006_021af940(int idx, uint16_t *out) {
    uint8_t *p = data_ov006_021bc7dc;
    uint16_t v;

    out[0] = *(uint16_t *)(p + 0x10);
    out[2] = out[0] + 12;

    switch (idx) {
    case 1:
        out[1] = *(uint16_t *)(data_ov006_021bc7dc + 0x12) + data_ov006_021bc7dc[0x1a];
        out[3] = out[1] + data_ov006_021b890b[data_ov006_021bc7dc[0x1b]];
        break;
    case 2:
        out[1] = *(uint16_t *)(data_ov006_021bc7dc + 0x12) - 13;
        out[3] = *(uint16_t *)(data_ov006_021bc7dc + 0x12);
        break;
    case 3:
        v = *(uint16_t *)(data_ov006_021bc7dc + 0x12) + data_ov006_021bc7dc[0x19];
        out[1] = v;
        out[3] = out[1] + 13;
        break;
    case 4:
        v = *(uint16_t *)(data_ov006_021bc7dc + 0x12);
        out[1] = v;
        out[3] = v + data_ov006_021bc7dc[0x19];
        break;
    default:
        break;
    }
}
