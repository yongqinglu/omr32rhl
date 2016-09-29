/* Auto-generated public header file */
#ifndef HOOKSAMPLE_H
#define HOOKSAMPLE_H

#include "omrhookable.h"


/* Begin declarations block */

/* End declarations block */

/* TESTHOOK_EVENT1
Event 1

Example usage:
	(*hookable)->J9HookRegister(hookable, TESTHOOK_EVENT1, eventOccurred, NULL);

	static void
	eventOccurred(J9HookInterface** hookInterface, UDATA eventNum, void* voidData, void* userData)
	{
		TestHookEvent1* eventData = voidData;
		. . .
	}
 */
#define TESTHOOK_EVENT1 1
typedef struct TestHookEvent1 {
	uintptr_t count;
	intptr_t prevAgent;
} TestHookEvent1;

/* TESTHOOK_EVENT2
Event 2

Example usage:
	(*hookable)->J9HookRegister(hookable, TESTHOOK_EVENT2, eventOccurred, NULL);

	static void
	eventOccurred(J9HookInterface** hookInterface, UDATA eventNum, void* voidData, void* userData)
	{
		TestHookEvent2* eventData = voidData;
		. . .
	}
 */
#define TESTHOOK_EVENT2 2
typedef struct TestHookEvent2 {
	uintptr_t dummy1;
	uintptr_t count;
	intptr_t prevAgent;
} TestHookEvent2;

/* TESTHOOK_EVENT3
Event 3

Example usage:
	(*hookable)->J9HookRegister(hookable, TESTHOOK_EVENT3, eventOccurred, NULL);

	static void
	eventOccurred(J9HookInterface** hookInterface, UDATA eventNum, void* voidData, void* userData)
	{
		TestHookEvent3* eventData = voidData;
		. . .
	}
 */
#define TESTHOOK_EVENT3 3
typedef struct TestHookEvent3 {
	uintptr_t dummy1;
	uintptr_t dummy2;
	uintptr_t count;
	intptr_t prevAgent;
} TestHookEvent3;

/* TESTHOOK_EVENT4
Event 4

Example usage:
	(*hookable)->J9HookRegister(hookable, TESTHOOK_EVENT4, eventOccurred, NULL);

	static void
	eventOccurred(J9HookInterface** hookInterface, UDATA eventNum, void* voidData, void* userData)
	{
		TestHookEvent4* eventData = voidData;
		. . .
	}
 */
#define TESTHOOK_EVENT4 4
typedef struct TestHookEvent4 {
	uintptr_t dummy1;
	uintptr_t dummy2;
	uintptr_t dummy3;
	uintptr_t count;
	intptr_t prevAgent;
} TestHookEvent4;

#endif /* HOOKSAMPLE_H */
