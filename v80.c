#include <stdint.h>

#include "v80.h"

/*
 * The Z80 main register banks
 * [A, B, D, H]
 * [F, C, E, L]
 */
uint8_t gen_regs [2][4];

/*
 * The Z80 alternate register banks
 * [A', B', D', H']
 * [F', C', E', L']
 */
uint8_t gen_regs_alt [2][4];

/*
 * Simulate providing power to the Z80
 */
void v80_start () {
    
}
