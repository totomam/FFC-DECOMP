#include "ffc/leaf_accessors.h"

#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

typedef struct {
    uint32_t word_00;
    uint8_t padding_04[4];
    uint32_t word_08;
    uint8_t padding_0c[4];
    uint32_t word_10;
    uint8_t padding_14[4];
    uint32_t word_18;
    uint8_t padding_1c[4];
    uint32_t word_20;
    uint8_t padding_24[4];
    uint32_t word_28;
    uint32_t word_2c;
    uint16_t halfwords_30[17];
    uint8_t padding_52[2];
    uint32_t word_54;
    uint32_t word_58;
    uint32_t word_5c;
} FfcSparseCopy60;

void ffc_arm9_02035c18(void) {}
void ffc_arm9_02035d7c(void *object) { (void)object; }
void ffc_arm9_020367a8(void) {}
void ffc_arm9_02056894(void) {}
void ffc_arm9_02063bc8(void) {}
void ffc_arm9_0208f69c(void) {}
uint32_t ffc_arm9_02038b48(const void *object) { return CONST_FIELD(uint32_t, object, 0x04); }
void *ffc_arm9_02036380(void *object) { return (uint8_t *)object + 0x24; }
void *ffc_arm9_020367b8(void *object) { return (uint8_t *)object + 0x04; }
uint32_t ffc_arm9_02061568(const void *object) { return CONST_FIELD(uint32_t, object, 0x18); }
uint32_t ffc_arm9_02064aa8(const void *object) { return CONST_FIELD(uint32_t, object, 0x20); }
uint32_t ffc_arm9_02066878(const void *object) { return CONST_FIELD(uint32_t, object, 0x4C); }
uint32_t ffc_arm9_0207fc20(const void *object) { return CONST_FIELD(uint32_t, object, 0x24); }
uint32_t ffc_arm9_0207fc24(const void *object) { return CONST_FIELD(uint32_t, object, 0x28); }
uint32_t ffc_arm9_020871d4(const void *object) { return CONST_FIELD(uint32_t, object, 0x70); }
uint32_t ffc_arm9_0207fd2c(void) { return 0; }
int32_t ffc_arm9_020526ac(void) { return -1; }
void ffc_arm9_02053234(void *object) { FIELD(uint32_t, object, 0x00) = 0; }
void ffc_arm9_02060e80(void *object) { FIELD(uint16_t, object, 0x04) = 0; }
void ffc_arm9_0206133c(void *object) { FIELD(uint32_t, object, 0x04)++; }
void ffc_arm9_0203645c(void *object, uint32_t value) { FIELD(uint32_t, object, 0x54) = value; }
void ffc_arm9_02036460(void *destination, const void *source) { FIELD(uint32_t, destination, 0) = CONST_FIELD(uint32_t, source, 0); }
uint8_t ffc_arm9_0204f7a0(const void *object) { return CONST_FIELD(uint8_t, object, 0x78); }
uint32_t ffc_arm9_020696e8(const void *object) { return CONST_FIELD(uint32_t, object, 0x88); }
void ffc_arm9_020696e0(void *object, uint8_t value) { FIELD(uint8_t, object, 0xB1) = value; }
void ffc_arm9_02069320(void *object, uint32_t value) { FIELD(uint32_t, object, 0x8C) = value; }
void ffc_arm9_02069404(void *object, uint32_t value) { FIELD(uint32_t, object, 0x90) = value; }
int16_t ffc_arm9_0203c410(const int16_t *values, uint32_t index) { return values[index]; }
uint32_t ffc_arm9_02036b4c(const void *object, uint32_t index) { return CONST_FIELD(uint32_t, object, 0x48 + index * 4); }
void ffc_arm9_02058194(void *destination, const void *source) { FIELD(uint32_t, destination, 0) = CONST_FIELD(uint32_t, source, 0x14); }
void ffc_arm9_020576c8(void *object, uint32_t value_0c, uint32_t value_10_18, uint32_t value_14) {
    FIELD(uint32_t, object, 0x0C) = value_0c;
    FIELD(uint32_t, object, 0x18) = value_10_18;
    FIELD(uint32_t, object, 0x10) = value_10_18;
    FIELD(uint32_t, object, 0x14) = value_14;
}
void ffc_arm9_02060448(void *object, uint32_t value_00) {
    FIELD(uint32_t, object, 0x00) = value_00;
    FIELD(uint16_t, object, 0x04) = 0;
    FIELD(uint16_t, object, 0x06) = 0;
    FIELD(uint16_t, object, 0x08) = 0;
    FIELD(uint32_t, object, 0x0C) = 0;
    FIELD(uint32_t, object, 0x10) = 0;
}
void ffc_arm9_02088fa0(void *object) {
    FIELD(uint32_t, object, 0x08) = 0;
    FIELD(uint32_t, object, 0x04) = 0;
    FIELD(uint32_t, object, 0x00) = 0;
}
void ffc_arm9_02005dac(void *object) { FIELD(uint8_t, object, 0x84) = 0; }
void ffc_arm9_02005db4(void *object, uint32_t value) { FIELD(uint32_t, object, 0x80) = value * 1000; }
uint32_t ffc_arm9_0201b924(const void *object) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0x3C);
    return (CONST_FIELD(uint32_t, nested, 0x3C) >> 4) & 3;
}
uint32_t ffc_arm9_0201bc54(const void *object, uint32_t index, uint32_t addend) {
    return CONST_FIELD(uint32_t, object, 0x128 + index * 8) + addend;
}
uint32_t ffc_arm9_0201e920(const void *object) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0x3C);
    return (CONST_FIELD(uint32_t, nested, 0x1C) & 0xF) << 3;
}
void ffc_arm9_02035c3c(void *object, uint32_t value) {
    FIELD(uint32_t, object, 0) = (FIELD(uint32_t, object, 0) & ~0x1FU) | (value & 0x1F);
}
void ffc_arm9_02035c4c(void *object, uint32_t value) {
    FIELD(uint32_t, object, 0) = (FIELD(uint32_t, object, 0) & 0xFFFFC01FU) | ((value & 0x1FF) << 5);
}
void ffc_arm9_02035c60(void *object, uint32_t value) {
    FIELD(uint32_t, object, 0) = (FIELD(uint32_t, object, 0) & 0xFF803FFFU) | ((value & 0x1FF) << 14);
}
void ffc_arm9_02035c74(void *object, uint32_t value) {
    FIELD(uint32_t, object, 0) = (FIELD(uint32_t, object, 0) & 0x007FFFFFU) | ((value & 0x1FF) << 23);
}
uint8_t ffc_arm9_02035dac(const void *object) { return CONST_FIELD(uint32_t, object, 4) & 0xFF; }
void ffc_arm9_02035dbc(void *object, uint32_t value) {
    FIELD(uint32_t, object, 4) = (FIELD(uint32_t, object, 4) & ~0xFFU) | (value & 0xFF);
}
uint32_t ffc_arm9_02035eb0(const void *object) { return CONST_FIELD(uint32_t, object, 8) & 0x3FF; }
void ffc_arm9_02035f44(void *object, uint32_t value) {
    FIELD(uint32_t, object, 8) = (FIELD(uint32_t, object, 8) & 0xFFFFFC00U) | (value & 0x3FF);
}
uint32_t ffc_arm9_02036344(const void *object) { return FIELD(const uint32_t, object, 0x54) & 1; }
uint8_t ffc_arm9_02036360(const void *object) { return CONST_FIELD(uint32_t, object, 0x58) & 0xFF; }
uint32_t ffc_arm9_020363a4(const void *object) { return (CONST_FIELD(uint32_t, object, 0x58) >> 28) & 7; }
void ffc_arm9_02036438(void *object, uint32_t value) {
    FIELD(uint32_t, object, 0x58) = (FIELD(uint32_t, object, 0x58) & ~0xFFU) | (value & 0xFF);
}
uint32_t ffc_arm9_02036838(const void *object) { return CONST_FIELD(uint32_t, object, 0x30) & 1; }
uint32_t ffc_arm9_02036cd8(const void *object) { return (CONST_FIELD(uint32_t, object, 8) >> 19) & 0x3FF; }
uintptr_t ffc_arm9_0207e5c4(const void *object) {
    return CONST_FIELD(int8_t, object, 3) ? CONST_FIELD(uint32_t, object, 0) : (uintptr_t)object;
}
uint32_t ffc_arm9_0207f8a0(uint32_t unused, const void *range, uint32_t *difference) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, range, 4);
    (void)unused;
    *difference = CONST_FIELD(uint32_t, nested, 8) - CONST_FIELD(uint32_t, nested, 4);
    return 0;
}
void *ffc_arm9_02087c14(void *node, void *owner) {
    FIELD(uint32_t, owner, 4) = (uint32_t)(uintptr_t)node;
    FIELD(uint32_t, owner, 0) = 0;
    if (node) FIELD(uint32_t, node, 0) = (uint32_t)(uintptr_t)owner;
    return owner;
}
void ffc_arm9_02088708(void *object) {
    FIELD(uint32_t, object, 0) = 0;
    FIELD(uint32_t, object, 8) = 0;
    FIELD(uint32_t, object, 0x20) = 0;
}

