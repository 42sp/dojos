# Capitulo 1
## Introducao 📢

> Mario Paint (マリオペイント Mario Peinto) é um jogo eletrônico de desenho de 1992 para o Super Nintendo Entertainment System. Ele foi lançado junto com o acessório Super NES Mouse. Foi desenvolvido pela Nintendo e a Intelligent Systems. -- WIKI, Pedia 2023

> O que a Nintendo tava pensando quando lançou esse <a href="https://youtu.be/uCRB5N8LQN4?si=NCp5ixcapw73F4ZU" target="_blank">banger</a>?

<div align="center">
	<img src="https://www.computerhope.com/issues/pictures/first-mouse.png" alt="Não, ele não se chamava Mickey">
</div>

# Capitulo 2
## Objetivo 🎯

Por mais que os usuários de N/Vim não gostem do mouse, esse projeto é sobre aprender a amá-lo.   
&emsp;&emsp;Tenha em mente que o mouse que deve ser utilizado para esse projeto é o padrão mais comum do mercado (dois botões superiores, um botão no scroll e o próprio scroll), mouses com botões laterais serão ignorados.

# Capitulo 3
## Instrucoes Comuns 📝

- Você deve codar em C.
- Não há norma, voe alto como um <a href="https://www.youtube.com/watch?v=d43lJsK7Kvo">pássaro livre</a>.
- Seu programa não deve apresentar errors fatais (segfault, bus error, double free, etc) ou comportamento inesperado.
- Um makefile já estará disponível, você pode modificá-lo, mas não mexa muito.
- Bônus devem estar em uma pasta separada (`cp` é um comando amigo).
- Você deve utilizar a biblioteca gráfica MiniLibX.
- Você deve criar uma imagem, desenhar diretamente na janela é estritamente proibido.
- Por **Neith**! Use seu cérebro.

# Capitulo 4
## Parte Mandatoria - MPaint.exec 🔰

<table align="center">
	<tr>
		<td style="font-weight: bold">Nome do programa</td>
		<td>MPaint.exec</td>
	</tr>
	<tr>
		<td style="font-weight: bold">Arquivos necessários</td>
		<td><img src="https://i.kym-cdn.com/photos/images/newsfeed/001/650/747/aaf.png" alt="YES." width="50px"></td>
	</tr>
	<tr>
		<td style="font-weight: bold">Descrição</td>
		<td>Você deverá criar um simples software de pintura.</td>
	</tr>
</table>

### Graficos 👾

- Você deve ter um hud que não faz parte do canvas do usuário (pense bem antes de limitar o tamanho do canvas).
- Seu software deve ser responsivo.

<div align="center" style="background-color: yellow">
	French doc <a href="https://github.com/andreyvdl/MiniLibX_my_docs" target="_blank">https://github.com/andreyvdl/MiniLibX_my_docs</a><br>
	CODAM doc <a href="https://github.com/codam-coding-college/MLX42/wiki" target="_blank">https://github.com/codam-coding-college/MLX42/wiki</a>
</div>

### Software 💻

- Seu hud deve conter as 9 cores básicas (vermelho, verde, azul, amarelo, magenta, roxo, ciano, branco e preto).
- Você deve ser capaz de selecionar uma cor e desenhar com ela ao clicar com o botão esquerdo do mouse.
- Seu hud deve mostrar a atual cor selecionada.
- Ao apertar ESC o programa deve fechar.
- Ao clicar no X da janela o programa deve fechar.

<div align="center" style="background-color: yellow">
	<a href="https://blog.creativecopias.com.br/como-funcionam-sistemas-de-cores/">https://blog.creativecopias.com.br/como-funcionam-sistemas-de-cores/</a><br>
	French doc <a href="https://github.com/andreyvdl/MiniLibX_my_docs" target="_blank">https://github.com/andreyvdl/MiniLibX_my_docs</a><br>
	CODAM doc <a href="https://github.com/codam-coding-college/MLX42/wiki" target="_blank">https://github.com/codam-coding-college/MLX42/wiki</a>
</div>

# Capitulo 5
## Bonus - MPaint.bonus ⭐

- Você devera criar outro programa, dessa vez chamado `MPaint.bonus`.

Você pode adicionar qualquer um desses bonus, ou todos para se sentir um especialista:

- Implementar a ferramenta linha.
- Implementar a ferramenta retângulo.
- Implementar a ferramenta balde de tinta.
- Adicionar mais cores.
- Adicionar um botão de limpar.
- Desenhar com outra cor ao clicar com o botão direito do mouse.
- Sumir com o mouse (talvez a função da França falhe! Se falhar, ignore esse bonus).

### Bonus exclusivo da CODAM 🌟

- Permitir cores com transparência.
- Mudar o ícone do mouse.
