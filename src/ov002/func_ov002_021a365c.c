/* cflags:  */
/* From arcnid/ffc-decomp src/battle/classify_update_021a365c.c, externs renamed. */
/*
 * Matched: 0x021A365C, size 0x1CC (460 bytes), -O4,p
 *
 * Classifies (type, subtype) of some battle object into a category 0-6,
 * then dispatches to one of several "get/compute/set/advance" call
 * sequences (some looped) based on the category.
 */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif


extern void* func_ov002_021a1acc(void* self);
extern s32 func_ov002_021a18bc(void* self);
extern s32 func_0206c184(void* obj, s32 val);
extern s32 func_ov002_021a18c4(void* self, s32 val);
extern void* func_ov002_021a1ac4(void* self);
extern void* func_02017714(void* ptr);
extern void* data_020b8e44;

s32 func_ov002_021a365c(void* self, u8* p1, s32 p2, void* p3)
{
    void* v_self;
    s32 fld;
    s32 v_p2;
    void* v_p3;
    u8* ptr;
    u8 type;
    u8 subtype;
    void* obj;
    s32 category;
    void* gp;
    s32 x, y, z, r;

    v_self = self;
    fld = *(s32*)(p1 + 0x14);
    v_p2 = p2;
    v_p3 = p3;

    if (fld == 0) {
        ptr = (u8*)0;
    } else {
        ptr = p1 + fld;
    }
    type = *ptr;

    gp = data_020b8e44;
    subtype = *((u8*)func_02017714(gp) + 1);

    if (type == 3 || type == 0x11) {
        s32 flag;
        switch (subtype) {
            case 8: case 9: case 10: case 11: case 12:
                flag = 1;
                break;
            case 1: case 2: case 3: case 4: case 5: case 6: case 7:
                flag = 0;
                break;
            case 0:
            default:
                flag = 0;
                break;
        }
        category = flag ? 2 : 1;
    } else if (type == 0x10 || type == 7) {
        category = 1;
    } else if (type == 0xa || type == 0xd || type == 0x13 || type == 0x14 || type == 0x18) {
        category = 2;
    } else if (subtype == 9 || subtype == 10 || subtype == 11 || type == 0x15 || type == 0xf) {
        category = 3;
    } else if (type == 0xe || (u32)(type - 0xb) <= 1) {
        category = 4;
    } else if (type == 9 || type == 2 || subtype == 8 || subtype == 0xc) {
        category = 5;
    } else {
        category = 6;
    }

    switch (category) {
        case 2:
        case 3:
            x = (s32)func_ov002_021a1acc(v_self);
            y = func_ov002_021a18bc(v_self);
            z = func_0206c184((void*)x, y);
            return func_ov002_021a18c4(v_self, z);
        case 4:
            do {
                x = (s32)func_ov002_021a1acc(v_self);
                y = func_ov002_021a18bc(v_self);
                z = func_0206c184((void*)x, y);
                r = func_ov002_021a18c4(v_self, z);
            } while (r == v_p2);
            return r;
        case 5:
            return v_p2;
        case 6:
        default:
            if (v_p3 != 0) {
                x = (s32)func_ov002_021a1acc(v_self);
                r = func_0206c184((void*)x, 2);
                if (r == 0) {
                    v_p3 = v_self;
                } else {
                    v_p3 = func_ov002_021a1ac4(v_self);
                }
            } else {
                v_p3 = func_ov002_021a1ac4(v_self);
            }
            x = (s32)func_ov002_021a1acc(v_self);
            y = func_ov002_021a18bc(v_p3);
            z = func_0206c184((void*)x, y);
            r = func_ov002_021a18c4(v_p3, z);

            if (type != 6) return r;
            if (r != v_p2) return r;

            y = func_ov002_021a18bc(v_p3);
            if (y == 1) {
                void* a5;
                void* a4;
                a5 = func_ov002_021a1ac4(v_self);
                a4 = func_ov002_021a1acc(v_self);
                y = func_ov002_021a18bc(a5);
                z = func_0206c184(a4, y);
                return func_ov002_021a18c4(a5, z);
            } else {
                do {
                    x = (s32)func_ov002_021a1acc(v_self);
                    y = func_ov002_021a18bc(v_self);
                    z = func_0206c184((void*)x, y);
                    r = func_ov002_021a18c4(v_self, z);
                } while (v_p2 == r);
                return r;
            }
    }
}
