/*Autor: Janiheryson Felipe de Oliveira*/

#include <iostream>
#include "musica.hpp"
#include "listaLigada.hpp"
#include "playlista.hpp"

using namespace std;

int main() {
    string verificarNome[18];
    int cont = 0;
    int escolhaPrincipal = 9999;
    string nomeMusica, nomeArtista;
    for(int x = 0; x<18; x++){
    verificarNome[x] = "NULL";
    }
    Playlist *axe = NULL, *eletronica = NULL, *forro = NULL;
    Playlist *funk = NULL, *gospel = NULL, *classica = NULL;
    Playlist *hiphop = NULL, *mpb = NULL, *pagode = NULL;
    Playlist *diversas = NULL, *blues = NULL, *country = NULL;
    Playlist *jazz = NULL, *sertanejo = NULL, *samba = NULL;
    Playlist *rock = NULL, *pop = NULL;
    cout << "############################################\n#   Bem-vindo ao Felipe's media player!    #\n############################################\n\n";
    cout << "    Escolha uma das opções para começar:\n\n";
    
    while (escolhaPrincipal != 0){
      cout << "############ MENU DE OPÇÕES ################\n";
      cout << "#                                          #\n#  1 - Criar uma nova PlayList             #\n#  2 - Ver PlayList adicionadas            #\n#  3 - Reproduzir uma PlayList             #\n#  4 - Remover uma PlayList existente      #\n#  5 - Remover a ultima musica adicionada  #\n#  6 - Adicionar uma musica na PlayList    #\n#  7 - Excluir uma musica da PlayList      #\n#  8 - Ver musicas adicionadas na Playlist #\n#  0 - Sair do programa                    #\n#                                          #\n#           NOVAS FUNCIONALIDADES          #\n#                                          #\n#  9 - Concatenar playlists existentes     #\n#  10 - Remover uma lista de outra         #\n#  11 - Utilizar operadores +, -, << ou >> #\n#                                          #\n############################################\n\nEscolha: ";
      cin >> escolhaPrincipal;
      cout <<"\n";
   
      if(escolhaPrincipal == 1){
          int opcao;
          cout << "Escolha o gênero da PlayList\n\n";
          cout << "1 - Axe\n2 - Eletrônica\n3 - Forró\n4 - Funk\n5 - Gospel\n6 - Música Classica\n7 - Hip Hop\n8 - MPB\n9 - Pagode\n10 - Pop\n\nOpção: ";

          cin >> opcao;

          
          if(opcao == 1){
            
            if(verificarNome[1] == "NULL"){
              axe = new Playlist("axe");
              verificarNome[1] = "Axe";
              cout << "PlayList " << verificarNome[1] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[1] << " já existe!!! \n\n";
            }
          }

          else if (opcao == 2){
            if(verificarNome[2] == "NULL"){
            eletronica = new Playlist("eletronica");
            verificarNome[2] = "Eletronica";
            cout << "PlayList " << verificarNome[2] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[2] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 3){
            if(verificarNome[3] == "NULL"){
            forro = new Playlist("forro");
            verificarNome[3] = "Forro";
            cout << "PlayList " << verificarNome[3] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[3] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 4){
            if(verificarNome[4] == "NULL"){
            funk = new Playlist("funk");
            verificarNome[4] = "Funk";
            cout << "PlayList " << verificarNome[4] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[4] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 5){
            if(verificarNome[5] == "NULL"){
            gospel = new Playlist("gospel");
            verificarNome[5] = "Gospel";
            cout << "PlayList " << verificarNome[5] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[5] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 6){
            if(verificarNome[6] == "NULL"){
              classica = new Playlist("classica");
              verificarNome[6] = "Classica";
              cout << "PlayList " << verificarNome[6] << " criada com sucesso!\n\n";
              }
              else{
                cout << "PlayList " << verificarNome[6] << " já existe!!! \n\n";
              }

          }
          else if (opcao == 7){
            if(verificarNome[7] == "NULL"){
            hiphop = new Playlist("hiphop");
            verificarNome[7] = "Hiphop";
            cout << "PlayList " << verificarNome[7] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[7] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 8){
            if(verificarNome[8] == "NULL"){
            mpb = new Playlist("mbp");
            verificarNome[8] = "Mpb";
            cout << "PlayList " << verificarNome[8] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[8] << " já existe!!! \n\n";
            }
          }
          else if (opcao == 9){

            if(verificarNome[9] == "NULL"){
            pagode = new Playlist("pagode");
            verificarNome[9] = "Pagode";
            cout << "PlayList " << verificarNome[9] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[9] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 10){
            if(verificarNome[10] == "NULL"){
            pop = new Playlist("pop");
            verificarNome[10] = "Pop";
            cout << "PlayList " << verificarNome[10] << " criada com sucesso!\n\n";
            }else{
              cout << "PlayList " << verificarNome[10] << " já existe!!! \n\n";
            }

          }
          /*
          else if (opcao == 11){
            if(verificarNome[11] == "NULL"){
            rock = new Playlist("rock");
            verificarNome[11] = "Rock";
            cout << "PlayList " << verificarNome[11] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[11] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 12){
            if(verificarNome[12] == "NULL"){
            samba = new Playlist("samba");
            verificarNome[12] = "Samba";
            cout << "PlayList " << verificarNome[12] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[12] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 13){
            if(verificarNome[13] == "NULL"){
            sertanejo = new Playlist("sertanejo");
            verificarNome[13] = "Sertanejo";
            cout << "PlayList " << verificarNome[13] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[13] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 14){
            if(verificarNome[14] == "NULL"){
            jazz = new Playlist("jazz");
            verificarNome[14] = "Jazz";
            cout << "PlayList " << verificarNome[14] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[14] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 15){
            if(verificarNome[15] == "NULL"){
            country = new Playlist("country");
            verificarNome[15] = "Country";
            cout << "PlayList " << verificarNome[15] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[15] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 16){
            if(verificarNome[16] == "NULL"){
            blues = new Playlist("blues");
            verificarNome[16] = "Blues";
            cout << "PlayList " << verificarNome[16] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[16] << " já existe!!! \n\n";
            }

          }
          else if (opcao == 17){
            if(verificarNome[17] == "NULL"){
            diversas = new Playlist("diversas");
            verificarNome[17] = "Diversas";
            cout << "PlayList " << verificarNome[17] << " criada com sucesso!\n\n";
            }
            else{
              cout << "PlayList " << verificarNome[17] << " já existe!!! \n\n";
            }
          }*/
          else{
            cout << "Nenhuma opção válida foi digitada\n\n";
            
          }
      }
      else if (escolhaPrincipal == 2){
        cout << "Playlist criadas\n";
        for(int x = 0; x<10; x++){ // original 18
          if(verificarNome[x] != "NULL"){
            cout << x << " - " << verificarNome[x] << "\n";
          }
        }
        cout << "\n\n";
      }
      else if (escolhaPrincipal == 3){
        int escolha7;
        cout << "Escolha uma playlist para reproduzir?\n";
        for(int x = 0; x<18; x++){
          if(verificarNome[x] != "NULL"){
            cout << x << " - " << verificarNome[x] << "\n";
          }
        }
        cout << "\nEscolha: ";
        cin >> escolha7;
        

        if (escolha7 >= 0 && escolha7 < 18 && verificarNome[escolha7] != "NULL"){
          int op2;

          if (escolha7 == 1){
            cout << "\nReproduzindo musicas da Plalist Axe...\n";
            axe->exibirMusicas();
            cout << "\nReprodução finalidade!!\n";
            cout << "\n";
          }
          else if (escolha7 == 2){
            cout << "\nReproduzindo musicas da Plalist Eletrônicas...\n";
            eletronica->exibirMusicas();
            cout << "Reprodução finalidade!!\n";
            cout << "\n";

          }
          else if (escolha7 == 3){
            cout << "\nReproduzindo musicas da Plalist Forró...\n";
            forro->exibirMusicas();
            cout << "Reprodução finalidade!!\n";
            cout << "\n";
          }
          else if (escolha7 == 4){
            cout << "\nReproduzindo musicas da Plalist Funk...\n";
            funk->exibirMusicas();
            cout << "Reprodução finalidade!!\n";
            cout << "\n";
          }
          else if (escolha7 == 5){
            cout << "\nReproduzindo musicas da Plalist Gospel...\n";
            gospel->exibirMusicas();
            cout << "Reprodução finalidade!!\n";
            cout << "\n";
          }
          else if (escolha7 == 6){
            cout << "\nReproduzindo musicas da Plalist Musicas Classicas...\n";
            classica->exibirMusicas();
            cout << "Reprodução finalidade!!\n";
            cout << "\n";
          }
          else if (escolha7 == 7){
            cout << "\nReproduzindo musicas da Plalist Hip Hop...\n";
            hiphop->exibirMusicas();
            cout << "Reprodução finalidade!!\n";
            cout << "\n";
          }
          else if (escolha7 == 8){
            cout << "\nReproduzindo musicas da Plalist MPB...\n";
            mpb->exibirMusicas();
            cout << "Reprodução finalidade!!\n";
            cout << "\n";
          }
          else if (escolha7 == 9){
            cout << "\nReproduzindo musicas da Plalist Pagode...\n";
            pagode->exibirMusicas();
            cout << "Reprodução finalidade!!\n";
            cout << "\n";
          }
          else if (escolha7 == 10){
            cout << "\nReproduzindo musicas da Plalist Pop...\n";
            pop->exibirMusicas();
            cout << "Reprodução finalidade!!\n";
            cout << "\n";
          }
        }
        else{
          cout << "A opção escolhida não existe ou não há musicas para serem reproduzidas na plalist!!!\n\n";
        }
      }
      else if (escolhaPrincipal == 4){
        int escolha1 = 9999;
        cout << "Qual lista você deseja excluir???\n";
        for(int x = 0; x<18; x++){
          if(verificarNome[x] != "NULL"){
            cout << x << " - " << verificarNome[x] << "\n";
          }
        }
        cout << "\nEscolha: ";

        cin >> escolha1;

        if (escolha1 >= 0 && escolha1 < 18 && verificarNome[escolha1] != "NULL"){
          
          if (escolha1 == 1){
            delete(axe);
            cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 2){
            delete(eletronica);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 3){
            delete(forro);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 4){
            delete(funk);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 5){
            delete(gospel);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 6){
            delete(classica);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 7){
            delete(hiphop);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 8){
            delete(mpb);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 9){
            delete(pagode);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 10){
            delete(pop);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }/*else if (escolha1 == 11){
            delete(rock);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 12){
            delete(samba);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 13){
            delete(sertanejo);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 14){
            delete(jazz);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 15){
            delete(country);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 16){
            delete(blues);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";

          }else if (escolha1 == 17){
            delete(diversas);
              cout << "A Playlist " << verificarNome[escolha1] << " foi excluida com sucesso!!!\n\n";
            verificarNome[escolha1] = "NULL";
          }*/
        }
        else{
          cout << "A opção escolhida não existe!!!\n\n";
        }


      }
      else if (escolhaPrincipal == 5){
        int escolha6;
        cout << "Escolha uma playlist para excluir a ultima música?\n";
        for(int x = 0; x<18; x++){
          if(verificarNome[x] != "NULL"){
            cout << x << " - " << verificarNome[x] << "\n";
          }
        }
        cout << "\nEscolha: ";
        cin >> escolha6;
        if(escolha6 == 1 && verificarNome[1] != "NULL"){
          axe->apagarMusicaBase();
        }else if (escolha6 == 2 && verificarNome[2] != "NULL"){
          eletronica->apagarMusicaBase();
        }else if (escolha6 == 3 && verificarNome[3] != "NULL"){
          forro->apagarMusicaBase();
        }else if (escolha6 == 4 && verificarNome[4] != "NULL"){
          funk->apagarMusicaBase();
        }else if (escolha6 == 5 && verificarNome[5] != "NULL"){
          gospel->apagarMusicaBase();        
        }else if (escolha6 == 6 && verificarNome[6] != "NULL"){
          classica->apagarMusicaBase();
        }else if (escolha6 == 7 && verificarNome[7] != "NULL"){
          hiphop->apagarMusicaBase();
        }else if (escolha6 == 8 && verificarNome[8] != "NULL"){
          mpb->apagarMusicaBase();
        }else if (escolha6 == 9 && verificarNome[9] != "NULL"){
          pagode->apagarMusicaBase();
        }else if (escolha6 == 10 && verificarNome[10] != "NULL"){
          pop->apagarMusicaBase();

        
        }/*
        else if (escolha6 == 11 && verificarNome[11] != "NULL"){
          rock->apagarMusicaBase();
        }else if (escolha6 == 12 && verificarNome[12] != "NULL"){
          samba->apagarMusicaBase();
        }else if (escolha6 == 13 && verificarNome[13] != "NULL"){
          sertanejo->apagarMusicaBase();
        }else if (escolha6 == 14 && verificarNome[14] != "NULL"){
          jazz->apagarMusicaBase();
        }else if (escolha6 == 15 && verificarNome[15] != "NULL"){
          country->apagarMusicaBase();
        }else if (escolha6 == 16 && verificarNome[16] != "NULL"){
          blues->apagarMusicaBase();
        }else if (escolha6 == 17 && verificarNome[17] != "NULL"){
          diversas->apagarMusicaBase();
        }*/
      }
      else if (escolhaPrincipal == 6){
        int escolha2;
        cout << "Em qual Playlist você deseja adicionar uma musica?\n";
        for(int x = 0; x<10; x++){ //Original 18
          if(verificarNome[x] != "NULL"){
            cout << x << " - " << verificarNome[x] << "\n";
          }
        }
        cout << "\nEscolha: ";
        cin >> escolha2;
        

        if (escolha2 >= 0 && escolha2 < 18 && verificarNome[escolha2] != "NULL"){
          int op2;

          if (escolha2 == 1){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              axe->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Axe\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Axe:\n";
            axe->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 2){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              eletronica->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Eletrônica\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }

            cout << "\nMusicas adicionadas na Plalist Eletrônicas:\n";
            eletronica->exibirMusicas();
            cout << "\n";

          }
          else if (escolha2 == 3){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              forro->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Forró\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Forró:\n";
            forro->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 4){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              funk->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Funk\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Funk:\n";
            funk->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 5){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              gospel->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Gospel\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Gospel:\n";
          // gospel->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 6){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              classica->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Musicas Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Musicas Classicas:\n";
            classica->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 7){
            op2 = 1;
            while(op2 <= 1){
            cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              hiphop->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Hip Hop \n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Hip Hop:\n";
            hiphop->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 8){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              mpb->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist MPB Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist MPB:\n";
            mpb->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 9){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              pagode->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Pagode Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Pagode:\n";
            pagode->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 10){
            op2 = 1;
            while(op2 <= 1){
            cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              pop->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Pop Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Pop:\n";
            pop->exibirMusicas();
            cout << "\n";
          }
          /*else if (escolha2 == 11){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              rock->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Rock Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Rock:\n";
            rock->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 12){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              samba->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Samba Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Samba:\n";
            samba->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 13){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              sertanejo->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Sertanejo Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Sertanejo:\n";
            sertanejo->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 14){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              jazz->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Jazz Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Jazz:\n";
            jazz->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 15){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              country->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Country Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Country:\n";
            country->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 16){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              blues->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Blues Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Blues:\n";
            blues->exibirMusicas();
            cout << "\n";
          }
          else if (escolha2 == 17){
            op2 = 1;
            while(op2 <= 1){
              cout <<"Insira o nome da musica: ";
              cin.ignore();
              getline(cin, nomeMusica);
              cout <<"Insira o nome do artista: ";
              getline(cin, nomeArtista);
              diversas->inserirMusica(nomeMusica, nomeArtista);
              cout << "Musica inserida na Playlist Diversas Classicas\n\nDeseja inserir outra?\n1 - Sim\n2 - Não\n\nEscolha: ";
              cin >> op2;
            }
            cout << "\nMusicas adicionadas na Plalist Diversas:\n";
            diversas->exibirMusicas();
            cout << "\n";
          }*/
        }
        else{
          cout << "A opção escolhida não existe!!!\n\n";
        }

      }
      else if (escolhaPrincipal == 7){
      
        cout << "Digite o nome da musica para exclusão\n\nObservação: A musica será excluida de todas as Plalist que fizer parte!!\n\n";

        cout << "Digite o nome da musica: ";
        cin.ignore();
        getline(cin, nomeMusica);
            

        if(verificarNome[1] != "NULL"){
          if(axe->ProcuraMusica(nomeMusica)){
            axe->apagarMusica(nomeMusica);
            cout << "Musica apagada na playlist Axe!!\n\n";
          }
        }
        
        if(verificarNome[2] != "NULL"){
          if(eletronica->ProcuraMusica(nomeMusica)){
            eletronica->apagarMusica(nomeMusica);
            cout << "Musica apagada na playlist Eletrônicas!!\n\n";
          }
        }
        if(verificarNome[3] != "NULL"){
          if(forro->ProcuraMusica(nomeMusica)){
            forro->apagarMusica(nomeMusica);
            cout << "Musica apagada na playlist Forró!!\n\n";
          }
        }
        if(verificarNome[4] != "NULL"){
          if(funk->ProcuraMusica(nomeMusica)){
            funk->apagarMusica(nomeMusica);
            cout << "Musica apagada na playlist Funk!!\n\n";
          }
        }
        if(verificarNome[5] != "NULL"){
          if(gospel->ProcuraMusica(nomeMusica)){
            gospel->apagarMusica(nomeMusica);
            cout << "Musica apagada na playlist Gospel!!\n\n";
          }
        }
        if(verificarNome[6] != "NULL"){
          if(classica->ProcuraMusica(nomeMusica)){
            classica->apagarMusica(nomeMusica);
            cout << "Musica apagada na playlist Musicas Classicas!!\n\n";
          }
        }
        if(verificarNome[7] != "NULL"){
          if(hiphop->ProcuraMusica(nomeMusica)){
            hiphop->apagarMusica(nomeMusica);
            cout << "Musica apagada na playlist Hiphop!!\n\n";
          }
        }
        if(verificarNome[8] != "NULL"){
          if(mpb->ProcuraMusica(nomeMusica)){
            mpb->apagarMusica(nomeMusica);
            cout << "Musica apagada na playlist MPB!!\n\n";
          }
        }
        if(verificarNome[9] != "NULL"){
          if(pagode->ProcuraMusica(nomeMusica)){
            pagode->apagarMusica(nomeMusica);
            cout << "Musica apagada na playlist Pagode!!\n\n";
          }
        }
        if(verificarNome[10] != "NULL"){
          if(pop->ProcuraMusica(nomeMusica)){
            pop->apagarMusica(nomeMusica);
            cout << "Musica apagada na playlist Pop!!\n\n";
          }
        }

        /*
        if(rock->ProcuraMusica(nomeMusica)&& verificarNome[11] != "NULL"){
          rock->apagarMusica(nomeMusica);
          cout << "Musica apagada na playlist Rock!!\n\n";
        }
        if(samba->ProcuraMusica(nomeMusica) && verificarNome[12] != "NULL"){
          samba->apagarMusica(nomeMusica);
          cout << "Musica apagada na playlist Samba!!\n\n";
        }
        if(sertanejo->ProcuraMusica(nomeMusica) && verificarNome[13] != "NULL"){
          sertanejo->apagarMusica(nomeMusica);
          cout << "Musica apagada na playlist Sertanejo!!\n\n";
        }
        if(jazz->ProcuraMusica(nomeMusica) && verificarNome[14] != "NULL"){
          jazz->apagarMusica(nomeMusica);
          cout << "Musica apagada na playlist Jazz!!\n\n";
        }
        if(country->ProcuraMusica(nomeMusica) && verificarNome[15] != "NULL"){
          country->apagarMusica(nomeMusica);
          cout << "Musica apagada na playlist Country!!\n\n";
        }
        if(blues->ProcuraMusica(nomeMusica) && verificarNome[16] != "NULL"){
          blues->apagarMusica(nomeMusica);
          cout << "Musica apagada na playlist Blues!!\n\n";
        }
        if(diversas->ProcuraMusica(nomeMusica) && verificarNome[17] != "NULL"){
          diversas->apagarMusica(nomeMusica);
          cout << "Musica apagada na playlist Diversas!!\n\n";
        }*/     
      } 
      else if (escolhaPrincipal == 8){ 
          int escolha5;
        cout << "Escolha uma playlist para exibir seu conteudo?\n";
        for(int x = 0; x<18; x++){
          if(verificarNome[x] != "NULL"){
            cout << x << " - " << verificarNome[x] << "\n";
          }
        }
        cout << "\nEscolha: ";
        cin >> escolha5;
        

        if (escolha5 >= 0 && escolha5 < 18 && verificarNome[escolha5] != "NULL"){
          int op2;

          if (escolha5 == 1){
            cout << "\nMusicas adicionadas na Plalist Axe:\n";
            axe->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 2){
            cout << "\nMusicas adicionadas na Plalist Eletrônicas:\n";
            eletronica->exibirMusicas();
            cout << "\n";

          }
          else if (escolha5 == 3){
            cout << "\nMusicas adicionadas na Plalist Forró:\n";
            forro->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 4){
            cout << "\nMusicas adicionadas na Plalist Funk:\n";
            funk->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 5){
            cout << "\nMusicas adicionadas na Plalist Gospel:\n";
            gospel->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 6){
            cout << "\nMusicas adicionadas na Plalist Musicas Classicas:\n";
            classica->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 7){
            cout << "\nMusicas adicionadas na Plalist Hip Hop:\n";
            hiphop->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 8){
            cout << "\nMusicas adicionadas na Plalist MPB:\n";
            mpb->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 9){
            cout << "\nMusicas adicionadas na Plalist Pagode:\n";
            pagode->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 10){
            cout << "\nMusicas adicionadas na Plalist Pop:\n";
            pop->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 11){
            cout << "\nMusicas adicionadas na Plalist Rock:\n";
            rock->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 12){
            cout << "\nMusicas adicionadas na Plalist Samba:\n";
            samba->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 13){
            cout << "\nMusicas adicionadas na Plalist Sertanejo:\n";
            sertanejo->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 14){
            cout << "\nMusicas adicionadas na Plalist Jazz:\n";
            jazz->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 15){
            cout << "\nMusicas adicionadas na Plalist Coutry:\n";
            country->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 16){
            cout << "\nMusicas adicionadas na Plalist Blues:\n";
            blues->exibirMusicas();
            cout << "\n";
          }
          else if (escolha5 == 17){
            cout << "\nMusicas adicionadas na Plalist Diversas:\n";
            diversas->exibirMusicas();
            cout << "\n";
          }
        }
        else{
          cout << "A opção escolhida não existe!!!\n\n";
        }
      }
      else if (escolhaPrincipal == 9){ 
        int opcao1 = 999;
        int opcao2 = 999;
        int cont = 0;
        cout << "Escolha entre as playlists criadas quais você deseja unir\n\n";
        
        for(int x = 0; x<18; x++){
          if(verificarNome[x] != "NULL"){
            cont += 1;
          }
        }

        if(cont != 0){
          for(int x = 0; x<18; x++){
            if(verificarNome[x] != "NULL"){
            cout << x << " - " << verificarNome[x] << "\n";
            }
          }
          cout << "\n\n";
          cout << "Primeira Playlist: ";
          cin >> opcao1;
          cout << "\nSegunda Playlist: ";
          cin >> opcao2;

          if(opcao1 == 1){

            if(opcao2 == 2){

            axe->inserirMusica(axe, eletronica);

            }else if (opcao2 == 3){

               axe->inserirMusica(axe, forro);

            }else if (opcao2 == 4){

               axe->inserirMusica(axe, funk);
              
            }else if (opcao2 == 5){

               axe->inserirMusica(axe, gospel);
              
            }else if (opcao2 == 6){
              
               axe->inserirMusica(axe, classica);

            }else if (opcao2 == 7){

               axe->inserirMusica(axe, hiphop);
              
            }else if (opcao2 == 8){

               axe->inserirMusica(axe, mpb);
              
            }else if (opcao2 == 9){

               axe->inserirMusica(axe, pagode);
              
            }else if (opcao2 == 10){

               axe->inserirMusica(axe, pop);
              
            }else{
            cout << "Opcão invalida!!!\n\n";
           }

          }else if(opcao1 == 2){

            if(opcao2 == 1){
              
              eletronica->inserirMusica(eletronica, axe);

            }else if (opcao2 == 3){

              eletronica->inserirMusica(eletronica, forro);

            }else if (opcao2 == 4){

              eletronica->inserirMusica(eletronica, funk);
              
            }else if (opcao2 == 5){

              eletronica->inserirMusica(eletronica, gospel);
              
            }else if (opcao2 == 6){

              eletronica->inserirMusica(eletronica, classica);
              
            }else if (opcao2 == 7){

              eletronica->inserirMusica(eletronica, hiphop);
              
            }else if (opcao2 == 8){

              eletronica->inserirMusica(eletronica, mpb);
              
            }else if (opcao2 == 9){

              eletronica->inserirMusica(eletronica, pagode);
              
            }else if (opcao2 == 10){

              eletronica->inserirMusica(eletronica, pop);
              
            }else{
            cout << "Opcão invalida!!!\n\n";
           }

          }else if(opcao1 == 3){

            if(opcao2 == 1){

              forro->inserirMusica(forro, axe);

            }else if (opcao2 == 2){

               forro->inserirMusica(forro, eletronica);

            }else if (opcao2 == 4){

               forro->inserirMusica(forro, funk);
              
            }else if (opcao2 == 5){

               forro->inserirMusica(forro, gospel);
              
            }else if (opcao2 == 6){

               forro->inserirMusica(forro, classica);
              
            }else if (opcao2 == 7){

              forro->inserirMusica(forro, hiphop);
              
            }else if (opcao2 == 8){

              forro->inserirMusica(forro, mpb);
              
            }else if (opcao2 == 9){

              forro->inserirMusica(forro, pagode);
              
            }else if (opcao2 == 10){

              forro->inserirMusica(forro, pop);
              
            }else{
            cout << "Opcão invalida!!!\n\n";
           }
            
          }else if(opcao1 == 4){

            if(opcao2 == 1){

              funk->inserirMusica(funk, axe);

            }else if (opcao2 == 2){

              funk->inserirMusica(funk, eletronica);

            }else if (opcao2 == 3){

              funk->inserirMusica(funk, forro);
              
            }else if (opcao2 == 5){

              funk->inserirMusica(funk, gospel);
              
            }else if (opcao2 == 6){

              funk->inserirMusica(funk, classica);
              
            }else if (opcao2 == 7){

              funk->inserirMusica(funk, hiphop);
              
            }else if (opcao2 == 8){

              funk->inserirMusica(funk, mpb);
              
            }else if (opcao2 == 9){

              funk->inserirMusica(funk, pagode);
              
            }else if (opcao2 == 10){

              funk->inserirMusica(funk, pop);
              
            }else{
            cout << "Opcão invalida!!!\n\n";
           }
            
          }else if(opcao1 == 5){

            if(opcao2 == 1){

              gospel->inserirMusica(gospel, axe);

            }else if (opcao2 == 2){

              gospel->inserirMusica(gospel, eletronica);

            }else if (opcao2 == 3){

              gospel->inserirMusica(gospel, forro);
              
            }else if (opcao2 == 4){

              gospel->inserirMusica(gospel, funk);
              
            }else if (opcao2 == 6){

              gospel->inserirMusica(gospel, classica);
              
            }else if (opcao2 == 7){

              gospel->inserirMusica(gospel, hiphop);
              
            }else if (opcao2 == 8){

              gospel->inserirMusica(gospel, mpb);
              
            }else if (opcao2 == 9){

              gospel->inserirMusica(gospel, pagode);
              
            }else if (opcao2 == 10){

              gospel->inserirMusica(gospel, pop);
              
            }else{
            cout << "Opcão invalida!!!\n\n";
           }
            
          }else if(opcao1 == 6){

            if(opcao2 == 1){

              classica->inserirMusica(classica, axe);

            }else if (opcao2 == 2){

              gospel->inserirMusica(gospel, eletronica);

            }else if (opcao2 == 3){

              gospel->inserirMusica(gospel, forro);
              
            }else if (opcao2 == 4){

              gospel->inserirMusica(gospel, funk);
              
            }else if (opcao2 == 5){

              gospel->inserirMusica(gospel, gospel);
              
            }else if (opcao2 == 7){

              gospel->inserirMusica(gospel, hiphop);
              
            }else if (opcao2 == 8){

              gospel->inserirMusica(gospel, mpb);
              
            }else if (opcao2 == 9){

              gospel->inserirMusica(gospel, pagode);
              
            }else if (opcao2 == 10){

              gospel->inserirMusica(gospel, pop);
              
            }else{
            cout << "Opcão invalida!!!\n\n";
           }
            
          }else if(opcao1 == 7){

            if(opcao2 == 1){

              hiphop->inserirMusica(hiphop, axe);

            }else if (opcao2 == 2){

              hiphop->inserirMusica(hiphop, eletronica);

            }else if (opcao2 == 3){

              hiphop->inserirMusica(hiphop, forro);
              
            }else if (opcao2 == 4){

              hiphop->inserirMusica(hiphop, funk);
              
            }else if (opcao2 == 5){

              hiphop->inserirMusica(hiphop, gospel);
              
            }else if (opcao2 == 6){

              hiphop->inserirMusica(hiphop, classica);
              
            }else if (opcao2 == 8){

              hiphop->inserirMusica(hiphop, mpb);
              
            }else if (opcao2 == 9){

              hiphop->inserirMusica(hiphop, pagode);
              
            }else if (opcao2 == 10){

              hiphop->inserirMusica(hiphop, pop);
              
            }else{
            cout << "Opcão invalida!!!\n\n";
           }
            
          }else if(opcao1 == 8){

            if(opcao2 == 1){

              mpb->inserirMusica(mpb, axe);

            }else if (opcao2 == 2){

              mpb->inserirMusica(mpb, eletronica);

            }else if (opcao2 == 3){

              mpb->inserirMusica(mpb, forro);
              
            }else if (opcao2 == 4){

              mpb->inserirMusica(mpb, funk);
              
            }else if (opcao2 == 5){

              mpb->inserirMusica(mpb, gospel);
              
            }else if (opcao2 == 6){

              mpb->inserirMusica(mpb, classica);
              
            }else if (opcao2 == 7){

              mpb->inserirMusica(mpb, hiphop);
              
            }else if (opcao2 == 9){

              mpb->inserirMusica(mpb, pagode);
              
            }else if (opcao2 == 10){

              mpb->inserirMusica(mpb, pop);
              
            }else{
            cout << "Opcão invalida!!!\n\n";
           }
            
          }else if(opcao1 == 9){

            if(opcao2 == 1){

              pagode->inserirMusica(pagode, axe);

            }else if (opcao2 == 2){

              pagode->inserirMusica(pagode, eletronica);

            }else if (opcao2 == 3){

              pagode->inserirMusica(pagode, forro);
              
            }else if (opcao2 == 4){

              pagode->inserirMusica(pagode, funk);
              
            }else if (opcao2 == 5){

              pagode->inserirMusica(pagode, gospel);
              
            }else if (opcao2 == 6){

              pagode->inserirMusica(pagode, classica);
              
            }else if (opcao2 == 7){

              pagode->inserirMusica(pagode, hiphop);
              
            }else if (opcao2 == 8){

              pagode->inserirMusica(pagode, mpb);
              
            }else if (opcao2 == 10){

              pagode->inserirMusica(pagode, pop);
              
            }else{
            cout << "Opcão invalida!!!\n\n";
            }
            
          }else if(opcao1 == 10){

            if(opcao2 == 1){

              pop->inserirMusica(pop, axe);

            }else if (opcao2 == 2){

              pop->inserirMusica(pop, eletronica);

            }else if (opcao2 == 3){

              pop->inserirMusica(pop, forro);
              
            }else if (opcao2 == 4){

              pop->inserirMusica(pop, funk);
              
            }else if (opcao2 == 5){

              pop->inserirMusica(pop, gospel);
              
            }else if (opcao2 == 6){

              pop->inserirMusica(pop, classica);
              
            }else if (opcao2 == 7){

              pop->inserirMusica(pop, hiphop);
              
            }else if (opcao2 == 8){

              pop->inserirMusica(pop, mpb);
              
            }else if (opcao2 == 9){

              pop->inserirMusica(pop, pagode);
              
            }else{
            cout << "Opcão invalida!!!\n\n";
            }
            
          }else{
            cout << "Opcão invalida!!!\n\n";
          }
        }
        else{
          cout << "Nenhuma Playlist criada ainda!!!\n\n";
        }
        
      }
      else if (escolhaPrincipal == 10){
        cout << "\nEssa funcionalidade ainda não foi concluida!!!\n\n";
      }
      else if (escolhaPrincipal == 11){
        string operador;
        int op = 0;
        int opcao1 = 999;
        cout << "Escolha o que deseja fazer:\n\n";
        cout << "+ -> Inserir musica em playlist ou concatenar duas playlists\n- -> Diferença entre duas playlists ou Remover musica de plalist\n>> -> Remove ultima musica da plalist\n<< -> Insere musica na playlist\n\n";

        cout << "insira o operador: ";
        cin >> operador;

        if (operador == "+"){
          cout << "\nSelecione a opção desejada:\n\n";
          cout <<"1 - Inserir musica em playlist\n2 - Concatenar duas playlists\nEscolha: " ;
          cin >> op;
          if(op == 1){
            Musica m;
            string temp;
            cout << "Nome da musica: ";
            cin >> temp;
            m.setMusica(temp);
            cout << "Nome do artista: ";
            cin >> temp;
            m.setArtista(temp);

            cout <<"\nSelecione a playlist na qual deseja inserir a musica:\n\n";
            for(int x = 0; x<10; x++){
              if(verificarNome[x] != "NULL"){
                cout << x << " - " << verificarNome[x] << "\n";
              }
            }
            cout << "\n\n";

            cout <<"Escolha: ";
            cin >> opcao1;

            if(opcao1 == 1){
            
          

            }else if (opcao1 == 2){

            }else if (opcao1 == 3){

            }else if (opcao1 == 4){

            }else if (opcao1 == 5){

            }else if (opcao1 == 6){

            }else if (opcao1 == 7){

            }else if (opcao1 == 8){

            }else if (opcao1 == 9){

            }else if (opcao1 == 10){

            }else{
              cout << "\nNenhuma opção valida foi selecionada\n\n";
            }


          }else if (op == 2){

          }else{
            cout << "\nOpção invalida!!!!\n";
          }


        }else if (operador == "-"){
          cout << "\nSelecione a opção desejada:\n\n";
          cout <<"1 - Diferença entre duas playlists\n2 - Remover musica de plalist\nEscolha: " ;
          cin >> op;
          if(op == 1){

          }else if (op == 2){

          }else{
            cout << "\nOpção invalida!!!!\n";
          }

        }else if (operador == "<<"){
          
        }else if (operador == ">>"){
          
        }else{
          cout << "\nNenhum operador valido foi escolhido";
        }
      }
      else if (escolhaPrincipal == 0){
        cout << "\nObrigado por utilizar o Felipe's media player 2.0!\n\n";
        delete(axe);
        delete(eletronica);
        delete(forro);
        delete(gospel);
        delete(funk);
        delete(classica);
        delete(hiphop);
        delete(mpb);
        delete(pagode);
        delete(pop);
        
      }
      else{
        cout << "Opção digitada invalida!!!\n\n";
      }
  }
}
