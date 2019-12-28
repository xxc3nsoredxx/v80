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
 * The Z80 special registers (8 bit)
 * [I, R]
 */
uint8_t spec_regs_8 [2];

/*
 * The Z80 special registers (16 bit)
 * [IX, IY, SP, PC]
 */
uint16_t spec_regs_16 [4];

/*
 * Z80 address bus (16 bits)
 * Output
 */
uint16_t addr_bus;

/*
 * Z80 data bus (8 bits)
 * Input/output
 */
uint8_t data_bus;

/*
 * Z80 system control pins
 */
struct {
    unsigned int m1     : 1; /* out */
    unsigned int mreq   : 1; /* out */
    unsigned int iorq   : 1; /* out */
    unsigned int rd     : 1; /* out */
    unsigned int wr     : 1; /* out */
    unsigned int rfsh   : 1; /* out */
} sysctl_pins;

/*
 * Z80 CPU control pins
 */
struct {
    unsigned int halt   : 1; /* out */
    unsigned int wait   : 1; /* in */
    unsigned int int_   : 1; /* in */
    unsigned int nmi    : 1; /* in */
    unsigned int reset  : 1; /* in */
} cpuctl_pins;

/*
 * Z80 CPU bus control pins
 */
struct {
    unsigned int busrq  : 1; /* in */
    unsigned int busack : 1; /* out */
} busctl_pins;

/*
 * Z80 power pins
 */
struct {
    unsigned int clk    : 1; /* in */
    unsigned int volt   : 1; /* in */
    unsigned int gnd    : 1; /* in */
} pwr_pins;

/*
 * Simulate providing power to the Z80
 */
void v80_start () {
    return;
}
