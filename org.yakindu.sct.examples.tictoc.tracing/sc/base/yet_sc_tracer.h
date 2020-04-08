/** Generated by YAKINDU Statechart Tools code generator. */


#ifndef YET_SC_TRACER_H_
#define YET_SC_TRACER_H_


#include "sc_tracing.h"
#include "sc_yet.h"


#ifdef __cplusplus
extern "C" {
#endif


typedef void * sc_machine_ptr;

typedef struct {
	char* (*featureName)(sc_integer);
	char* (*featureValue)(sc_integer, const void*, char*);
	char* (*stateName)(sc_integer);
} yet_sc_trace_info_provider;


typedef struct {
	sc_trace_handler traceEventHandler;
	yet_scope scope;
	yet_sc_trace_info_provider traceinfoProvider;
	sc_machine_ptr machine;

	sc_integer skip_raised_in_event; // TODO : check if we can omit this hack
	sc_boolean is_running; // TODO: eliminate this - it is semantically incorrect
} yet_sc_tracer ;

extern void yet_init_sc_tracer(yet_sc_tracer *tracer, sc_machine_ptr machine, yet_handler actor);


#ifdef __cplusplus
}
#endif


#endif /* YET_SC_TRACER_H_ */
