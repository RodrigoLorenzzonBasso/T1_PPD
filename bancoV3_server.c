/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "bancoV3.h"
#include <stdlib.h>

int sim_falha()
{
	srand(time(NULL));
	int num = rand() % 2;
	return num;
}

struct conta{
	long cpf;
	int senha;
	float val;
};

typedef struct conta conta;

conta contas[50];
int ops[1000];
static int id = 1;

int *
abreconta_1_svc(abre *argp, struct svc_req *rqstp)
{
	static int  result;

	long cpf = argp->cpf;
	int senha = argp->senha;
	int novo_id = argp->id;

	fprintf(stderr, "Requisicao de abertura de conta\n");

	for(int i=0;i<1000;i++)
	{
		if(novo_id == ops[i])
		{
			fprintf(stderr, "Operação com id %d ja executada\n", novo_id);
			result = 1;
			return &result;
		}
	}

	for(int i=0;i<50;i++)
	{
		if(contas[i].cpf == 0)
		{
			contas[i].cpf = cpf;
			contas[i].senha = senha;
			fprintf(stderr, "Conta criada na pos %d : cpf %ld : senha %d\n", i
																		 , contas[i].cpf
																		 , contas[i].senha);
			result = 1;
			break;
		}
		result = 0;
	}

	ops[novo_id-1] = novo_id;

	if(sim_falha() == 0)
		return &result;
	else
	{
		printf("Falha na comunicação\n");
		return NULL;
	}

	return &result;
}

int *
fechaconta_1_svc(int *argp, struct svc_req *rqstp)
{
	static int  result;

	int numConta = *argp;

	fprintf(stderr, "Requisicao de fechamento de conta\n");

	contas[numConta].cpf = 0;
	contas[numConta].senha = 0;
	contas[numConta].val = 0;

	result = 1;
	return &result;
}

int *
autentica_1_svc(info *argp, struct svc_req *rqstp)
{
	static int  result;

	long cpf = argp->cpf;
	int senha = argp->senha;

	fprintf(stderr, "Requisição de Autenticação\n");

	for(int i=0;i<50;i++)
	{
		if(contas[i].cpf == cpf && contas[i].senha == senha)
		{
			fprintf(stderr, "Conta na posicao %d\n",i);
			result = i;
			return &result;
		}
	}
	
	fprintf(stderr, "Conta não existente\n");

	result = -1;
	return &result;
}

int *
deposita_1_svc(dep *argp, struct svc_req *rqstp)
{
	static int  result;

	int numConta = argp->numConta;
	int novo_id = argp->id;
	float val = argp->val;

	fprintf(stderr, "Requisicao de depósito\n");

	for(int i=0;i<1000;i++)
	{
		if(novo_id == ops[i])
		{
			fprintf(stderr, "Operação com id %d ja executada\n", novo_id);
			result = 1;
			return &result;
		}
	}

	contas[numConta].val += val;

	return &result;
}

int *
retira_1_svc(ret *argp, struct svc_req *rqstp)
{
	static int  result;

	int numConta = argp->numConta;
	int novo_id = argp->id;
	float val = argp->val;

	fprintf(stderr, "Requisicao de saque\n");

	for(int i=0;i<1000;i++)
	{
		if(novo_id == ops[i])
		{
			fprintf(stderr, "Operação com id %d ja executada\n", novo_id);
			result = 1;
			return &result;
		}
	}

	contas[numConta].val -= val;

	return &result;
}

float *
consulta_1_svc(int *argp, struct svc_req *rqstp)
{
	static float  result;

	int numConta = *argp;

	result = contas[numConta].val;

	return &result;
}

int *
getid_1_svc(void *argp, struct svc_req *rqstp)
{
	static int  result;

	result = id;
	id++;

	return &result;
}

int *
deposita_2_svc(dep *argp, struct svc_req *rqstp)
{
	static int  result;

	int numConta = argp->numConta;
	int novo_id = argp->id;
	float val = argp->val;

	fprintf(stderr, "Requisicao de depósito\n");

	for(int i=0;i<1000;i++)
	{
		if(novo_id == ops[i])
		{
			fprintf(stderr, "Operação com id %d ja executada\n", novo_id);
			result = 1;
			return &result;
		}
	}

	contas[numConta].val += val;

	return &result;
}

int *
retira_2_svc(ret *argp, struct svc_req *rqstp)
{
	static int  result;

	int numConta = argp->numConta;
	int novo_id = argp->id;
	float val = argp->val;

	fprintf(stderr, "Requisicao de saque\n");

	for(int i=0;i<1000;i++)
	{
		if(novo_id == ops[i])
		{
			fprintf(stderr, "Operação com id %d ja executada\n", novo_id);
			result = 1;
			return &result;
		}
	}

	contas[numConta].val -= val;

	return &result;
}

float *
consulta_2_svc(int *argp, struct svc_req *rqstp)
{
	static float  result;

	int numConta = *argp;

	result = contas[numConta].val;

	return &result;
}

int *
getid_2_svc(void *argp, struct svc_req *rqstp)
{
	static int  result;

	result = id;
	id++;

	return &result;
}

int *
autentica_2_svc(info *argp, struct svc_req *rqstp)
{
	static int  result;

	long cpf = argp->cpf;
	int senha = argp->senha;

	fprintf(stderr, "Requisição de Autenticação\n");

	for(int i=0;i<50;i++)
	{
		if(contas[i].cpf == cpf && contas[i].senha == senha)
		{
			fprintf(stderr, "Conta na posicao %d\n",i);
			result = i;
			return &result;
		}
	}
	
	fprintf(stderr, "Conta não existente\n");

	result = -1;
	return &result;
}
