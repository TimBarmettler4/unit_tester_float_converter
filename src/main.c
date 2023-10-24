/********************************************************************************
Subject:        Software Engineering
Description:    Main Programm, where the input comes from

Autor:          Tim Barmettler & Yan Gridling
Firma:          FHGR / Mobile Robotics
Version:        1.0
Date:           24.10.2023

Plattform:      Visual Studio Community / Windows

Changes:
1.0 			Create Program
********************************************************************************/


/********************************************************************************
Includes
********************************************************************************/
#include <stdio.h>

#include "float.h"


/********************************************************************************
Main
********************************************************************************/
int main()
{
    uint64_t n = 2147483647UL;
    //uint64_t n = 18446744073709551557ULL;
    printf("Number %llu is %s prime\n",
        n, is_prime(n) ? "a" : "no");
}
