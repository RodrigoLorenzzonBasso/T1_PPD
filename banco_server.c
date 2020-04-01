/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "banco.h"

struct conta{
	long cpf;
	int senha;
	float val;
};

typedef struct conta conta;

conta contas[50];

int *
abreconta_1_svc(info *argp, struct svc_req *rqstp)
{
	static int  result;

	fprintf(stderr, "Requisicao de abertura de conta\n");

	long cpf = argp->cpf;
	int senha = argp->senha;

	for(int i=0;i<50;i++)
	{
		if(contas[i].cpf == 0)
		{
			contas[i].cpf = cpf;
			contas[i].senha = senha;
			fprintf(stderr, "Conta criada na pos %d : cpf %ld : senha %d\n", i
																		 , contas[i].cpf
																		 , contas[i].senha);
			result = 0;
			break;
		}
		result = 1;
	}

	return &result;
}

int *
fechaconta_1_svc(info *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
autentica_1_svc(info *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
deposita_1_svc(dep *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
retira_1_svc(ret *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
consulta_1_svc(info *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
deposita_2_svc(dep *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
retira_2_svc(ret *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
consulta_2_svc(info *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}