void ffc_arm9_020872d0(void *object, uint32_t value) { FIELD(uint32_t, object, 0xB4) = value; }
int32_t ffc_arm9_0208f694(int32_t value) {
    return value < 0 ? (int32_t)(0U - (uint32_t)value) : value;
}
void ffc_arm9_02062984(void *object, uint32_t value_14, uint32_t value_18) {
    FIELD(uint32_t, object, 0x14) = value_14;
    FIELD(uint32_t, object, 0x18) = value_18;
}
void ffc_arm9_02059c34(void *destination, const void *source) {
    uint32_t value = CONST_FIELD(uint32_t, source, 0x44) & 0xF;
    FIELD(uint32_t, destination, 0x10) = (FIELD(uint32_t, destination, 0x10) & ~0x3CU) | (value << 2);
}
void ffc_arm9_0205359c(void *object) {
    FIELD(uint32_t, object, 0x00) = 0;
    FIELD(uint32_t, object, 0x04) = 0;
    FIELD(uint32_t, object, 0x08) = 0;
    FIELD(uint32_t, object, 0x0C) = 0;
    FIELD(uint32_t, object, 0x10) = 0;
    FIELD(uint32_t, object, 0x14) = 0;
}
void ffc_arm9_0208f6a4(void *object) {
    uint32_t value_18 = FIELD(uint32_t, object, 0x18);
    FIELD(uint32_t, object, 0x24) = FIELD(uint32_t, object, 0x1C);
    FIELD(uint32_t, object, 0x28) = FIELD(uint32_t, object, 0x20) - (value_18 & FIELD(uint32_t, object, 0x2C));
    FIELD(uint32_t, object, 0x34) = value_18;
}
void ffc_arm9_02035dcc(void *object, uint32_t increment) {
    uint32_t word = FIELD(uint32_t, object, 4);
    FIELD(uint32_t, object, 4) = (word & ~0xFFU) | ((word + increment) & 0xFF);
}
uint32_t ffc_arm9_020369c0(const void *object, uint32_t index) {
    return CONST_FIELD(uint8_t, object, 0x35 + index * 4) == 1;
}
static uintptr_t tagged_pointer_get(const void *object) {
    uint32_t tagged = CONST_FIELD(uint32_t, object, 0x1C);
    return ((tagged >> 24) & 1) ? (tagged & 0x00FFFFFFU) : CONST_FIELD(uint32_t, object, 8);
}
uintptr_t ffc_arm9_020525f0(const void *object) { return tagged_pointer_get(object); }
uintptr_t ffc_arm9_0207eb94(const void *object) { return tagged_pointer_get(object); }
void ffc_arm9_0208c534(void *cursor, uint8_t value) {
    uint32_t remaining = FIELD(uint32_t, cursor, 0);
    if (remaining != 0) {
        uint8_t *destination = (uint8_t *)(uintptr_t)FIELD(uint32_t, cursor, 4);
        *destination = value;
        FIELD(uint32_t, cursor, 0) = remaining - 1;
        FIELD(uint32_t, cursor, 4) = (uint32_t)(uintptr_t)(destination + 1);
    }
}
uint8_t ffc_arm9_02036820(const void *object, uint32_t index) {
    if (CONST_FIELD(uint8_t, object, 0x34 + index * 4) == 0) return 0;
    return CONST_FIELD(uint8_t, object, 0x36 + index * 4);
}
uint32_t ffc_arm9_02090270(uint32_t unused, uint32_t flags) {
    (void)unused;
    return (flags >> 31) & 1;
}
void ffc_arm9_02090380(void *destination, const void *source, uint32_t length) {
    uint8_t *out = destination;
    const uint8_t *in = source;
    while (length-- != 0) *out++ = *in++;
}
void ffc_arm9_0207fad4(void *object, uint32_t first, uint32_t second) {
    if (first == 0 || second == 0) first = second = 0;
    FIELD(uint32_t, object, 0x54) = first;
    FIELD(uint32_t, object, 0x58) = second;
}
uint32_t ffc_arm9_020581cc(const void *first, const void *second) {
    uint32_t first_start = CONST_FIELD(uint32_t, first, 4);
    uint32_t second_start = CONST_FIELD(uint32_t, second, 4);
    return first_start > second_start || second_start >= first_start + CONST_FIELD(uint32_t, first, 8);
}
uint32_t ffc_arm9_02093b94(const uint16_t *first, const uint16_t *second, uint32_t length) {
    uint32_t difference = 0;
    while (length-- != 0) {
        difference = (uint32_t)*first++ - (uint32_t)*second++;
        if (difference != 0) break;
    }
    return difference;
}
void *ffc_arm9_02087c24(void *head, void *node) {
    void *previous = (void *)(uintptr_t)FIELD(uint32_t, node, 0);
    void *next = (void *)(uintptr_t)FIELD(uint32_t, node, 4);
    if (next) FIELD(uint32_t, next, 0) = (uint32_t)(uintptr_t)previous;
    if (!previous) return next;
    FIELD(uint32_t, previous, 4) = (uint32_t)(uintptr_t)next;
    return head;
}
void ffc_arm9_020877d4(void *list, void *node) {
    void *tail = (void *)(uintptr_t)FIELD(uint32_t, list, 0x8C);
    if (!tail) FIELD(uint32_t, list, 0x88) = (uint32_t)(uintptr_t)node;
    else FIELD(uint32_t, tail, 0x10) = (uint32_t)(uintptr_t)node;
    FIELD(uint32_t, node, 0x14) = (uint32_t)(uintptr_t)tail;
    FIELD(uint32_t, node, 0x10) = 0;
    FIELD(uint32_t, list, 0x8C) = (uint32_t)(uintptr_t)node;
}
uint32_t ffc_arm9_020817c8(int32_t first, int32_t second) {
    uint64_t product = (uint64_t)((int64_t)first * second) + 0x800U;
    return (uint32_t)(product >> 12);
}
uint64_t ffc_arm9_0209a71c(uint64_t first, uint64_t second) { return first * second; }
uint32_t ffc_arm9_02092864(const uint8_t *text) {
    uint32_t length = 0;
    while (*text++ != 0) length++;
    return length;
}
uint32_t ffc_arm9_02093bb4(const uint16_t *text) {
    uint32_t length = 0;
    while (*text++ != 0) length++;
    return length;
}
uint32_t ffc_arm9_0204f7d4(const void *object) {
    uint32_t offset = (CONST_FIELD(uint16_t, object, 0x5C) & 0x8000) ? 0x20 : 0x24;
    return CONST_FIELD(uint32_t, object, offset);
}
uint32_t ffc_arm9_0204f7ec(const void *object) {
    uint32_t offset = (CONST_FIELD(uint16_t, object, 0x5C) & 0x8000) ? 0x24 : 0x20;
    return CONST_FIELD(uint32_t, object, offset);
}
void ffc_arm9_0207e890(void *object) {
    FIELD(uint32_t, object, 0x00) = 0;
    FIELD(uint32_t, object, 0x04) = 0;
    FIELD(uint32_t, object, 0x08) = 0;
    FIELD(uint32_t, object, 0x0C) = 0x2300;
    FIELD(uint32_t, object, 0x10) = 0;
    FIELD(uint32_t, object, 0x14) = 0;
    FIELD(uint32_t, object, 0x18) = 0;
    FIELD(uint32_t, object, 0x1C) = 0;
}
void ffc_arm9_0205f2f0(void *object, uint32_t value) {
    uint32_t count = FIELD(uint32_t, object, 0x10);
    uint8_t *record = (uint8_t *)(uintptr_t)FIELD(uint32_t, object, 4);
    uint32_t bits = (value & 3) << 10;
    while (count-- != 0) {
        FIELD(uint32_t, record, 0) = (FIELD(uint32_t, record, 0) & 0xFFFFF3FFU) | bits;
        record += 0x28;
    }
}
void ffc_arm9_0205fdc8(void *object, uint32_t value) {
    uint32_t count = FIELD(uint32_t, object, 0x10);
    uint8_t *record = (uint8_t *)(uintptr_t)FIELD(uint32_t, object, 4);
    uint32_t bits = (value & 3) << 10;
    while (count-- != 0) {
        FIELD(uint32_t, record, 0) = (FIELD(uint32_t, record, 0) & 0xFFFFF3FFU) | bits;
        record += 8;
    }
}
void ffc_arm9_020527cc(void *first, void *second) {
    uint32_t temporary[3];
    uint32_t *a = first;
    uint32_t *b = second;
    if (a == b) return;
    temporary[0] = a[0]; temporary[1] = a[1]; temporary[2] = a[2];
    a[0] = b[0]; a[1] = b[1]; a[2] = b[2];
    b[0] = temporary[0]; b[1] = temporary[1]; b[2] = temporary[2];
}
void ffc_arm9_020872d8(void *object, uintptr_t buffer, uint32_t size) {
    uintptr_t adjusted_buffer = buffer + 4;
    uint32_t adjusted_size = size - 0x40;
    if (adjusted_size & 4) adjusted_size -= 4;
    FIELD(uint32_t, object, 0x40) = (uint32_t)adjusted_buffer;
    FIELD(uint32_t, object, 0x44) = size;
    FIELD(uint32_t, object, 0x38) = adjusted_size;
    FIELD(uint32_t, object, 0x00) = (adjusted_buffer & 1) ? 0x3F : 0x1F;
    for (uint32_t offset = 4; offset <= 0x34; offset += 4) FIELD(uint32_t, object, offset) = 0;
    FIELD(uint32_t, object, 0x3C) = 0;
}
uintptr_t ffc_arm9_02069734(const void *object) {
    const void *owner = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0x90);
    uintptr_t node = CONST_FIELD(uint32_t, owner, 0x14);
    while (node != 0) {
        if (CONST_FIELD(uint8_t, (const void *)node, 0x84) && CONST_FIELD(uint8_t, (const void *)node, 0x85)) break;
        node = CONST_FIELD(uint32_t, (const void *)node, 4);
    }
    return node;
}
uint8_t *ffc_arm9_02092a2c(uint8_t *text, uint32_t character) {
    uint8_t target = (uint8_t)character;
    for (;;) {
        uint8_t current = *text;
        if (current == target) return text;
        if (current == 0) return 0;
        text++;
    }
}
int32_t ffc_arm9_02090410(const uint8_t *first, const uint8_t *second, uint32_t length) {
    while (length-- != 0) {
        uint8_t a = *first++;
        uint8_t b = *second++;
        if (a < b) return -1;
        if (a > b) return 1;
    }
    return 0;
}
uintptr_t ffc_arm9_02086b94(void *owner) {
    uintptr_t node = FIELD(uint32_t, owner, 0);
    if (node == 0) return (uintptr_t)owner;
    uintptr_t next = CONST_FIELD(uint32_t, (const void *)node, 0x80);
    FIELD(uint32_t, owner, 0) = (uint32_t)next;
    if (next != 0) {
        FIELD(uint32_t, (void *)next, 0x7C) = 0;
    } else {
        FIELD(uint32_t, owner, 4) = 0;
        FIELD(uint32_t, (void *)node, 0x78) = 0;
    }
    return node;
}
void ffc_arm9_02035be0(void *object) { FIELD(uint32_t, object, 0) = 0x32190C86; }
void ffc_arm9_02059b60(void *object, uint32_t value_14, uint32_t packed_8_12,
                       uint32_t value_04, uint32_t value_08, uint32_t packed_14_15,
                       uint32_t value_18) {
    uint32_t preserved_upper = FIELD(uint32_t, object, 0x10) & 0xFFFF0000U;
    FIELD(uint32_t, object, 0x00) = 0x020B0D94;
    FIELD(uint32_t, object, 0x04) = value_04;
    FIELD(uint32_t, object, 0x08) = value_08;
    FIELD(uint32_t, object, 0x10) = preserved_upper | ((packed_14_15 & 3) << 14) | ((packed_8_12 & 0x1F) << 8);
    FIELD(uint32_t, object, 0x14) = value_14;
    FIELD(uint32_t, object, 0x18) = value_18;
    FIELD(uint32_t, object, 0x1C) = 0;
    FIELD(uint32_t, object, 0x20) = 0;
}
uintptr_t ffc_arm9_0204f3cc(const void *container, const uint32_t *threshold,
                           uint32_t *selected, uint8_t *first_flag, uint8_t *second_flag) {
    uintptr_t last = (uintptr_t)((const uint8_t *)container + 4);
    uintptr_t node = CONST_FIELD(uint32_t, container, 4);
    *selected = 0;
    *first_flag = 1;
    *second_flag = 1;
    while (node != 0) {
        last = node;
        if (*threshold < CONST_FIELD(uint32_t, (const void *)node, 0x0C)) {
            node = CONST_FIELD(uint32_t, (const void *)node, 0);
            *first_flag = 1;
        } else {
            *selected = (uint32_t)node;
            node = CONST_FIELD(uint32_t, (const void *)node, 4);
            *first_flag = 0;
            *second_flag = 0;
        }
    }
    return last;
}
void ffc_arm9_0202a9ac(void *cursor) {
    uintptr_t node = FIELD(uint32_t, cursor, 0);
    uintptr_t child = CONST_FIELD(uint32_t, (const void *)node, 4);
    if (child != 0) {
        uintptr_t descendant = CONST_FIELD(uint32_t, (const void *)child, 0);
        while (descendant != 0) {
            child = descendant;
            descendant = CONST_FIELD(uint32_t, (const void *)descendant, 0);
        }
        FIELD(uint32_t, cursor, 0) = (uint32_t)child;
        return;
    }
    uintptr_t parent = CONST_FIELD(uint32_t, (const void *)node, 8) & ~1U;
    while (node != CONST_FIELD(uint32_t, (const void *)parent, 0)) {
        FIELD(uint32_t, cursor, 0) = (uint32_t)parent;
        node = parent;
        parent = CONST_FIELD(uint32_t, (const void *)parent, 8) & ~1U;
    }
    FIELD(uint32_t, cursor, 0) = (uint32_t)parent;
}

