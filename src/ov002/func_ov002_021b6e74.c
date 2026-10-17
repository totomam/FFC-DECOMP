/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/strlen_loop_b6e74.c, externs renamed. */
/* 021B6E74 size 0x5C (92) -- SSO string len loop: F/G with is_long?long:short(byte>>1). -O4 */
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

typedef struct { u32 is_long : 1; } Wf;
typedef struct { u8 f : 1; u8 n : 7; } Bf;
int func_02030f04(void* a, u8* s, int pos);
void func_02009698(void* a, int h, u32 len, u8* c);
void func_ov002_021b6e74(void* a, u8* b, u8* c) {
    int h; u32 lenB; u32 lenC;
    h = func_02030f04(a, b, 0);
    if (h != -1) {
        do {
            lenB = (((Wf*)b)->is_long == 0) ? (u32)((Bf*)b)->n : *(u32*)(b + 4);
            func_02009698(a, h, lenB, c);
            lenC = (((Wf*)c)->is_long == 0) ? (u32)((Bf*)c)->n : *(u32*)(c + 4);
            h = func_02030f04(a, b, h + lenC);
        } while (h != -1);
    }
}
