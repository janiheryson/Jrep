#include <iostream>
#include "musica.hpp"

using namespace std;

//Funções gets e sets para retornar e modificar a musica

string Musica::getMusica(){
	return this->nomeMusica;
}
		
string Musica::getArtista(){
	return this->nomeArtista;
}
		
Musica* Musica::getProx(){
	return this->prox;
}
		
void Musica::setProx(Musica *prox){
	this->prox = prox;
}
		
void Musica::setMusica(std::string musica){
	this->nomeMusica = musica;
}
		
void Musica::setArtista(std::string artista){
	this->nomeArtista = artista;
}	
