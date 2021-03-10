#ifndef musica_hpp
#define musica_hpp
#include <iostream>

class Musica{
  //Cria variaveis para armazenar cada musica e o ponteiro para proxima musica.
	private:
		std::string nomeMusica;
	  std::string nomeArtista;
		Musica *prox;
	public:
    //Sobrecarga do contrutor para adição da primeira musica (uso opcional)
		Musica(std::string musica, std::string artista){
      nomeMusica = musica;
      nomeArtista = artista;
      this->prox = NULL;
		}
    //Construtor e destrutor da classe (ambas vazias)
		Musica(){}
		~Musica(){}
		
    //Assinatura das funções implementadas em .cpp - gets e sets para manipular os atributos privados.
    
		std::string getMusica();
		std::string getArtista();
		Musica* getProx();
		void setProx(Musica *prox);
		void setMusica(std::string musica);
		void setArtista(std::string artista);		
};

#endif
