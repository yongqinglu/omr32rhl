/* File generated by tracegen, do not edit */
#include "ut_hashtable.h"



#define UT_TRACE_VERSION 8
UtTraceVersionInfo hashtable_UtTraceVersionInfo = {UT_TRACE_VERSION};
#if defined(UT_TRACE_ENABLED_IN_BUILD)
unsigned char hashtable_UtActive[5] = { 
	1,1,1,0,0};

unsigned char hashtable_UtLevels[5] = { 
	1,1,1,1,1};


int32_t hashtable_tpids5[] = {

	0,1,2	};

UtGroupDetails hashtable_group5 = {
	(char *)"Assertion",
	3,
	hashtable_tpids5,
	NULL};

UtGroupDetails hashtable_group4 = {
	(char *)"Debug",
	0,
	NULL,
	&hashtable_group5};

UtGroupDetails hashtable_group3 = {
	(char *)"Exception",
	0,
	NULL,
	&hashtable_group4};

UtGroupDetails hashtable_group2 = {
	(char *)"Event",
	0,
	NULL,
	&hashtable_group3};
int32_t hashtable_tpids1[] = {

	4	};

UtGroupDetails hashtable_group1 = {
	(char *)"Exit",
	1,
	hashtable_tpids1,
	&hashtable_group2};
int32_t hashtable_tpids0[] = {

	3	};

UtGroupDetails hashtable_group0 = {
	(char *)"Entry",
	1,
	hashtable_tpids0,
	&hashtable_group1};
UtModuleInfo hashtable_UtModuleInfo = {(char*) "hashtable", 9, 5, 0, hashtable_UtActive , NULL, NULL, &hashtable_UtTraceVersionInfo, (char*) "J9TraceFormat.dat", hashtable_UtLevels, &hashtable_group0, NULL, NULL, 0, 0};

#else
unsigned char hashtable_UtActive[1];
UtModuleInfo hashtable_UtModuleInfo = {(char*) "hashtable", 9, 0, 0, NULL, NULL, NULL, &hashtable_UtTraceVersionInfo, (char*) "J9TraceFormat.dat", NULL, NULL, NULL, NULL, 0, 0};

#endif /* defined(UT_TRACE_ENABLED_IN_BUILD) */

#if defined(UT_DIRECT_TRACE_REGISTRATION)

/* function to register with trace engine and configure current module */
int32_t
registerhashtableWithTrace(UtInterface *utIntf, UtModuleInfo * containerModule)
{
	I_32 rc = 0;

#if defined(UT_TRACE_ENABLED_IN_BUILD)

	hashtable_UtModuleInfo.containerModule = containerModule;

	if( utIntf == NULL ) {
		rc = -1;
	}

	if (rc == 0) {
		utIntf->module->TraceInit(NULL, &hashtable_UtModuleInfo);
	}

#else
	/* trace not present in build - NOOP */
#endif /* defined(UT_TRACE_ENABLED_IN_BUILD) */
	return rc;
}

/* function to deregister with trace engine and configure current module */
int32_t
deregisterhashtableWithTrace(UtInterface *utIntf)
{
	I_32 rc = 0;

#if defined(UT_TRACE_ENABLED_IN_BUILD)
	if( utIntf == NULL ) {
		rc = -1;
	}

	if (rc == 0) {
		utIntf->module->TraceTerm(NULL, &hashtable_UtModuleInfo);
	}
#else
	/* trace not present in build - NOOP */
#endif /* defined(UT_TRACE_ENABLED_IN_BUILD) */
	return rc;
}

#else /* defined(UT_DIRECT_TRACE_REGISTRATION) */

/* function to register with trace engine and configure current module */
int32_t
registerhashtableWithTrace(JavaVM *vm, UtModuleInfo * containerModule)
{
	I_32 rc = JNI_OK;

#if defined(UT_TRACE_ENABLED_IN_BUILD)
	UtInterface *utIntf;

	hashtable_UtModuleInfo.containerModule = containerModule;

	if( vm != NULL ) {
		rc = (*vm)->GetEnv(vm, (void**)&utIntf, UTE_VERSION_1_1);
	} else {
		rc = JNI_ERR;
	}

	if (rc == JNI_OK) {
		utIntf->module->TraceInit(NULL, &hashtable_UtModuleInfo);
	}

#else
	/* trace not present in build - NOOP */
#endif /* defined(UT_TRACE_ENABLED_IN_BUILD) */
	return rc;
}

/* function to deregister with trace engine and configure current module */
int32_t
deregisterhashtableWithTrace(JavaVM *vm)
{
	I_32 rc = JNI_OK;

#if defined(UT_TRACE_ENABLED_IN_BUILD)
	UtInterface *utIntf;

	if( vm != NULL ) {
		rc = (*vm)->GetEnv(vm, (void**)&utIntf, UTE_VERSION_1_1);
	} else {
		rc = JNI_ERR;
	}

	if (rc == JNI_OK) {
		utIntf->module->TraceTerm(NULL, &hashtable_UtModuleInfo);
	}
#else
	/* trace not present in build - NOOP */
#endif /* defined(UT_TRACE_ENABLED_IN_BUILD) */
	return rc;
}

#endif /* defined(UT_DIRECT_TRACE_REGISTRATION) */

/* End of generated file */