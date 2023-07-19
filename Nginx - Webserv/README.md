# Dojo de Nginx e Webserv

> 📋 Resumo do desafio: Em grupos de pelo menos 3 pessoas, vocês subirão uma instância do Nginx utilizando o arquivo de configuração indicado por nós. Após o funcionamento básico do Nginx, vocês construirão em C++ um parser básico que consiga interpretar um o arquivo de configuração do Nginx.

## Antes de qualquer coisa...

📢 Se fala "ENDINECS", e  não "indincs" ou "enigincs". :P

E talvez seja legal saber o que é nginx. Bora ver o que o ChatGPT diz...

> Eu: Ei, ChatGPT! Me explique em duas frases pra que serve o nginx, por favor.

> ChatGPT: Claro! O Nginx é um servidor web usado para enviar páginas da web para os usuários e também pode atuar como um balanceador de carga para distribuir as solicitações entre diferentes servidores, tornando a navegação na web mais rápida e segura.

## O desafio!

🌐 O Webserv usa, de certa forma, como referência o nginx para o que deve ser construído no projeto. Sendo assim, o desafio desse Dojozão vai ser dividido em três partes, sendo que a terceira é bônus:

### Primeira parte do desafio

Nesta primeira parte, vocês terão que subir um servidor nginx usando Docker e expor no `localhost` o arquivo `ft_helloworld.html` que está na pasta `resources` deste repositório.

😉 Para isso, vocês usarão o arquivo de configuração `42.conf` (que já estamos dando de mão beijada, ó que facinho).

E como essa parte do desafio não é o "core" dele, vamos facilitar a sua vida dando também a linha de comando que você deve executar pra subir o nginx com Docker:

` docker run -p 80:80 -v /seu/path/para/o/arquivo/42.conf:/etc/nginx/conf.d/default.conf:ro -v /seu/path/para/o/arquivo/ft_helloworld.html:/usr/share/nginx/html/42.html nginx`

⚠️ Mas, atenção! Tem, propositalmente, um errinho beeeem pequeno no `42.conf`. 😜

#### Resultado esperado

✅ Se tudo estiver funcionando bonitinho, quando rodar o comando abaixo:

`curl http://localhost:80/ -v`

você deve ter como resultado algo tipo assim:

```*   Trying 127.0.0.1:80...
* TCP_NODELAY set
* Connected to localhost (127.0.0.1) port 80 (#0)
> GET / HTTP/1.1
> Host: localhost
> User-Agent: curl/7.68.0
> Accept: */*
>
* Mark bundle as not supporting multiuse
< HTTP/1.1 200 OK
< Server: nginx/1.25.1
< Date: Wed, 10 Jul 2023 20:04:29 GMT
< Content-Type: text/html
< Content-Length: 31
< Last-Modified: Wed, 10 Jul 2023 15:02:11 GMT
< Connection: keep-alive
< ETag: "64b7faf3-1f"
< Accept-Ranges: bytes
<
* Connection #0 to host localhost left intact
<h1>Bonjour, quarante-deux</h1>
```

👉🏾 **Não leia ainda a próxima parte se não tiver alcançado o resultado esperado!**

### Segunda parte do desafio

A segunda parte do desafio já tem ligação total com o WebServ. É, na verdade, uma partezinha do projeto, de certa forma.

Vocês terão que implementar em `C++` uma classe que interprete o arquivo `42.conf` e retorne o valor dos atributos `listen` e `root`.

O protótipo básico da classe a ser criada é o seguinte:

```
class Server {
	int listen;
	std::string root;
}
```

#### Resultado esperado

Ao rodar a `main` abaixo (que é só um exemplo pra vocês tomarem como base):

```
int main()

{

    Server server = Server();

    std::cout << "Server listen:" << server.listen << std::endl;
    std::cout << "Server root:" << server.root << std::endl;
    
    return 0;
}
```

✅ O programa deve printar no terminal o valor das configurações `listen` e `root` que estão no arquivo `42.conf`, por exemplo:

```
Server listen:80
Server root:/usr/share/nginx/html
```

👉🏾 **Não leia ainda a próxima parte se não tiver alcançado o resultado esperado!**

### Terceira parte do desafio (bônus!)

Se vocês chegaram até aqui, ou falta pouco tempo ou vocês foram muuuuito mais eficientes do que o imaginado. Então bora de bônus!

O bônus é armazenar em um `map` os `locations` registrados no `42.conf`. cada `location` do mapa deve ser uma instância da classe `Location`, que deve ter como protótipo básico:

```
class Location{
	std::string index;
}
```

O protótipo básico da classe `Server`, agora deve ter também como atributo o `map` de `locations`:

```
class Server {
	public 
		int listen;
		std::string root;
		std::map<std::string, Location> location;
}
```

A chave do `map` deve ser a rota relativa da location. Por exemplo, se o location configurado for:

```
    location / {
        index  42.html;
    }
```

A chave deste registro do `map` deve ser `\`, e o valor da propriedade `index` do `location`, deve ser `42.html`.

#### Resultado esperado

✅ 
Para saber se você conseguiu atingir o desafio, sua main deve printar todos os locations cadastrados no arquivo, suas chaves e seus respectivos index.

Boa sorte! 🍀