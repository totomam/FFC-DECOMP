/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/angle_wrap_check_unit_021C8238.c, externs renamed. */
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

/* 021C8238, size 0x88, -O4. Angle wrap to [0,360) + directional threshold check vs byte fields; multi-function unit incl 6 tiny accessors 021C829C-021C82BC. */
extern s32 func_ov002_021c8124(void*, s32);
extern s32 func_0208f694(void);

s32 func_ov002_021c8238(void* s, s32 a) {
    s32 r;
    if (a >= 360 || a < 0) {
        if (a > 0) {
            if (a >= 360) {
                do {
                    a -= 360;
                } while (a >= 360);
            }
        } else if (a < 0) {
            do {
                a += 360;
            } while (a < 0);
        }
    }
    r = func_ov002_021c8124(s, a);
    if (r == 0) {
        return 0;
    }
    if (r > 0) {
        if (func_0208f694() <= *((u8*)s + 0x1F)) {
            return 1;
        }
    } else if (r < 0) {
        if (func_0208f694() <= *((u8*)s + 0x20)) {
            return 1;
        }
    }
    return 0;
}

static void func_021C829C(void* s, u32 v) {
    *(u32*)((u8*)s + 0x14) = v;
    *(u32*)((u8*)s + 0x18) = 0;
    *((u8*)s + 0x1C) = 0;
}

static u8 func_021C82A8(void* s) {
    return *((u8*)s + 0x1C);
}

static u8 func_021C82AC(void* s) {
    return *((u8*)s + 0x10);
}

static void func_021C82B0(void* s, u8 v) {
    *((u8*)s + 0x1E) = v;
}

static void func_021C82B4(void* s, u8 a, u8 b) {
    *((u8*)s + 0x1F) = a;
    *((u8*)s + 0x20) = b;
}

static u8 func_021C82BC(void* s) {
    return *((u8*)s + 0x1E);
}
