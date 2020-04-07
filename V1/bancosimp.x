struct conf{
    int cpf;
    int valor;
};

program BANCO{

    version VERSAO{
        int abreConta(int cpf) = 1;
        int fechaConta(int cpf) = 2;
        int autentica(int cpf) = 3;
        int deposita(conf) = 4;
        int retira(conf) = 5;
        int consulta(int cpf) = 6;
    } = 1;

} = 55555555;