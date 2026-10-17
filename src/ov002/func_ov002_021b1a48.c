/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_release2_1a48.c, externs renamed. */
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

/* Matched: 021B1A48 (80B) -- dtor: set vtable, release +0x80, virtual-release+clear +0x84/+0x88, base dtor. */
typedef void (*Fn)(void*);
extern u32 data_ov002_021d57f8[];
extern void func_02061344(void* m);
extern void func_020641a4(void* s);
void* func_ov002_021b1a48(void* s) {
    void* m;
    *(u32**)s = data_ov002_021d57f8;
    func_02061344(*(void**)((u8*)s + 0x80));
    m = *(void**)((u8*)s + 0x84);
    if (m != 0) {
        if (m != 0) {
            (*(Fn**)m)[1](m);
        }
        *(u32*)((u8*)s + 0x84) = 0;
    }
    m = *(void**)((u8*)s + 0x88);
    if (m != 0) {
        if (m != 0) {
            (*(Fn**)m)[1](m);
        }
        *(u32*)((u8*)s + 0x88) = 0;
    }
    func_020641a4(s);
    return s;
}
