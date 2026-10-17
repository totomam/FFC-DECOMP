/* cflags:  */
/* From arcnid/ffc-decomp src/battle/pt_from_target_46fc.c, externs renamed. */
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

/* Matched: 021B46FC (84B) -- REQUIRES -O4,p. target point minus pos->0x38/0x34, HI-first locals; else fields +0xA4/+0xA8. */
typedef struct { s32 x; s32 y; } Pt;
typedef void (*FnP)(Pt*, void*);
extern void* func_ov002_021b45f8(void* m);
extern void* func_ov002_021ae4d4(void* e);
extern void* func_ov002_021ada30(void* t);
void func_ov002_021b46fc(Pt* out, void* b) {
    void* e;
    e = func_ov002_021b45f8(*(void**)((u8*)b + 0xAC));
    if (e != 0) {
        Pt pt;
        void* t;
        void* pos;
        s32 vy;
        s32 vx;
        t = func_ov002_021ae4d4(e);
        (*(FnP**)t)[4](&pt, t);
        pos = func_ov002_021ada30(func_ov002_021ae4d4(e));
        vy = pt.y - *(s32*)((u8*)pos + 0x38);
        vx = pt.x - *(s32*)((u8*)pos + 0x34);
        out->x = vx;
        out->y = vy;
    } else {
        out->x = *(s32*)((u8*)b + 0xA4);
        b = (u8*)b + 0xA8;
        out->y = *(s32*)((u8*)b);
    }
}
