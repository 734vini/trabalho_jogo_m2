#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	// Permite ascentos no cout
	setlocale(LC_ALL,"");

	// Declaração de variáveis
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

	// Início do jogo
	cout << "Você acorda em um lugar estranho, um campo aberto com carruagens de madeira destruídas, quando se dá conta está deitado com a cabeça apoiada no colo de uma moça." << endl << endl;
	cout << "Moça Misteriosa:" << endl;
	cout << " - Olá jovem guerreiro, acredito que não se lembre de muita coisa de sua última jornada, mas ainda consegue lembrar do seu nome?" << endl << endl;
	cout << "DIGITE SEU NOME: ";
	cin >> nome_jogador;

	cout << endl << endl << "=======================================================================================================" << endl << endl << endl;
	
	cout << "Moça Misteriosa:" << endl;
	cout << "- Ótimo, então você ainda possui algumas memórias... me chamo Celestria, cuidei de você após ser derrotado por Maliketh, um antigo demônio com a Runa da Morte, a qual amaldiçoa todos neste reino." << endl << endl;
	cout << "[1] Seguir caminho em busca de vingança" << endl;
	cout << "[2] Explorar os destroços das carruagens" << endl << endl;
	cout << "DIGITE SUA ESCOLHA: ";
	cin >> escolha;

	cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

	if (escolha == 1) {
		possuiAdaga = false;
	}
	else if (escolha == 2) {
		cout << "Ao checar as carruagens, você encontra uma adaga e segue caminho em busca de vingança." << endl << endl;
		possuiAdaga = true;

	cout << "Após algumas horas de caminhada, você e Celestria se aproximam de uma montanha onde têm algumas opções." << endl << endl;
	cout << "[1] Contornar a motanha e seguir caminho" << endl;
	cout << "[2] Descer por uma escadaria rumo a um calabouço profundo" << endl << endl;
	cout << "DIGITE SUA ESCOLHA: ";
	cin >> escolha;

	cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

	// Escolheu contornar a montanha
	if (escolha == 1) {
		cout << "Depois de mais alguns metros pelo mesmo caminho você avista um comerciante com seu cavalo amarrado." << endl << endl;
		cout << "Comerciante:" << endl;
		cout << "- Olá, jovem guerreiro. Não possuo	mais tantos itens à venda, fui roubado por bandidos que também prenderam meu cavalo. Preciso soltá-lo, você consegue me ajudar?" << endl << endl;
		if (possuiAdaga == true) {
			cout << "Você possui uma adaga na qual pegou no início, deseja ajudar o comerciante mal-encarado?" << endl << endl;
			cout << "[1] Cortar a corda e liberar o cavalo" << endl;
			cout << "[2] Omitir que possui um objeto cortante" << endl << endl;
			cout << "DIGITE SUA ESCOLHA: ";
			cin >> escolha;

			cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

			if (escolha == 1) {
				cout << "Comerciante:" << endl;
				cout << "- Muito obrigado, para demonstrar minha gratidão tome este item que eu carrego há anos, não sei o que é mas parece mágico." << endl << endl;
				cout << "Celestria:" << endl;
				cout << "- Espere... esse é o Anel da Purificação?!" << endl << endl;
				cout << nome_jogador << ":" << endl;
				cout << "- O que é isso? Isso pode me ajudar de alguma forma?" << endl << endl;
				cout << "Celestria:" << endl;
				cout << "- Com este item você poderá derrotar Maliketh, este anel tem a capacidade de até mesmo anular a influência da Runa da Morte." << endl << "Vamos logo, precisamos encontrá-lo!" << endl << endl;
				cout << "Comerciante:" << endl;
				cout << "- Antes de seguir adiante, lembre-se que aquele que porta a Runa da Morte possui um ponto vulnerável. Seu coração é a chave para sua queda." << endl << endl << endl;
				possuiAnel = true;
			}
			else if (escolha == 2) {
				cout << "Você decide não mencionar que possui uma adaga e apenas se desculpa ao comerciante." << endl << endl;
				cout << "Comerciante:" << endl;
				cout << "- O quê?! Você não tem nem a decência de dizer que pode me ajudar? Se é assim, vá embora! Eu não quero a ajuda de um fraco como você!" << endl << endl;
				cout << "O comerciante empurra você com força, ele parece pronto para explodir de raiva." << endl << endl;
				cout << "Sem mais delongas, você e Celestria decidem correr rapidamente do local." << endl << endl;
				possuiAnel = false;
			}

		}
		else if (possuiAdaga == false) {
			cout << "Por não possuir nenhum objeto cortante em seu inventário, você apenas pede desculpas ao comerciante e vai embora." << endl << endl << endl;
			possuiAnel = false;
		}
	}

	// Escolheu descer pela escadaria
	else if (escolha == 2) {
		cout << "Após descer pelas escadas e explorar a masmorra você encontra apenas alguns esqueletos e uma sala vazia com 4 portas." << endl << "Ao adentrar a sala, as portas se trancam de repente, e diante de vocês surge um goblin vestido de terno com uma voz esquisita." << endl << endl;
		cout << "Goblin:" << endl;
		cout << "- Se desejam prosseguir em sua jornada, terão que resolver uma charada!" << endl << endl;
		cout << "'Não posso ser comprado, mas posso ser capturado com um olhar, sou inútil pra um mas inestimável pra dois, quem sou eu?'" << endl << endl;
		cout << "DIGITE A RESPOSTA: ";
		cin >> resposta_enigma;
		cout << endl;

		if (resposta_enigma == "amor" || resposta_enigma == "Amor" || resposta_enigma == "AMOR") {
			cout << endl << endl << "=======================================================================================================" << endl << endl << endl;
			cout << "Goblin:" << endl;
			cout << "- Excelente! Você demonstrou muita inteligência e merece continuar. Por ter acertado de primeira, esta espada agora é sua." << endl << endl;
			cout << "Celestria:" << endl;
			cout << "- Essa é a espada amaldiçoada do antigo portador da Runa da Morte, " << nome_jogador << ". Com ela você não irá perder para Maliketh novamente." << endl << "Vamos logo, precisamos encontrá - lo!" << endl << endl;
			cout << "Comerciante:" << endl;
			cout << "- Antes de seguir adiante, lembre-se que aquele que porta a Runa da Morte possui um ponto vulnerável. Seu coração é a chave para sua queda." << endl << endl;
			cout << "Você então leva a espada concedida pelo goblin, notando seu peso significativo." << endl << endl << endl;
			possuiEspada = true;
		}
		else {
			cout << "Goblin:" << endl;
			cout << "- Você errou! Lhe darei apenas mais uma chance. A palavra possui 4 letras e começa com A." << endl << endl;
			cout << "DIGITE A RESPOSTA: ";
			cin >> resposta_enigma;
			cout << endl;
			if (resposta_enigma == "amor" || resposta_enigma == "Amor" || resposta_enigma == "AMOR") {
				cout << endl << endl << "=======================================================================================================" << endl << endl << endl;
				cout << "Goblin:" << endl;
				cout << "- Excelente! Você demonstrou muita inteligência e merece continuar. Como recompensa, esta espada agora é sua." << endl << endl;
				cout << "Celestria:" << endl;
				cout << "- Essa é a espada amaldiçoada do antigo portador da Runa da Morte, " << nome_jogador << ". Com ela você não irá perder para Maliketh novamente." << endl << "Vamos logo, precisamos encontrá - lo!" << endl << endl;
				cout << "Goblin:" << endl;
				cout << "- Antes de seguir adiante, lembre-se que aquele que porta a Runa da Morte possui um ponto vulnerável. Seu coração é a chave para sua queda." << endl << endl;
				cout << "Você então leva a espada concedida pelo goblin, notando seu peso significativo." << endl << endl << endl;
				possuiEspada = true;
			}
			else {
				cout << "Goblin:" << endl;
				cout << "- Como pode errar duas vezes, seu burro! Você não merece prosseguir sua jornada, por isso, morrerá afogado." << endl << endl;
				cout << "Uma escotilha se abre das paredes e enche a sala de água até que você e Celestria não conseguem mais respirar, vocês morrem." << endl << endl;
				cout << "============" << endl;
				cout << "FIM DE JOGO" << endl;
				cout << "============" << endl << endl;
				return 0;
			}
		}
	}

	cout << "5 DIAS DEPOIS..." << endl << endl << endl;
	cout << "Após muita caminhada, desafios e lutas, você e Celestria encontram a estrutura que abriga Maliketh, passam pelos portões e entram em uma espécie de coliseu onde o mesmo está." << endl << endl;
	cout << "Maliketh:" << endl;
	cout << "- É surpreendente como você ainda esteja vivo, " << nome_jogador << ". Você nunca terá suas memórias de volta e nunca conseguirá a Runa da Morte, terá que me matar para isso." << endl << endl;
	cout << "Pressione qualquer tecla para iniciar a batalha final...";
	system("pause > nul");
	system("cls");

	cout << endl;
	cout << "=============" << endl;
	cout << "BATALHA FINAL" << endl;
	cout << "=============" << endl << endl;

	cout << "Maliketh levanta sua enorme espada e realiza um golpe de cima para baixo em sua direção. Qual será sua reação?" << endl << endl;
	cout << "[1] Esquivar" << endl;
	cout << "[2] Defender" << endl << endl;
	cout << "DIGITE SUA ESCOLHA: ";
	cin >> escolha;

	cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

	// Final caso tenha escolhido esquivar primeiro
	if (escolha == 1) {

		// Pegou a espada anteriormente
		if (possuiEspada == true) {
			cout << "Você tenta esquivar do ataque de Maliketh, porém o peso de sua espada faz com que você não consiga a tempo." << endl;
			cout << "Ele te acerta em cheio, tirando sua vida." << endl << endl;
			cout << "============" << endl;
			cout << "FIM DE JOGO" << endl;
			cout << "============" << endl << endl;
			return 0;
		}

		// Pegou o anel anteriormente
		else if (possuiAnel == true) {
			cout << "Você consegue esquivar do ataque de Maliketh e percebe que o mesmo se encontra vunerável." << endl;
			cout << "Segundos antes você vê duas oportunidades de finalização, qual será a melhor opção?" << endl << endl;
			cout << "[1] Atacar na cabeça" << endl;
			cout << "[2] Atacar no coração" << endl << endl;
			cout << "DIGITE SUA ESCOLHA: ";
			cin >> escolha;

			cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

			if (escolha == 1) {
				cout << "Maliketh se fere mas não é derrotado, em um estado de fúria se levanta e com sua espada desfere inúmeros golpes em você." << endl << "Após sofrer os ataques você não resiste e acaba morrendo." << endl << endl;
				cout << "============" << endl;
				cout << "FIM DE JOGO" << endl;
				cout << "============" << endl << endl;
				return 0;
			}
			else if (escolha == 2) {
				cout << "Seu ataque perfura o coração de Maliketh, fazendo certas partículas vermelhas serem espalhadas pelo ar, ele cai no chão fazendo um som estridente. Enquanto as partículas se juntam em sua frente formando a Runa da Morte, a mesma cai em sua mão e você escuta vozes dizendo o quão poderoso você seria com ela, em troca de governar tudo e ter poder ilimitado, ela tomaria a única pessoa que um dia foi boa com você." << endl << endl;
				cout << "[1] Sacrificar Celestria e obter todo o poder" << endl;
				cout << "[2] Destruir a Runa da Morte de uma vez por todas" << endl << endl;
				cout << "DIGITE SUA ESCOLHA: ";
				cin >> escolha;

				cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

				if (escolha == 1) {
					cout << "A Runa volta em seu estado de partículas e dolorosamente entra por sua pele, você vê Celestria falecendo aos poucos enquanto sua memória é devolvida." << endl << endl;
					cout << "Você finalmente se recorda que Celestria era o seu maior amor a qual cuidou de você nessa jornada e nas anteriores." << endl << endl;
					cout << "Agora com poder infinito e controle do reino, você se vê perdido sem a única pessoa que já amou." << endl << endl;
					cout << "A partir desse momento, está fadado a proteger a Runa para a eternidade assim como Maliketh." << endl << endl << endl;
					cout << "============" << endl;
					cout << "FIM DE JOGO" << endl;
					cout << "============" << endl << endl;
					return 0;
				}
				else if (escolha == 2) {
					cout << "Você destrói a Runa e todos os seres amaldiçoados no reino são purificados, sua memória volta e descobre que Celestria é na verdade sua amada que está há anos cuidando de seus ferimentos até que conseguisse derrotar Maliketh." << endl << endl;
					cout << "Com isso, a história chega ao fim, você e Celestria finalmente podem descansar" << endl << endl << endl;
					cout << "============" << endl;
					cout << "FIM DE JOGO" << endl;
					cout << "============" << endl << endl;
					return 0;
				}
			}
		}

		// Não pegou nenhum dos dois
		else {
			cout << "No momento final, ao tentar evitar o golpe fatal de Maliketh, ficou claro o quão despreparado você estava para enfrentar seu poder. A ausência dos itens de batalha cruciais ao longo da jornada selou seu destino, levando-o à morte." << endl << endl;
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
			cout << "Você se defende com sua espada do ataque de Maliketh e logo em seguida se prepara para o contra-ataque." << endl;
			cout << "Segundos antes você vê duas oportunidades de finalização, qual será a melhor opção?" << endl << endl;
			cout << "[1] Atacar na cabeça" << endl;
			cout << "[2] Atacar no coração" << endl << endl;
			cout << "DIGITE SUA ESCOLHA: ";
			cin >> escolha;

			cout << endl << endl << "=======================================================================================================" << endl << endl << endl;

			if (escolha == 1) {
				cout << "Maliketh se fere mas não é derrotado, em um estado de fúria se levanta e com sua espada desfere inúmeros golpes em você." << endl << "Após sofrer os ataques você não resiste e acaba morrendo." << endl << endl;
				cout << "============" << endl;
				cout << "FIM DE JOGO" << endl;
				cout << "============" << endl << endl;
				return 0;
			}
			else if (escolha == 2) {
				cout << "Seu ataque perfura o coração de Maliketh, fazendo certas partículas vermelhas serem espalhadas pelo ar, ele cai no chão fazendo um som estridente. Enquanto as partículas se juntam em sua frente formando a Runa da Morte, a mesma cai em sua mão e você escuta vozes dizendo o quão poderoso você seria com ela, em troca de governar tudo e ter poder ilimitado, ela tomaria a única pessoa que um dia foi boa com você." << endl << endl;
				cout << "[1] Sacrificar Celestria e obter todo o poder" << endl;
				cout << "[2] Destruir a Runa da Morte de uma vez por todas" << endl << endl;
				cout << "DIGITE SUA ESCOLHA: ";
				cin >> escolha;

				cout << endl << endl << "=======================================================================================================" << endl << endl << endl;
				
				if (escolha == 1) {
					cout << "A Runa volta em seu estado de partículas e dolorosamente entra por sua pele, você vê Celestria falecendo aos poucos enquanto sua memória é devolvida." << endl << endl; 
					cout << "Você finalmente se recorda que Celestria era o seu maior amor a qual cuidou de você nessa jornada e nas anteriores." << endl << endl;
					cout << "Agora com poder infinito e controle do reino, você se vê perdido sem a única pessoa que já amou." << endl << endl;
					cout << "A partir desse momento, está fadado a proteger a Runa para a eternidade assim como Maliketh." << endl << endl << endl;
					cout << "============" << endl;
					cout << "FIM DE JOGO" << endl;
					cout << "============" << endl << endl;
					return 0;
				}
				else if (escolha == 2) {
					cout << "Você destrói a Runa e todos os seres amaldiçoados no reino são purificados, sua memória volta e descobre que Celestria é na verdade sua amada que está há anos cuidando de seus ferimentos até que conseguisse derrotar Maliketh." << endl << endl;
					cout << "Com isso, a história chega ao fim, você e Celestria finalmente podem descansar" << endl << endl << endl;
					cout << "============" << endl;
					cout << "FIM DE JOGO" << endl;
					cout << "============" << endl << endl;
					return 0;
				}
			}
		}

		// Pegou o anel anteriormente
		else if (possuiAnel == true) {
			cout << "Você tenta segurar a espada no ataque de Maliketh, porém fracassa." << endl;
			cout << "Ele te corta ao meio, tirando sua vida." << endl << endl;
			cout << "============" << endl;
			cout << "FIM DE JOGO" << endl;
			cout << "============" << endl << endl;
			return 0;
		}

		// Não pegou nenhum dos dois
		else {
			cout << "No momento final, ao tentar evitar o golpe fatal de Maliketh, ficou claro o quão despreparado você estava para enfrentar seu poder. A ausência dos itens de batalha cruciais ao longo da jornada selou seu destino, levando-o à morte." << endl << endl;
			cout << "============" << endl;
			cout << "FIM DE JOGO" << endl;
			cout << "============" << endl << endl;
			return 0;
		}
	}
}