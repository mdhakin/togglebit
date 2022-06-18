/*
mhakin@Matts_desktop:/mnt/c/Users/mhaki/OneDrive/code/c/togglebit$ gdb toggle.out
GNU gdb (Debian 10.1-1.7) 10.1.90.20210103-git
Copyright (C) 2021 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from toggle.out...
(gdb) b 74
Breakpoint 1 at 0x11a7: file toggle.c, line 74.
(gdb) b 76
Breakpoint 2 at 0x11d0: file toggle.c, line 76.
(gdb) run
Starting program: /mnt/c/Users/mhaki/OneDrive/code/c/togglebit/toggle.out 

Breakpoint 1, main (argc=1, argv=0x7fffffffe1e8) at toggle.c:74
74          scanf("%d",&iPos); //toggle the nth bit. 
(gdb) n
0
75          toggle(ptr, iPos);
(gdb) p /t cData
$1 = 11111000
(gdb) n
0

Breakpoint 2, main (argc=1, argv=0x7fffffffe1e8) at toggle.c:76
76          printf("Hello World \n");
(gdb) p /t cData
$2 = 11111001
(gdb) n
Hello World

        Inferior 1 [process 147] will be killed.
*/














#include <stdio.h>


void toggle(char *b, int iPos)
{
    scanf("%d",&iPos); //toggle the nth bit. 
    *b ^= 1<<iPos; 
}


int main(int argc, char *argv[])
{
    unsigned char cData=0xF8; 
    unsigned char* ptr = &cData;
    int iPos; 
    scanf("%d",&iPos); //toggle the nth bit. 
    toggle(ptr, iPos);
    printf("Hello World \n");
    return 0; 
}