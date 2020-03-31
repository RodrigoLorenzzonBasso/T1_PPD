/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TEST_H_RPCGEN
#define _TEST_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct param {
	int x;
	int y;
};
typedef struct param param;

#define PROG 55555555
#define VERSAO 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD 1
extern  int * add_1(param *, CLIENT *);
extern  int * add_1_svc(param *, struct svc_req *);
#define SUB 2
extern  int * sub_1(param *, CLIENT *);
extern  int * sub_1_svc(param *, struct svc_req *);
extern int prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD 1
extern  int * add_1();
extern  int * add_1_svc();
#define SUB 2
extern  int * sub_1();
extern  int * sub_1_svc();
extern int prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_param (XDR *, param*);

#else /* K&R C */
extern bool_t xdr_param ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TEST_H_RPCGEN */
