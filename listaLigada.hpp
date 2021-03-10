#ifndef listaLigada_hpp
#define listaLigada_hpp
#include <iostream>
#include "musica.hpp"

// Cria a classe Lista armazenará a lista ligada
class Lista{
	private:
		Musica *head;
		Musica *tail;
	public:
		Lista(){
			head = NULL;
			tail = NULL;
      
		}
		Lista(std::string m, std::string a);
    
    // Destrutor da classe lista
		virtual ~Lista(){
    		delete head;
    	}

    // Metodos gets e sets para operar sobre as variaveis privadas;
    Musica* getHead();
    Musica* getTail();
    void setHead(Musica &m);
    void setTail(Musica &m);

    // Função que testa se a lista esta vazia (retorna true se tiver vazia)
		bool vazia();

    // Função que insere uma musica na base 
		void inserir_base(std::string musica, std::string artista);

    // Função que insere uma musica NO topo da lista 
		void inserir_topo(std::string musica, std::string artista);

    // Função sobrecarregada que insere uma playlist em outro 
    void inserir_base(Lista *l1, Lista *l2);

    // Construtor Copia função que apenas copia para outra lista
    Lista* construtor_copia (Lista *l1);

    //Funcão para remover uma lista de musicas de outra
    void remove_musica (Lista *l1);

    //Função que retorna o tamanho de uma lista
		int tamanho();

    //Função que retorna se uma musica existe em uma determinada lista (pesquisa apenas pelo nome da musica) retorna true caso encontre.
		bool existe (std::string musica);

    // Mpstra o conteudo de uma lista (elementos - musicas)
		void mostrar();

    //Remove o ultimo elemento (musica) de uma lista
		void remove_ultimo();

    //Remove uma musica especifica de uma lista
    void remove_musica (std::string musica);

    // sobrecarrega do operador + recebendo duas listas e concatenando-as
    friend Lista* operator + (Lista &l1, Lista &l2);

    // sobrecarrega do operador >> recebendp uma lista e uma musica e extraindo a musica na lista
    friend Musica* operator>>(Lista &l1, Musica *m);

    // sobrecarrega do operador << recebendp uma lista e uma musica e inserindo a musica na lista
    friend Lista* operator<<(Lista *l1, Musica m);
};

#endif
