#pragma once
#define MIN_INSN_SIZE 1
/* min([18 * 3,
 *      4 + 18 + 15 + 18,
 *      6 + 12])
 * See transform_dis_* for size figures.  Technically unsafe, since we don't
 * check for overlong x86 instructions. */
#define TD_MAX_REWRITTEN_SIZE 55

struct arch_pcrel_info {
    int reg;
};

struct arch_dis_ctx {};
static inline void arch_dis_ctx_init(UNUSED struct arch_dis_ctx *ctx) {}
static inline int arch_code_alignment(UNUSED struct arch_dis_ctx ctx) {
   return 4;
}
