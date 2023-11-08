# Capitulo 1
## Introducao

> Tron: Evolution é um jogo eletrônico do gênero TPS de ação e aventura
> relacionado ao filme Tron: O Legado que foi desenvolvido pela Propaganda
> Games e publicado pela Disney Interactive Studios. Oficialmente anunciado na
> Spike Video Game Awards de 2009, foi lançado para as plataformas Microsoft
> Windows, PlayStation 3 e Xbox 360 em 26 de novembro de 2010 na Europa e 7 de
> dezembro na América do Norte. Foi desenvolvido usando os motores gráficos
> Unreal Engine 3 e Aurora Engine. Uma versão bem diferente do jogo,
> desenvolvida pela SuperVillain Studios, também foi publicada em 7 de dezembro
> para PSP. -- ENCICLOPÉDIA, Wikipedia 2023

> Tron é basicamente o Sword Art Online dos anos 80.

<div align="center">
	<img src="https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2
		Forig00.deviantart.net%2F512b%2Ff%2F2011%2F012%2F9%2F9%2Fdafty_punk
		___tron_soundtrack_by_coverlandia-d370gzh.png&f=1&nofb=1&ipt=
		a31999f413323aa382a3d508abfa51e1565285c32575461555f01d7412905e21
		&ipo=images" alt="I miss them so much" width="400">
</div>

# Capitulo 2
## Objetivo

Uma das cenas mais icônicas de Tron é a cena da corrida de
<a href="https://www.youtube.com/watch?v=1kyiQzc4134" target="_blank">motos de
luz</a>.
&emsp;&emsp;O protagonista do filme de 82 é um programador, assim como você,
logo, agora é sua vez de criar um jogo de corrida de motos de luz.
&emsp;&emsp;O objetivo principal desse projeto é aprender um pouco sobre como
trabalhar com a MiniLibX, isso pois bibliotecas gráficas são bem parecidas
se você aprende uma, aprendeu todas, o outro objetivo é exercitar um pouco de
conhecimento em matemática.

# Capitulo 3
## Instrucoes Comuns

- Você deve codar em C.
- Não há norma, voe alto como um
	<a href="https://www.youtube.com/watch?v=d43lJsK7Kvo">passáro livre</a>.
- Seu programa não deve apresentar errors fatais (segfault, bus error, double
	free, etc) ou comportamento inesperado.
- Toda memória alocada deve ser devidamente liberada.
- Um makefile já estará disponível, você pode modificá-lo para adicionar seus
	arquivos, mas não pode alterar de mais.
- Bônus devem estar em uma pasta separada (`cp -r * bonus/*{_bonus}.c` é um
	comando amigo).
- Por **Neith**, teste seu código!!!

# Capitulo 4
## Parte Mandatoria - Tron.exec

<table align="center">
	<tr>
		<td style="font-weight: bold">Nome do programa</td>
		<td>Tron.exec</td>
	</tr>
	<tr>
		<td style="font-weight: bold">Arquivos necessários</td>
		<td><img src="https://external-content.duckduckgo.com/iu/?u=https
			%3A%2F%2Fi.kym-cdn.com%2Fphotos%2Fimages%2Ffacebook%2F001%2F650
			%2F747%2Faaf.png&f=1&nofb=1&ipt
			=c2207ab0bf2f61352e482d823d47c17c9b44335119f91b6b8479907357e56152
			&ipo=images" alt="YES." width="50px"></td>
	</tr>
	<tr>
		<td style="font-weight: bold">Descrição</td>
		<td>Você deve criar um simples jogo 2D onde um pixel de cor X
			se move automaticamente em uma das 4 direções.</td>
	</tr>
</table>

### Graficos

- Você deve utilizar a biblioteca gráfica MiniLibX.
- Você deve criar uma imagem, desenhar diretamente na janela é estritamente
	proibido.
- O jogador deve ser representado por um pixel de cor X, e cada pixel que ele
	andar deve estar da cor Y, assim o usuário consegue se localizar (dê
	preferência a cores análogas para simular o filme).

<div align="center" style="background-color: yellow">
	<a href="https://www.todamateria.com.br/cores-analogas/" target="_blank">
		https://www.todamateria.com.br/cores-analogas/</a><br>
	<a href="https://github.com/andreyvdl/MiniLibX_my_docs" target="_blank">
		https://github.com/andreyvdl/MiniLibX_my_docs</a>
</div>

### Jogo

- O jogador começa no lado esquerdo na janela, com a posição vertical no meio
	da tela e deve começar a andar para o lado direito.
- Os botões de controle podem ser as setas do teclado e/ou W, A, S e D.
- Se o jogador alcançar os limites da tela o jogo deve fechar.
- Clicar no X da janela deve fechar o jogo.
- Apertar ESC deve fechar o jogo.
- O jogo deve ser responsivo, ou seja, se o jogador apertar uma tecla o jogo
	deve reagir de forma quase simultânea (seria bem frustante apertar uma
	tecla e o personagem só reagir 2 segundos depois).
- O jogador não tem permição de dar 180° da direção que ele está indo
	atualmente.

<div align="center" style="background-color: yellow">
	<a href="https://pt.wikipedia.org/wiki/Círculo_unitário" target="_blank">
		https://pt.wikipedia.org/wiki/Círculo_unitário</a><br>
	<a href="https://www.todamateria.com.br/seno-cosseno-e-tangente/"
		target="_blank">https://www.todamateria.com.br/seno-cosseno-e-tangente/
		</a><br>
	<a href="https://pt.wikipedia.org/wiki/Trigonometria" target="_blank">
		https://pt.wikipedia.org/wiki/Trigonometria</a><br>
	<a href="https://github.com/andreyvdl/MiniLibX_my_docs" target="_blank">
		https://github.com/andreyvdl/MiniLibX_my_docs</a>
</div>

# Capitulo 5
## Bonus - Tron.bonus

- Você devera criar outro progama, dessa vez chamado `Tron.bonus`.

Você pode adicionar qualquer um desses bonus, ou todos para se sentir um
especialista:

- Multiplayer local de no mínimo 2 jogadores.
- Esconder uma textura no fundo que é revelada aos poucos conforme os jogadores
	andam.
- Colisão com os pixels já andados (no caso do multiplayer o terminal deverá
	listar qual jogador sobreviveu no final, já no singleplayer o terminal
	deverá printar "game over").
- Colisão entre os jogadores (nesse caso o terminal deverá imprimir "draw").
- Partidas melhores de 3 (se um jogador já tiver um ponto e empatar, o ponto
	irá para o jogador que não marcou, no caso da 1° rodada ambos ganham um
	ponto, no caso de empate na 3 rodada o terminal deverá printar "draw").
