/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "test.h"

int *
add_1_svc(param *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	printf("Requisição add!\n");

	result = argp->x + argp->y;

	return &result;
}

int *
sub_1_svc(param *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	
	printf("Requisição sub!\n");

	result = argp->x - argp->y;

	return &result;
}
