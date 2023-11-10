# Capitulo 1
## Introducao

> Role-playing game, também conhecido como RPG (em português: "jogo narrativo",
> "jogo de interpretação de papéis" ou "jogo de representação"), é um tipo de
> jogo em que os jogadores assumem papéis de personagens e criam narrativas
> colaborativamente. O progresso de um jogo se dá de acordo com um sistema de
> regras predeterminado, dentro das quais os jogadores podem improvisar
> livremente. As escolhas dos jogadores determinam a direção que o jogo irá
> tomar. -- PEDIA, Wiki 2023

> RPG é legal, vocês deveriam marcar de fazer uma campanha no final de semana.

<div align="center" style="background-color: SteelBlue;" >
	RPGS contém otimas <a href="https://youtu.be/1ZGMt36AjAs?si=
		VzkAioAwN0ci9LY1&t=63" target="_blank">mú</a>
	<a href="https://youtu.be/cwABWVby-Xw?si=UMd5Lgnwr5QT4sjM" target="_blank">
		si</a>
	<a href="https://youtu.be/_BNXe3QSLfM?si=THqEdM_P_K4cHP0n" target="_blank">
		ca</a>
	<a href="https://youtu.be/4qnlfL5gfgo?si=UJ1191WvpSeEaa3m" target="_blank">
		s</a>
</div>

# Capitulo 2
## Objetivo

Creio que todos já jogaram e/ou tiveram contato com Pokemon, Final Fantasy,
Persona, ou qualquer outro RPG/JRPG, caso contrário recomendo dar uma
olha em vídeos do youtube para pegara ideia de um RPG/JRPG.   
&emsp;&emsp;O objetivo será aplicar um básico de orientação a objeto e
manipulação de espaço 2D e imagens.

# Capitulo 3
## Instrucoes Comuns

- Você deve codar em C.
- Não há norma, voe alto como um
	<a href="https://www.youtube.com/watch?v=d43lJsK7Kvo">pássaro livre</a>.
- Seu programa não deve apresentar errors fatais (segfault, bus error, double
	free, etc) ou comportamento inesperado.
- Toda memória alocada deve ser devidamente liberada.
- Um makefile já estará disponível, você pode modificá-lo, mas não mexa muito.
- Bônus devem estar em uma pasta separada (`cp` é um comando amigo).
- Por **Neith**! Use seu cérebro.

# Capitulo 4
## Parte Mandatoria - RPG.exec

<table align="center">
	<tr>
		<td style="font-weight: bold">Nome do programa</td>
		<td>RPG.exec</td>
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
		<td>Você deve criar um simples hud 2D com log ou gráficos.</td>
	</tr>
</table>

### Graficos

- Você deve utilizar a biblioteca gráfica MiniLibX.
- Você deve criar uma imagem, desenhar diretamente na janela é estritamente
	proibido.
- O hud pode ter qualquer estilo, mas deve ser responsivo.
- O hud deve ter um log de ações, ou seja, se o inimigo atacou, se o player
	atacou.

<div align="center" style="background-color: yellow">
	<a href="https://github.com/andreyvdl/MiniLibX_my_docs" target="_blank">
		https://github.com/andreyvdl/MiniLibX_my_docs</a>
</div>

### Jogo

- O jogador e o inimigo são structs iguais em atributos e funções.
- Clicar no X da janela deve fechar o jogo.
- Apertar ESC deve fechar o jogo.
- O jogo segue um sistema de turnos, sendo o turno de vantagem para o jogador.
- O jogador pode escolher entre 2 opções, defender e atacar.
- O inimigo ataca automaticamente em todos os seus turnos.
- As setas do teclado controlam o seletor e a tecla Z ou Enter confirma a ação.
- Se o jogador morrer, o jogo fecha e o terminal exibe uma mensagem de game
	over.
- Se o inimigo morrer, o jogo fecha e o terminal exibe uma mensagem de vitória.

<div align="center" style="background-color: yellow">
	<a href="https://github.com/andreyvdl/MiniLibX_my_docs" target="_blank">
		https://github.com/andreyvdl/MiniLibX_my_docs</a>
</div>

# Capitulo 5
## Bonus - RPG.bonus

- Você devera criar outro programa, dessa vez chamado `RPG.bonus`.

Você pode adicionar qualquer um desses bonus, ou todos para se sentir um
especialista:

- Adicionar gráficos (podem ser coisas como sprites do inimigo, barra de vida,
	animação de ataque, animação de dano, etc).
- Aumentar a complexidade da struct (podem ser coisas como velocidade, arma,
	armadura, magia, ataque mágico, defesa mágica, etc).
- Míltiplos inimigos.
- Bots de party para o jogador.
- Sistema ATB (Active Time Battle).
- Inventário com itens para serem utilizados.
- Permitir que o jogador escolha uma classe (saber, caster, archer, berserker,
	assassin, lancer ou rider).
- Criar um bot inteligente para o inimigo.
- Selecionar as opções com o mouse.

