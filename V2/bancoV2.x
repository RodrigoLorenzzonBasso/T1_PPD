struct abre{
    long cpf;
    int senha;
    int id;
};

struct info{
    long cpf;
    int senha;
};

struct dep{
    int numConta;
    float val;
    int id;
};

struct ret{
    int numConta;
    float val;
    int id;
};

program BANCO{
    version AGENCIA{
        int abreConta(abre) = 1;
        int fechaConta(int numConta) = 2;
        int autentica(info) = 3;
        int deposita(dep) = 4;
        int retira(ret) = 5;
        float consulta(int numConta) = 6;
        int getID() = 7;
    } = 1;

    version CAIXA{
        int deposita(dep) = 1;
        int retira(ret) = 2;
        float consulta(int numConta) = 3;
        int getID() = 4;
    } = 2;

} = 55555555;