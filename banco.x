struct info{
    long cpf;
    int senha;
};

struct dep{
    long cpf;
    long cpfDest;
    float val;
    int senha;
};

struct ret{
    long cpf;
    float val;
    int senha;
};

program BANCO{
    version AGENCIA{
        int abreConta(info) = 1;
        int fechaConta(info) = 2;
        int autentica(info) = 3;
        int deposita(dep) = 4;
        int retira(ret) = 5;
        int consulta(info) = 6;
    } = 1;

    version CAIXA{
        int deposita(dep) = 1;
        int retira(ret) = 2;
        int consulta(info) = 3;
    } = 2;

} = 55555555;