void ffc_arm9_0201f36c(const void *object, uint32_t index, void *output) {
    const FfcSparseCopy60 *source =
        (const FfcSparseCopy60 *)(CONST_FIELD(uint8_t *, object, 0x58) + index * 0x60);
    FfcSparseCopy60 *destination = (FfcSparseCopy60 *)output;
    uint16_t *destination_halfwords;
    const uint16_t *source_halfwords;
    uint32_t count;
    destination->word_00 = source->word_00;
    destination->word_08 = source->word_08;
    destination->word_10 = source->word_10;
    destination->word_18 = source->word_18;
    destination->word_20 = source->word_20;
    destination->word_28 = source->word_28;
    destination->word_2c = source->word_2c;
    destination_halfwords = destination->halfwords_30;
    source_halfwords = source->halfwords_30;
    count = 17;
    do {
        *destination_halfwords++ = *source_halfwords++;
    } while (--count != 0);
    destination->word_54 = source->word_54;
    destination->word_58 = source->word_58;
    destination->word_5c = source->word_5c;
}

void ffc_arm9_0201f460(const void *object, uint32_t index, void *output) {
    const FfcSparseCopy60 *source =
        (const FfcSparseCopy60 *)(CONST_FIELD(uint8_t *, object, 0x5C) + index * 0x60);
    FfcSparseCopy60 *destination = (FfcSparseCopy60 *)output;
    uint16_t *destination_halfwords;
    const uint16_t *source_halfwords;
    uint32_t count;
    destination->word_00 = source->word_00;
    destination->word_08 = source->word_08;
    destination->word_10 = source->word_10;
    destination->word_18 = source->word_18;
    destination->word_20 = source->word_20;
    destination->word_28 = source->word_28;
    destination->word_2c = source->word_2c;
    destination_halfwords = destination->halfwords_30;
    source_halfwords = source->halfwords_30;
    count = 17;
    do {
        *destination_halfwords++ = *source_halfwords++;
    } while (--count != 0);
    destination->word_54 = source->word_54;
    destination->word_58 = source->word_58;
    destination->word_5c = source->word_5c;
}
