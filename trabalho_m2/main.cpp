#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	// Permite ascentos no cout
	setlocale(LC_ALL,"");

	// Declara��o de vari�veis
	string nome_jogador;
	string resposta_enigma;
	int escolha;
	bool possuiAdaga = false;
	bool possuiAnel = false;
	bool possuiEspada = false;

	// Mensagem de boas-vindas
	cout << "==============================" << endl;
	cout << "Bem-vindo ao jogo Elden Sword!" << endl;
	cout << "==============================" << endl;
	cout << endl;
	cout << "Pressione qualquer tecla para iniciar...";

	// Aguarda o jogador pressionar qualquer tecla e limpa o console
	system("pause > nul");
	system("cls");

	// In�cio do jogo
	cout << "Voc� acorda em um lugar estranho, um campo aberto com carruagens de madeira destru�das, quando se d� conta est� deitado com a cabe�a apoiada no colo de uma mo�a." << endl << endl;
	cout << "Mo�a Misteriosa:" << endl;
	cout << " - Ol� jovem guerreiro, acredito que n�o se lembre de muita coisa de sua �ltima jornada, mas ainda consegue lembrar do seu nome?" << endl << endl;
	cout << "DIGITE SEU NOME: ";
	cin >> nome_jogador;

	cout << endl << endl << "=======================================================================================================" << endl << endl << endl;
	
	cout << "Mo�a Misteriosa:" << endl;
	cout << "- �timo, ent�o voc� ainda possui algumas mem�rias... me chamo Celestria, cuidei de voc� ap�s ser derrotado por Maliketh, um antigo dem�nio com a Runa da Morte, a qual amaldi�oa todos neste reino." << endl << endl;
	cout << "[1] Seguir caminho em busca de vingan�a" << endl;
	cout << "[2] Explorar os destro�os das carruagens" << endl << endl;
	cout << "DIGITE SUA ESCOLHA: ";
	cin >> escolha;

	cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

	if (escolha == 1) {
		possuiAdaga = false;
	}
	else if (escolha == 2) {
		cout << "Ao checar as carruagens, voc� encontra uma adaga e segue caminho em busca de vingan�a." << endl << endl;
		possuiAdaga = true;

	cout << "Ap�s algumas horas de caminhada, voc� e Celestria se aproximam de uma montanha onde t�m algumas op��es." << endl << endl;
	cout << "[1] Contornar a motanha e seguir caminho" << endl;
	cout << "[2] Descer por uma escadaria rumo a um calabou�o profundo" << endl << endl;
	cout << "DIGITE SUA ESCOLHA: ";
	cin >> escolha;

	cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

	// Escolheu contornar a montanha
	if (escolha == 1) {
		cout << "Depois de mais alguns metros pelo mesmo caminho voc� avista um comerciante com seu cavalo amarrado." << endl << endl;
		cout << "Comerciante:" << endl;
		cout << "- Ol�, jovem guerreiro. N�o possuo	mais tantos itens � venda, fui roubado por bandidos que tamb�m prenderam meu cavalo. Preciso solt�-lo, voc� consegue me ajudar?" << endl << endl;
		if (possuiAdaga == true) {
			cout << "Voc� possui uma adaga na qual pegou no in�cio, deseja ajudar o comerciante mal-encarado?" << endl << endl;
			cout << "[1] Cortar a corda e liberar o cavalo" << endl;
			cout << "[2] Omitir que possui um objeto cortante" << endl << endl;
			cout << "DIGITE SUA ESCOLHA: ";
			cin >> escolha;

			cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

			if (escolha == 1) {
				cout << "Comerciante:" << endl;
				cout << "- Muito obrigado, para demonstrar minha gratid�o tome este item que eu carrego h� anos, n�o sei o que � mas parece m�gico." << endl << endl;
				cout << "Celestria:" << endl;
				cout << "- Espere... esse � o Anel da Purifica��o?!" << endl << endl;
				cout << nome_jogador << ":" << endl;
				cout << "- O que � isso? Isso pode me ajudar de alguma forma?" << endl << endl;
				cout << "Celestria:" << endl;
				cout << "- Com este item voc� poder� derrotar Maliketh, este anel tem a capacidade de at� mesmo anular a influ�ncia da Runa da Morte." << endl << "Vamos logo, precisamos encontr�-lo!" << endl << endl;
				cout << "Comerciante:" << endl;
				cout << "- Antes de seguir adiante, lembre-se que aquele que porta a Runa da Morte possui um ponto vulner�vel. Seu cora��o � a chave para sua queda." << endl << endl << endl;
				possuiAnel = true;
			}
			else if (escolha == 2) {
				cout << "Voc� decide n�o mencionar que possui uma adaga e apenas se desculpa ao comerciante." << endl << endl;
				cout << "Comerciante:" << endl;
				cout << "- O qu�?! Voc� n�o tem nem a dec�ncia de dizer que pode me ajudar? Se � assim, v� embora! Eu n�o quero a ajuda de um fraco como voc�!" << endl << endl;
				cout << "O comerciante empurra voc� com for�a, ele parece pronto para explodir de raiva." << endl << endl;
				cout << "Sem mais delongas, voc� e Celestria decidem correr rapidamente do local." << endl << endl;
				possuiAnel = false;
			}

		}
		else if (possuiAdaga == false) {
			cout << "Por n�o possuir nenhum objeto cortante em seu invent�rio, voc� apenas pede desculpas ao comerciante e vai embora." << endl << endl << endl;
			possuiAnel = false;
		}
	}

	// Escolheu descer pela escadaria
	else if (escolha == 2) {
		cout << "Ap�s descer pelas escadas e explorar a masmorra voc� encontra apenas alguns esqueletos e uma sala vazia com 4 portas." << endl << "Ao adentrar a sala, as portas se trancam de repente, e diante de voc�s surge um goblin vestido de terno com uma voz esquisita." << endl << endl;
		cout << "Goblin:" << endl;
		cout << "- Se desejam prosseguir em sua jornada, ter�o que resolver uma charada!" << endl << endl;
		cout << "'N�o posso ser comprado, mas posso ser capturado com um olhar, sou in�til pra um mas inestim�vel pra dois, quem sou eu?'" << endl << endl;
		cout << "DIGITE A RESPOSTA: ";
		cin >> resposta_enigma;
		cout << endl;

		if (resposta_enigma == "amor" || resposta_enigma == "Amor" || resposta_enigma == "AMOR") {
			cout << endl << endl << "=======================================================================================================" << endl << endl << endl;
			cout << "Goblin:" << endl;
			cout << "- Excelente! Voc� demonstrou muita intelig�ncia e merece continuar. Por ter acertado de primeira, esta espada agora � sua." << endl << endl;
			cout << "Celestria:" << endl;
			cout << "- Essa � a espada amaldi�oada do antigo portador da Runa da Morte, " << nome_jogador << ". Com ela voc� n�o ir� perder para Maliketh novamente." << endl << "Vamos logo, precisamos encontr� - lo!" << endl << endl;
			cout << "Comerciante:" << endl;
			cout << "- Antes de seguir adiante, lembre-se que aquele que porta a Runa da Morte possui um ponto vulner�vel. Seu cora��o � a chave para sua queda." << endl << endl;
			cout << "Voc� ent�o leva a espada concedida pelo goblin, notando seu peso significativo." << endl << endl << endl;
			possuiEspada = true;
		}
		else {
			cout << "Goblin:" << endl;
			cout << "- Voc� errou! Lhe darei apenas mais uma chance. A palavra possui 4 letras e come�a com A." << endl << endl;
			cout << "DIGITE A RESPOSTA: ";
			cin >> resposta_enigma;
			cout << endl;
			if (resposta_enigma == "amor" || resposta_enigma == "Amor" || resposta_enigma == "AMOR") {
				cout << endl << endl << "=======================================================================================================" << endl << endl << endl;
				cout << "Goblin:" << endl;
				cout << "- Excelente! Voc� demonstrou muita intelig�ncia e merece continuar. Como recompensa, esta espada agora � sua." << endl << endl;
				cout << "Celestria:" << endl;
				cout << "- Essa � a espada amaldi�oada do antigo portador da Runa da Morte, " << nome_jogador << ". Com ela voc� n�o ir� perder para Maliketh novamente." << endl << "Vamos logo, precisamos encontr� - lo!" << endl << endl;
				cout << "Goblin:" << endl;
				cout << "- Antes de seguir adiante, lembre-se que aquele que porta a Runa da Morte possui um ponto vulner�vel. Seu cora��o � a chave para sua queda." << endl << endl;
				cout << "Voc� ent�o leva a espada concedida pelo goblin, notando seu peso significativo." << endl << endl << endl;
				possuiEspada = true;
			}
			else {
				cout << "Goblin:" << endl;
				cout << "- Como pode errar duas vezes, seu burro! Voc� n�o merece prosseguir sua jornada, por isso, morrer� afogado." << endl << endl;
				cout << "Uma escotilha se abre das paredes e enche a sala de �gua at� que voc� e Celestria n�o conseguem mais respirar, voc�s morrem." << endl << endl;
				cout << "============" << endl;
				cout << "FIM DE JOGO" << endl;
				cout << "============" << endl << endl;
				return 0;
			}
		}
	}

	cout << "5 DIAS DEPOIS..." << endl << endl << endl;
	cout << "Ap�s muita caminhada, desafios e lutas, voc� e Celestria encontram a estrutura que abriga Maliketh, passam pelos port�es e entram em uma esp�cie de coliseu onde o mesmo est�." << endl << endl;
	cout << "Maliketh:" << endl;
	cout << "- � surpreendente como voc� ainda esteja vivo, " << nome_jogador << ". Voc� nunca ter� suas mem�rias de volta e nunca conseguir� a Runa da Morte, ter� que me matar para isso." << endl << endl;
	cout << "Pressione qualquer tecla para iniciar a batalha final...";
	system("pause > nul");
	system("cls");

	cout << endl;
	cout << "=============" << endl;
	cout << "BATALHA FINAL" << endl;
	cout << "=============" << endl << endl;

	cout << "Maliketh levanta sua enorme espada e realiza um golpe de cima para baixo em sua dire��o. Qual ser� sua rea��o?" << endl << endl;
	cout << "[1] Esquivar" << endl;
	cout << "[2] Defender" << endl << endl;
	cout << "DIGITE SUA ESCOLHA: ";
	cin >> escolha;

	cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

	// Final caso tenha escolhido esquivar primeiro
	if (escolha == 1) {

		// Pegou a espada anteriormente
		if (possuiEspada == true) {
			cout << "Voc� tenta esquivar do ataque de Maliketh, por�m o peso de sua espada faz com que voc� n�o consiga a tempo." << endl;
			cout << "Ele te acerta em cheio, tirando sua vida." << endl << endl;
			cout << "============" << endl;
			cout << "FIM DE JOGO" << endl;
			cout << "============" << endl << endl;
			return 0;
		}

		// Pegou o anel anteriormente
		else if (possuiAnel == true) {
			cout << "Voc� consegue esquivar do ataque de Maliketh e percebe que o mesmo se encontra vuner�vel." << endl;
			cout << "Segundos antes voc� v� duas oportunidades de finaliza��o, qual ser� a melhor op��o?" << endl << endl;
			cout << "[1] Atacar na cabe�a" << endl;
			cout << "[2] Atacar no cora��o" << endl << endl;
			cout << "DIGITE SUA ESCOLHA: ";
			cin >> escolha;

			cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

			if (escolha == 1) {
				cout << "Maliketh se fere mas n�o � derrotado, em um estado de f�ria se levanta e com sua espada desfere in�meros golpes em voc�." << endl << "Ap�s sofrer os ataques voc� n�o resiste e acaba morrendo." << endl << endl;
				cout << "============" << endl;
				cout << "FIM DE JOGO" << endl;
				cout << "============" << endl << endl;
				return 0;
			}
			else if (escolha == 2) {
				cout << "Seu ataque perfura o cora��o de Maliketh, fazendo certas part�culas vermelhas serem espalhadas pelo ar, ele cai no ch�o fazendo um som estridente. Enquanto as part�culas se juntam em sua frente formando a Runa da Morte, a mesma cai em sua m�o e voc� escuta vozes dizendo o qu�o poderoso voc� seria com ela, em troca de governar tudo e ter poder ilimitado, ela tomaria a �nica pessoa que um dia foi boa com voc�." << endl << endl;
				cout << "[1] Sacrificar Celestria e obter todo o poder" << endl;
				cout << "[2] Destruir a Runa da Morte de uma vez por todas" << endl << endl;
				cout << "DIGITE SUA ESCOLHA: ";
				cin >> escolha;

				cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

				if (escolha == 1) {
					cout << "A Runa volta em seu estado de part�culas e dolorosamente entra por sua pele, voc� v� Celestria falecendo aos poucos enquanto sua mem�ria � devolvida." << endl << endl;
					cout << "Voc� finalmente se recorda que Celestria era o seu maior amor a qual cuidou de voc� nessa jornada e nas anteriores." << endl << endl;
					cout << "Agora com poder infinito e controle do reino, voc� se v� perdido sem a �nica pessoa que j� amou." << endl << endl;
					cout << "A partir desse momento, est� fadado a proteger a Runa para a eternidade assim como Maliketh." << endl << endl << endl;
					cout << "============" << endl;
					cout << "FIM DE JOGO" << endl;
					cout << "============" << endl << endl;
					return 0;
				}
				else if (escolha == 2) {
					cout << "Voc� destr�i a Runa e todos os seres amaldi�oados no reino s�o purificados, sua mem�ria volta e descobre que Celestria � na verdade sua amada que est� h� anos cuidando de seus ferimentos at� que conseguisse derrotar Maliketh." << endl << endl;
					cout << "Com isso, a hist�ria chega ao fim, voc� e Celestria finalmente podem descansar" << endl << endl << endl;
					cout << "============" << endl;
					cout << "FIM DE JOGO" << endl;
					cout << "============" << endl << endl;
					return 0;
				}
			}
		}

		// N�o pegou nenhum dos dois
		else {
			cout << "No momento final, ao tentar evitar o golpe fatal de Maliketh, ficou claro o qu�o despreparado voc� estava para enfrentar seu poder. A aus�ncia dos itens de batalha cruciais ao longo da jornada selou seu destino, levando-o � morte." << endl << endl;
			cout << "============" << endl;
			cout << "FIM DE JOGO" << endl;
			cout << "============" << endl << endl;
			return 0;
		}
	}

	// Final caso tenha escolhido defender primeiro
	else if (escolha == 2) {

		// Pegou a espada anteriormente
		if (possuiEspada == true) {
			cout << "Voc� se defende com sua espada do ataque de Maliketh e logo em seguida se prepara para o contra-ataque." << endl;
			cout << "Segundos antes voc� v� duas oportunidades de finaliza��o, qual ser� a melhor op��o?" << endl << endl;
			cout << "[1] Atacar na cabe�a" << endl;
			cout << "[2] Atacar no cora��o" << endl << endl;
			cout << "DIGITE SUA ESCOLHA: ";
			cin >> escolha;

			cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

			if (escolha == 1) {
				cout << "Maliketh se fere mas n�o � derrotado, em um estado de f�ria se levanta e com sua espada desfere in�meros golpes em voc�." << endl << "Ap�s sofrer os ataques voc� n�o resiste e acaba morrendo." << endl << endl;
				cout << "============" << endl;
				cout << "FIM DE JOGO" << endl;
				cout << "============" << endl << endl;
				return 0;
			}
			else if (escolha == 2) {
				cout << "Seu ataque perfura o cora��o de Maliketh, fazendo certas part�culas vermelhas serem espalhadas pelo ar, ele cai no ch�o fazendo um som estridente. Enquanto as part�culas se juntam em sua frente formando a Runa da Morte, a mesma cai em sua m�o e voc� escuta vozes dizendo o qu�o poderoso voc� seria com ela, em troca de governar tudo e ter poder ilimitado, ela tomaria a �nica pessoa que um dia foi boa com voc�." << endl << endl;
				cout << "[1] Sacrificar Celestria e obter todo o poder" << endl;
				cout << "[2] Destruir a Runa da Morte de uma vez por todas" << endl << endl;
				cout << "DIGITE SUA ESCOLHA: ";
				cin >> escolha;

				cout << endl << endl << "=======================================================================================================" << endl << endl << endl;
				
				if (escolha == 1) {
					cout << "A Runa volta em seu estado de part�culas e dolorosamente entra por sua pele, voc� v� Celestria falecendo aos poucos enquanto sua mem�ria � devolvida." << endl << endl; 
					cout << "Voc� finalmente se recorda que Celestria era o seu maior amor a qual cuidou de voc� nessa jornada e nas anteriores." << endl << endl;
					cout << "Agora com poder infinito e controle do reino, voc� se v� perdido sem a �nica pessoa que j� amou." << endl << endl;
					cout << "A partir desse momento, est� fadado a proteger a Runa para a eternidade assim como Maliketh." << endl << endl << endl;
					cout << "============" << endl;
					cout << "FIM DE JOGO" << endl;
					cout << "============" << endl << endl;
					return 0;
				}
				else if (escolha == 2) {
					cout << "Voc� destr�i a Runa e todos os seres amaldi�oados no reino s�o purificados, sua mem�ria volta e descobre que Celestria � na verdade sua amada que est� h� anos cuidando de seus ferimentos at� que conseguisse derrotar Maliketh." << endl << endl;
					cout << "Com isso, a hist�ria chega ao fim, voc� e Celestria finalmente podem descansar" << endl << endl << endl;
					cout << "============" << endl;
					cout << "FIM DE JOGO" << endl;
					cout << "============" << endl << endl;
					return 0;
				}
			}
		}

		// Pegou o anel anteriormente
		else if (possuiAnel == true) {
			cout << "Voc� tenta segurar a espada no ataque de Maliketh, por�m fracassa." << endl;
			cout << "Ele te corta ao meio, tirando sua vida." << endl << endl;
			cout << "============" << endl;
			cout << "FIM DE JOGO" << endl;
			cout << "============" << endl << endl;
			return 0;
		}

		// N�o pegou nenhum dos dois
		else {
			cout << "No momento final, ao tentar evitar o golpe fatal de Maliketh, ficou claro o qu�o despreparado voc� estava para enfrentar seu poder. A aus�ncia dos itens de batalha cruciais ao longo da jornada selou seu destino, levando-o � morte." << endl << endl;
			cout << "============" << endl;
			cout << "FIM DE JOGO" << endl;
			cout << "============" << endl << endl;
			return 0;
		}
	}
}