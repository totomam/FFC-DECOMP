/* cflags:  */
/* From arcnid/ffc-decomp src/battle/reward_flow_021B524C.c, externs renamed. */
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


/* Matched: 0x021B524C  size 0x1B8 (440)  -O4,p
   two-branch reward flow; KEY: goto exit single label, else-out-of-line func_02021338(0x440), name=GetName before ctor stores, s+=0x14 reassign */

extern s32 func_ov002_021b38a8(void* s);
extern u8* func_ov002_021b45f8(void* s, void* q);
extern s32 func_ov002_021b4818(void* q);
extern void func_02021338(u32 id);
extern u32 func_ov002_021ae5ec(void* obj);
extern s32 func_ov002_021b4ffc(void* s, u32 name);
extern void* func_ov002_02198d78(u32 x);
extern s32 func_ov002_021ae5fc(void* obj);
extern u32 func_ov002_021c5ad4(void* mgr, u32 v, u32* out);
extern void func_02056bc0(void* p, u32 v);
extern void func_ov002_021b502c(void* s);
extern u32 func_02056b10(u32 x);
extern u8* func_0205681c(u32 size);
extern u32 func_02055a2c(u32 x, u8* p);
extern u32 func_02056aec(void* s);
extern u32 data_ov002_021d3c48[];

void func_ov002_021b524c(u8* s, u8* q)
{
    u32 doneA;
    u32 doneB;
    u8* obj;
    u8* p;
    u32 w;
    u32 name;

    if (func_ov002_021b38a8(s) != 0) goto exit;
    if (q != 0
        && *(u32*)(q + 0x94) == 0xA21B58B6
        && *(u32*)(q + 0x98) == 0x4D555642
        && *(u32*)(q + 0x9C) == 0x5A1BB469) {
        obj = func_ov002_021b45f8(s, q);
        if (func_ov002_021b4818(q) != 0) {
            func_02021338(0x440);
            return;
        }
        if (obj != 0) {
            if (func_ov002_021b4ffc(s, func_ov002_021ae5ec(obj)) != 0) {
                doneA = 0;
                w = func_ov002_021c5ad4(func_ov002_02198d78(*(u32*)(s + 0xE0)), data_ov002_021d3c48[func_ov002_021ae5fc(obj)], &doneA);
                if (w != 0) {
                    func_02056bc0(s + 0x14, w);
                }
                if (doneA != 0) goto exit;
                func_02021338(0x43F);
                func_ov002_021b502c(s);
                func_02056bc0(s + 0x14, func_02056b10(*(u32*)(s + 0xEC)));
                p = func_0205681c(0x18);
                if (p != 0) {
                    name = func_ov002_021ae5ec(obj);
                    *(u32*)(p + 0x8) = 0;
                    *(u32*)(p + 0xC) = 0x0001013B;
                    *(u32*)p = 0x020AB738;
                    *(u32*)(p + 0x10) = name;
                    *(u8*)(p + 0x14) = 0;
                }
                func_02056bc0(s + 0x14, func_02055a2c(*(u32*)(s + 0xE4), p));
                w = func_02056aec(s);
                s += 0x14;
                func_02056bc0(s, w);
                return;
            } else {
                func_02021338(0x440);
            }
            return;
        }
    }
    if ((u32)q == *(u32*)(s + 0xFC)) {
        doneB = 0;
        w = func_ov002_021c5ad4(func_ov002_02198d78(*(u32*)(s + 0xE0)), 0x28, &doneB);
        if (w != 0) {
            func_02056bc0(s + 0x14, w);
        }
        if (doneB != 0) goto exit;
        func_02021338(0x441);
        func_ov002_021b502c(s);
        func_02056bc0(s + 0x14, func_02056b10(*(u32*)(s + 0xEC)));
        p = func_0205681c(0x18);
        if (p != 0) {
            *(u32*)(p + 0x8) = 0;
            *(u32*)(p + 0xC) = 0x0001013B;
            *(u32*)p = 0x020AB738;
            *(u32*)(p + 0x10) = 0;
            *(u8*)(p + 0x14) = 1;
        }
        func_02056bc0(s + 0x14, func_02055a2c(*(u32*)(s + 0xE4), p));
        w = func_02056aec(s);
        s += 0x14;
        func_02056bc0(s, w);
    }
exit:;
}
