#ifndef MAIN_H
#define MAIN_H

/**
 * File name - main.h
 * Author: Martinez Oghenetejiri E.
 * Git: @BlackTeji
 * Desc: File containing prototypes of all
 * created functions in the 0x14.c - Bit Manipulation
 */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);

#endif
