#ifndef GOTO_H
#define GOTO_H

#define GOTO(fcn) do {extern void (*g_fcn)(); g_fcn = (fcn); return;} while(0)

#endif