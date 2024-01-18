# ATENCAO ⚠️
## Por que conversores? ❓

A MiniLibX da França utiliza um formato incomum de imagens chamado <a href="https://en.wikipedia.org/wiki/X_PixMap" target="_blank">XPM</a>, pelo fato dele ser incomum não é fácil achá-ló na internet, porém seus conversores são, só que, a proposito de tornar esse dojo mais dinâmico decidi eu mesmo fazer os conversores.
São apenas 2, um de XPM3 para PNG e outro de PNG para XPM3.   
<b style="color: red">ATENÇÃO!!!</b> Dentro do repositório da CODAM (MLX42.zip), na pasta "tools" tem um <a href="https://github.com/codam-coding-college/MLX42/wiki/XPM42#tools" target="_blank">conversor em python</a> de XPM3 para XPM42 (formato próprio da CODAM), fora isso a CODAM tem suporte nativo a PNG.

## Usar o conversor de GO 🐿️
### png2xpm.go 🐿️

O conversor de go depende de um código do github<sup>\*</sup>, para puxar ele para sua máquina você deve utilizar o comando:   
`bash$ go get github.com/xyproto/xpm`   
<sub><sup>*</sup> Se o seu Go for mais recente que a versão nas máquinas da 42 vai precisar fazer gambiarra com o go mod, pergunte ao seu GePeTo favorito como fazer isso.</sub>

Então rode com:   
`bash$ go run png2xpm.go /your/png/file.png`

## Usar o conversor de JS ☕
### xpm2png.js ☕

O conversor de JS depende de um pacote chamado xpm2png, para instalar ele você deve utilizar o comando:   
`bash$ npm i xpm2png`

Então rode com:   
`bash$ node xpm2png.js /your/xpm/file.xpm`
