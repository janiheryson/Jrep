#include <iostream>
#include "musica.hpp"
#include "listaLigada.hpp"
#include "playlista.hpp"

using namespace std;

void Playlist::setNomePlaylist(string nomePlaylist){
  this->nomePlaylist = nomePlaylist;
}

string Playlist::getNomePlaylist(){
  return this->nomePlaylist;
}

void Playlist::criarPlaylist(string nomePlaylist){
  this->nomePlaylist = nomePlaylist;
  
}

//Implementação dos métodos da 2ª entrega----------------------------

void Playlist::inserirMusica(Playlist *p1, Playlist *p2){

  Musica *m = p1->lista->getHead();

  while(m->getProx() != NULL){
    m = m->getProx();
  }
  m->setProx(p2->lista->getHead());

  cout << "Playlist concatenadas com sucesso!!!";

}

Playlist* Playlist::construtor_copia (Playlist *p1){
  Playlist *nova = new Playlist();

  Musica *c = p1->lista->getHead();
  while(c != NULL){
    nova->lista->inserir_base(c->getMusica(), c->getArtista());
    c = c->getProx();
  }
  return nova;
}

int Playlist::apagarMusica(Playlist *p1){
  int num = 0;
  return num;
}

Playlist* operator+(Playlist p1, Musica m){
  Playlist *nova = new Playlist();

  Musica c = *p1.lista->getHead();
  nova->lista->setHead(c);

  while(c.getProx() != NULL){
    nova->inserirMusica(c.getMusica(), c.getArtista());
    c = *c.getProx();
  }
  
  return nova;
}

Playlist* operator+(Playlist p1, Playlist p2){
  Playlist *nova = new Playlist();
  Musica *m1 = p1.lista->getHead();
  Musica *m2 = p2.lista->getHead();

  return nova;
}

Musica operator>>(Playlist *p1, Musica m){
  
  if(p1->lista->vazia()){
    cout << "Playlista Vazia!!!\nRetorno NULL\n";
  }
  else{
    Musica *c = p1->lista->getHead();
    while(c != NULL){
      if(c->getProx()->getProx() == NULL){
        m.setMusica(c->getProx()->getMusica());
        m.setArtista(c->getProx()->getArtista());
        c->setProx(NULL);
        break;
      }
    }
  }
  return m;
}

void operator<<(Playlist *p1, Musica m){
  Musica *c = p1->lista->getHead();
  while(c != NULL){
    c = c->getProx();
  }
  c->setMusica(m.getMusica());
  c->setArtista(m.getArtista());
  c->setProx(NULL);

}

Playlist* operator-(Playlist *p1, Musica m){
  Playlist *nova = new Playlist();

  nova ->construtor_copia(p1);
  
  if(nova->ProcuraMusica(m.getMusica())){
     nova->apagarMusica(m.getMusica());
  }else{
    cout << "Musica inexistente";
  }

  return nova;
}

//Fim da Implementação dos metodos da 2ª entrega-----------------------

void Playlist::inserirMusica(string nomeMusica, string nomeArtista){
  lista->inserir_topo(nomeMusica, nomeArtista);
}

void Playlist::apagarMusica(string nomeMusica){
  lista->remove_musica(nomeMusica);
}

void Playlist::apagarMusicaBase(){
  lista->remove_ultimo();
}

void Playlist::exibirMusicas(){
  lista->mostrar();
}

void Playlist::apagarPlalist(){
  delete(lista);
}

bool Playlist::ProcuraMusica(string nomeMusica){
  bool temp = lista->existe(nomeMusica);
  return temp;
}