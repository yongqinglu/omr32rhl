/* Auto-generated private header file */

/* This file should be included by the IMPLEMENTOR of the hook interface
 * It is not required by USERS of the hook interface
 */

#ifndef HOOKSAMPLE_INTERNAL_H
#define HOOKSAMPLE_INTERNAL_H

#include "hooksample.h"

#define ALWAYS_TRIGGER_TESTHOOK_EVENT1(hookInterface, arg_count, arg_prevAgent) \
	do { \
		struct TestHookEvent1 eventData; \
		eventData.count = (arg_count); \
		eventData.prevAgent = (arg_prevAgent); \
		(*J9_HOOK_INTERFACE(hookInterface))->J9HookDispatch(J9_HOOK_INTERFACE(hookInterface), TESTHOOK_EVENT1, &eventData); \
		(arg_count) = eventData.count; /* return argument */ \
	} while (0)

#define TRIGGER_TESTHOOK_EVENT1(hookInterface, arg_count, arg_prevAgent) \
	do { \
		if (J9_EVENT_IS_HOOKED(hookInterface, TESTHOOK_EVENT1)) { \
			ALWAYS_TRIGGER_TESTHOOK_EVENT1(hookInterface, arg_count, arg_prevAgent); \
		} \
	} while (0)

#define ALWAYS_TRIGGER_TESTHOOK_EVENT2(hookInterface, arg_dummy1, arg_count, arg_prevAgent) \
	do { \
		struct TestHookEvent2 eventData; \
		eventData.dummy1 = (arg_dummy1); \
		eventData.count = (arg_count); \
		eventData.prevAgent = (arg_prevAgent); \
		(*J9_HOOK_INTERFACE(hookInterface))->J9HookDispatch(J9_HOOK_INTERFACE(hookInterface), TESTHOOK_EVENT2, &eventData); \
		(arg_count) = eventData.count; /* return argument */ \
	} while (0)

#define TRIGGER_TESTHOOK_EVENT2(hookInterface, arg_dummy1, arg_count, arg_prevAgent) \
	do { \
		if (J9_EVENT_IS_HOOKED(hookInterface, TESTHOOK_EVENT2)) { \
			ALWAYS_TRIGGER_TESTHOOK_EVENT2(hookInterface, arg_dummy1, arg_count, arg_prevAgent); \
		} \
	} while (0)

#define ALWAYS_TRIGGER_TESTHOOK_EVENT3(hookInterface, arg_dummy1, arg_dummy2, arg_count, arg_prevAgent) \
	do { \
		struct TestHookEvent3 eventData; \
		eventData.dummy1 = (arg_dummy1); \
		eventData.dummy2 = (arg_dummy2); \
		eventData.count = (arg_count); \
		eventData.prevAgent = (arg_prevAgent); \
		(*J9_HOOK_INTERFACE(hookInterface))->J9HookDispatch(J9_HOOK_INTERFACE(hookInterface), TESTHOOK_EVENT3, &eventData); \
		(arg_count) = eventData.count; /* return argument */ \
	} while (0)

#define TRIGGER_TESTHOOK_EVENT3(hookInterface, arg_dummy1, arg_dummy2, arg_count, arg_prevAgent) \
	do { \
		if (J9_EVENT_IS_HOOKED(hookInterface, TESTHOOK_EVENT3)) { \
			ALWAYS_TRIGGER_TESTHOOK_EVENT3(hookInterface, arg_dummy1, arg_dummy2, arg_count, arg_prevAgent); \
		} \
	} while (0)

#define ALWAYS_TRIGGER_TESTHOOK_EVENT4(hookInterface, arg_dummy1, arg_dummy2, arg_dummy3, arg_count, arg_prevAgent) \
	do { \
		struct TestHookEvent4 eventData; \
		eventData.dummy1 = (arg_dummy1); \
		eventData.dummy2 = (arg_dummy2); \
		eventData.dummy3 = (arg_dummy3); \
		eventData.count = (arg_count); \
		eventData.prevAgent = (arg_prevAgent); \
		(*J9_HOOK_INTERFACE(hookInterface))->J9HookDispatch(J9_HOOK_INTERFACE(hookInterface), TESTHOOK_EVENT4, &eventData); \
		(arg_count) = eventData.count; /* return argument */ \
	} while (0)

#define TRIGGER_TESTHOOK_EVENT4(hookInterface, arg_dummy1, arg_dummy2, arg_dummy3, arg_count, arg_prevAgent) \
	do { \
		if (J9_EVENT_IS_HOOKED(hookInterface, TESTHOOK_EVENT4)) { \
			ALWAYS_TRIGGER_TESTHOOK_EVENT4(hookInterface, arg_dummy1, arg_dummy2, arg_dummy3, arg_count, arg_prevAgent); \
		} \
	} while (0)

typedef struct SampleHookInterface {
	struct J9CommonHookInterface common;
	U_8 flags[5];
	J9HookRecord* hooks[5];
} SampleHookInterface;

#endif /* HOOKSAMPLE_INTERNAL_H */
