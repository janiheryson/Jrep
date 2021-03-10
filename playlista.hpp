#ifndef playlista_hpp
#define playlista_hpp
#include <iostream>
#include "musica.hpp"
#include "listaLigada.hpp"

// Cria a classe que armazenará a Playlist
class Playlist{

// Nome da playlist privada
  private:
    std::string nomePlaylist;
   
// Nome da playlist privada
  public:
    Lista *lista = NULL;

    Playlist(){
      lista = new Lista(); 
    }

    Playlist(std::string nomePlaylist){
      this->nomePlaylist = nomePlaylist;
      lista = new Lista(); 
    }
    // descontrustor da classe Playlist
    ~Playlist(){}

    std::string getNomePlaylist();

    // Manipula com gets e sets os atributos privados
    void setNomePlaylist(std::string nomePlaylist);

    // Função que cria uma nova playlist
    void criarPlaylist(std::string nomePlaylist);

    // Funçao que insere uma musica na playlist
    void inserirMusica(std::string nomeMusica, std::string nomeArtista);

    //Função que apaga uma musica de uma playlist com base no nome fornecido como parametro
    void apagarMusica(std::string nomeMusica);

    //Função que apaga uma musica da base de uma playlist
    void apagarMusicaBase();

    //Função exibe todas as musicas presentes em uma playlist
    void exibirMusicas();

     //Função apaga todas as musicas presentes em uma playlist e deleta a playlist
    void apagarPlalist();

     //Função procura uma determinada musica passada como parametroa em uma playlist
    bool ProcuraMusica(std::string nomeMusica);

    //Função sobrecarregada que insere uma determinada um conjunto de musicas pertencentes a outra playlist passada como parametro da função
    void inserirMusica(Playlist *p1, Playlist *p2);

    //Função cria uma copia de uma playlist e retorna essa copia.
    Playlist* construtor_copia (Playlist *p1);

    //Função que apaga todas as musicas de uma de uma playlist na outra..
    int apagarMusica(Playlist *p1);

    // Sobrecarga do operador + que recebe uma playlist e uma musica como parametro e insere a musica na playlist recebida
    friend Playlist* operator+(Playlist p1, Musica m);
    
    // Sobrecarga do operador + que recebe duas playlists como parametro e insere uma  na outra.
    friend Playlist* operator+(Playlist p1, Playlist p2);

    //Sobrecarga do operador >> que recebe uma playlist e uma musica como parametro e remove a musica na playlist recebida
    friend Musica operator>>(Playlist *p1, Musica m);

    //Sobrecarga do operador << que recebe uma playlist e uma musica como parametro e insere a musica na playlist recebida
    friend void operator<<(Playlist *p1, Musica m);

     //Sobrecarga do operador - que recebe uma playlist e uma musica como parametro e insere a musica na playlist recebida
    friend Playlist* operator-(Playlist *p1, Musica m);

};



#endif