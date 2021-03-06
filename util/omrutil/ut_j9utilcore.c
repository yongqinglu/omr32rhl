/* File generated by tracegen, do not edit */
#include "ut_j9utilcore.h"



#define UT_TRACE_VERSION 8
UtTraceVersionInfo j9utilcore_UtTraceVersionInfo = {UT_TRACE_VERSION};
#if defined(UT_TRACE_ENABLED_IN_BUILD)
unsigned char j9utilcore_UtActive[5] = { 
	0,0,0,0,0};

unsigned char j9utilcore_UtLevels[5] = { 
	1,1,1,1,1};



UtGroupDetails j9utilcore_group4 = {
	(char *)"Debug",
	0,
	NULL,
	NULL};
int32_t j9utilcore_tpids3[] = {

	0,1,2,3,4	};

UtGroupDetails j9utilcore_group3 = {
	(char *)"Exception",
	5,
	j9utilcore_tpids3,
	&j9utilcore_group4};

UtGroupDetails j9utilcore_group2 = {
	(char *)"Event",
	0,
	NULL,
	&j9utilcore_group3};

UtGroupDetails j9utilcore_group1 = {
	(char *)"Exit",
	0,
	NULL,
	&j9utilcore_group2};

UtGroupDetails j9utilcore_group0 = {
	(char *)"Entry",
	0,
	NULL,
	&j9utilcore_group1};
UtModuleInfo j9utilcore_UtModuleInfo = {(char*) "j9utilcore", 10, 5, 0, j9utilcore_UtActive , NULL, NULL, &j9utilcore_UtTraceVersionInfo, (char*) "J9TraceFormat.dat", j9utilcore_UtLevels, &j9utilcore_group0, NULL, NULL, 0, 0};

#else
unsigned char j9utilcore_UtActive[1];
UtModuleInfo j9utilcore_UtModuleInfo = {(char*) "j9utilcore", 10, 0, 0, NULL, NULL, NULL, &j9utilcore_UtTraceVersionInfo, (char*) "J9TraceFormat.dat", NULL, NULL, NULL, NULL, 0, 0};

#endif /* defined(UT_TRACE_ENABLED_IN_BUILD) */

#if defined(UT_DIRECT_TRACE_REGISTRATION)

/* function to register with trace engine and configure current module */
int32_t
registerj9utilcoreWithTrace(UtInterface *utIntf, UtModuleInfo * containerModule)
{
	I_32 rc = 0;

#if defined(UT_TRACE_ENABLED_IN_BUILD)

	j9utilcore_UtModuleInfo.containerModule = containerModule;

	if( utIntf == NULL ) {
		rc = -1;
	}

	if (rc == 0) {
		utIntf->module->TraceInit(NULL, &j9utilcore_UtModuleInfo);
	}

#else
	/* trace not present in build - NOOP */
#endif /* defined(UT_TRACE_ENABLED_IN_BUILD) */
	return rc;
}

/* function to deregister with trace engine and configure current module */
int32_t
deregisterj9utilcoreWithTrace(UtInterface *utIntf)
{
	I_32 rc = 0;

#if defined(UT_TRACE_ENABLED_IN_BUILD)
	if( utIntf == NULL ) {
		rc = -1;
	}

	if (rc == 0) {
		utIntf->module->TraceTerm(NULL, &j9utilcore_UtModuleInfo);
	}
#else
	/* trace not present in build - NOOP */
#endif /* defined(UT_TRACE_ENABLED_IN_BUILD) */
	return rc;
}

#else /* defined(UT_DIRECT_TRACE_REGISTRATION) */

/* function to register with trace engine and configure current module */
int32_t
registerj9utilcoreWithTrace(JavaVM *vm, UtModuleInfo * containerModule)
{
	I_32 rc = JNI_OK;

#if defined(UT_TRACE_ENABLED_IN_BUILD)
	UtInterface *utIntf;

	j9utilcore_UtModuleInfo.containerModule = containerModule;

	if( vm != NULL ) {
		rc = (*vm)->GetEnv(vm, (void**)&utIntf, UTE_VERSION_1_1);
	} else {
		rc = JNI_ERR;
	}

	if (rc == JNI_OK) {
		utIntf->module->TraceInit(NULL, &j9utilcore_UtModuleInfo);
	}

#else
	/* trace not present in build - NOOP */
#endif /* defined(UT_TRACE_ENABLED_IN_BUILD) */
	return rc;
}

/* function to deregister with trace engine and configure current module */
int32_t
deregisterj9utilcoreWithTrace(JavaVM *vm)
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
		utIntf->module->TraceTerm(NULL, &j9utilcore_UtModuleInfo);
	}
#else
	/* trace not present in build - NOOP */
#endif /* defined(UT_TRACE_ENABLED_IN_BUILD) */
	return rc;
}

#endif /* defined(UT_DIRECT_TRACE_REGISTRATION) */

/* End of generated file */
