#include <iostream>
#include "musica.hpp"
#include "listaLigada.hpp"

using namespace std;

Musica* Lista::getHead(){
      return head;
    }
Musica* Lista::getTail(){
      return tail;
    }
void Lista::setHead(Musica &m){
     head = &m;
    }
void Lista::setTail(Musica &m){
      tail = &m;
    }

bool Lista::vazia(){
	return (head == NULL);
}

Lista::Lista(std::string m, std::string a){
		    head = new Musica(m, a);
		    tail = head;
        tail->setProx(NULL);
		}

void Lista::inserir_topo(string musica, string artista){
    Musica *nova = new Musica(musica, artista);
    nova->setProx(head);
    head = nova;
  }

void Lista::inserir_base(string musica, string artista){
	Musica *nova = new Musica(musica, artista);
	if (head == NULL){
      head = nova;
      tail = nova;
    }
    else{
      tail->setProx(nova);
      tail = nova;
    }
}

//Implementações da segunda entrega -------------------

void Lista::inserir_base(Lista *l1, Lista *l2){
  Musica *m = l1->getHead();
  while(m->getProx() != NULL){
    m = m->getProx();
  }
  m->setProx(l2->getHead());
}

Lista* Lista::construtor_copia (Lista *l1){
  Lista *nova = new Lista();
  Musica *c = l1->getHead();
  while(c != NULL){
    nova->inserir_base(c->getMusica(), c->getArtista());
    c = c->getProx();
  }
  return nova;
}

void Lista::remove_musica (Lista *l1){

}

Lista* operator+(Lista &l1, Lista &l2){
  Lista *l3 = new Lista();
  l3->setHead(*l1.getHead());
  Musica *c = l3->getHead();
  while (c->getProx() != NULL){
    c = c->getProx();
  }
  c->setProx(l2.getHead());
  return l3;
}

Musica* operator>>(Lista &l1, Musica *m){
  if (l1.vazia()){
    return NULL;
  }else{
    m = l1.getHead();
    while (m->getProx() != NULL){
    m = m->getProx();
    }
  }
  return m;
}

Lista* operator<<(Lista *l1, Musica m){
  Musica *nova = new Musica();
  nova->setMusica(m.getMusica());
  nova->setArtista(m.getArtista());
  nova->setProx(NULL);
   
  l1->getTail()->setProx(nova);
  l1->setTail(*nova);

  return l1;
}

//Fim da implementações da segunda entrega------------------

void buscaRecursiva (Musica *c){
  if (c != NULL){
    cout << c->getMusica() << endl;
    cout << c->getArtista() << endl;
    cout <<"\n";
    buscaRecursiva (c->getProx());
  }
  else{
  }
}

void Lista::mostrar(){
    Musica * c = head;

    if(vazia()){
      cout << "Lista Vazia";
	
    }
    else{
      buscaRecursiva(c);
      
      /*while(c){
        cout << c->getMusica() << endl;
        cout << c->getArtista() << endl;
        c = c->getProx();
        cout << endl;
      }*/
	}
}
	
int Lista::tamanho(){
	if (vazia()){
	    return 0;
	}else{
	    Musica* c = head;
	    int tam = 0;
	    do{
	    	c = c->getProx();
	        tam++;
	    }while(c);
	      	return tam;
	    }
}

bool Lista::existe (string musica){
    Musica* c = head;
    while(c){
      if(c->getMusica() == musica){
        return true;
      }else{
        c = c->getProx();
        
      }
    }
    return false;
}

void Lista::remove_ultimo(){
	if(!vazia()){
		if(head->getProx() == NULL){
			delete(head);
		}else if(head->getProx()->getProx() == NULL){
			delete(head->getProx());
		}else{
			Musica* antepenultima = head;
			Musica* penultima = head->getProx();
			Musica* ultima = penultima->getProx();
			
			while(ultima != NULL){
				Musica *auxiliar = penultima;
				penultima = ultima;
				antepenultima = auxiliar;
				ultima = ultima->getProx();
			}
		}
	}
}
void Lista::remove_musica (string musica){
   Musica* c = head;
   Musica* ant = c;
    while(c){
      if(c->getMusica() == musica){
        if(c->getProx() == NULL){
          ant->setProx(NULL);
          delete(c);
          break;
        }else{
          Musica* penultima = head;
			    Musica* ultima = head->getProx();
          while(ultima->getMusica() != musica){
            penultima = ultima;
            ultima = ultima->getProx();
          }
          penultima->setProx(ultima->getProx());
          delete(ultima);
          break;
        }
      }else{
        ant = c;
        c = c->getProx();
        
      }
    }
}
