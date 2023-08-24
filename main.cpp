#include <iostream>
#include <vector>

using namespace std;


class alunos{
    private:
    string nome;
    string cpf;
    string idade;
    string serie;
    long int matricula;

    public:
    //contrutor
    alunos(){ }
    //contrutor com paremetros
    alunos (string nome,string cpf,string idade,string serie,long int matricula){
        this->nome=nome;
        this->cpf=cpf;
        this->idade=idade;
        this->serie=serie;
        this->matricula=matricula;
    }
    //metodos gets
    string get_nome(){ return this->nome;}
    string get_cpf(){ return this->cpf;}
    string get_idade(){ return this->idade;}
    string get_serie(){ return this->serie;}
    long int get_matricula(){ return this->matricula;}

   //metodos set
    void set_nome(string nome){ 
         this->nome=nome; 
    }

    void set_cpf(string cpf){ 
        this->cpf=cpf;
    }
    void set_idade(string idade){ 
         this->idade=idade;
    }

    void set_serie(string serie){
         this->serie=serie;
    }
    void set_matricula(long int matricula){ 
        this->matricula=matricula;
    }

 };
class fucionario{
    private:
    string nome;
    string cpf;
    string idade;
    string cargo;
    float salario;

    public:
    //contrutor
    fucionario(){ }
    //contrutor com paremetros
    fucionario (string nome,string cpf,string idade,string cargo,float salario){
        this->nome=nome;
        this->cpf=cpf;
        this->idade=idade;
        this->cargo=cargo;
        this->salario=salario;
    }
    //metodos gets
    string get_nome(){ return this->nome;}
    string get_cpf(){ return this->cpf;}
    string get_idade(){ return this->idade;}
    string get_cargo(){ return this->cargo;}
    float get_salario(){ return this->salario;}

   //metodos set
    void set_nome(string nome){ 
         this->nome=nome; 
    }

    void set_cpf(string cpf){ 
        this->cpf=cpf;
    }
    void set_idade(string idade){ 
         this->idade=idade;
    }

    void set_cargo(string cargo){
         this->cargo=cargo;
    }
    void set_salrio(float salario){ 
        this->salario=salario;
    }

 };

    
class escola{

    string nome_escola;
    string cnpj;
    vector<alunos>alunos_vet;
    vector<fucionario>fucionario_vet;
    public:
     
    void add_funcionarios(string nome,string cpf,string idade,string cargo,float salario){
  //  fucionario  pessoa_temp;
    fucionario pessoa_temp( nome, cpf, idade, cargo,salario);
    fucionario_vet.push_back(pessoa_temp);
    }

    void add_aluno(string nome,string cpf,string idade,string serie,long int matricula){
   // alunos pessoa_temp;
    alunos pessoa_temp( nome, cpf, idade,serie,matricula);
    alunos_vet.push_back(pessoa_temp);
    }
    
    void listar_funcionarios(){
      cout<<"\n Lista de funcionarios\n";
        for (int i=0;i<fucionario_vet.size();i++){
            cout<<"-NOME: "<<fucionario_vet[i].get_nome();
            cout<<"|CPF: "<<fucionario_vet[i].get_cpf();
            cout<<"|SALARIO: "<<fucionario_vet[i].get_salario();
            cout<<"|IDADE:" <<fucionario_vet[i].get_idade();
            cout<<"|CARGO:" <<fucionario_vet[i].get_cargo();
            cout<<endl;
    }
    }
    void listar_alunos(){
       cout<<"\n Lista de alunos\n";
        for (int i=0;i<alunos_vet.size();i++){
            cout<<"-NOME: "<<alunos_vet[i].get_nome();
            cout<<"|CPF: "<<alunos_vet[i].get_cpf();
            cout<<"|SERIE: "<<alunos_vet[i].get_serie();
            cout<<"|IDADE:" <<alunos_vet[i].get_idade();
            cout<<"|MATRICULA:" <<alunos_vet[i].get_matricula();
            cout<<endl;
    }
    }
    void soma_salrio(){
        int soma=0;
        for(auto i : fucionario_vet){
            soma +=i.get_salario();
        }
        cout<<"\nA soma é:"<<soma;
    }
};

int main(){


    escola *ufrn = new escola();
    cout<<"BEM VINDO:"<<endl;
    int op;
    string nome;
    string cpf;
    string idade;
    string serie;
    string cargo;
    float salario;
    long int matricula;
    while ( true){
        cout<<"\n[1]-adiconar alunos\n";
        cout<<"[2]-adiconar funcionarios\n";
        cout<<"[3]-listar alunos\n";
        cout<<"[4]-listar funcionarios\n";
        cout<<"[5]-Soma dos salarios dos funcionarios \n";
        cout<<"[999] parar\n\n\n";

        cout<<"Qual opcao:";
        cin>>op;
        if(op == 999){
          break;
        }
        else if (op == 1){
            cout<<"\n========================================= \n";
            cout<<"Qual nome?";
            cin>>nome;
            cout<<"Idade:";
            cin>>idade;
            cout<<"CPF:";
            cin>>cpf;
            cout<<"Serie:";
            cin>>serie;
            cout<<"Matricula:";
            cin>>matricula;
           cout<<"\n========================================= \n";
          ufrn->add_aluno( nome, cpf, idade, serie, matricula);
        }
        else if(op ==2){
           
             cout<<"\n========================================= \n";
            cout<<"Qual nome?";
            cin>>nome;
            cout<<"Idade:";
            cin>>idade;
            cout<<"CPF:";
            cin>>cpf;
            cout<<"cargo:";
            cin>>cargo;
            cout<<"Salario:";
            cin>>salario;
            cout<<"\n========================================= \n";

          ufrn->add_funcionarios( nome,cpf, idade,cargo, salario);
        }
         else if(op==3){
             cout<<"\n========================================= \n";
               ufrn->listar_alunos();
             cout<<"\n========================================= \n";
         }
         else if(op==4){
             cout<<"\n========================================= \n";
               ufrn->listar_funcionarios();
             cout<<"\n========================================= \n";
         }
         else if (op==5){
             cout<<"\n========================================= \n";
           ufrn->soma_salrio();
             cout<<"\n========================================= \n";
         }
         
         }
        

}