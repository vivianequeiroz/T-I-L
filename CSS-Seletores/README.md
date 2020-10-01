# CSS Básico - Seletores

<h1 align="center">
    <img src = "https://www.tutorialrepublic.com/lib/images/css-illustration.png" alt = "CSS 3 escrito em preto e ao lado direito desenho de um notebook com código css na tela" text-align="center"  width="500px">
</h1> 

> O CSS (Cascading Style Sheets) dá estilo à formatação de uma página da web ao se comunicar com os elementos do arquivo HTML 

# Seletores

## Formatação
    
    p (seletor) {
        color (propriedade): blue(valor); [ambos são a declaração] 
    }

<strong>p</strong> é o <em>seletor</em>, que remete à tag utilizada no elemento que quer ser modificado dentro do arquivo HTML

<strong>color + font-size</strong> são as <em>propriedades</em>, que recebem valores após os dois pontos 
<br><br>
</p>

## Como conectar ao arquivo HTML:

<p>
Além do Inline Styles (menos recomendável pois pseudo-elementos e classes não são afetados), existem outra maneira de se conectar um arquivo CSS ao HTML. 

> Tag < link > 

Ela se dá dentro da tag < head > do arquivo HTML. 

Os dois arquivos precisam estar na mesma pasta para serem linkados.

Essa é a maneira mais utilizada hoje por ser a mais performática e com maior manutenabilidade.

A tag utilizada é: 

        <link rel="stylesheet" href="arquivo.css">
<br>
</p>

#### Regra @import 

Caso seja necessário importar um outro arquivo CSS para o arquivo CSS que se está lidando, a regra @import é utilizada.

Ela funciona de ambas as maneiras:

    @import "mobilestyle.css"
    ou
    @import url("mobilestyle.css"); 

Ela pode definir uma <strong>condição</strong> de quando essa segunda style sheets será utilizada. Exemplo: 

    @import "mobstyle.css" screen and (max-width: 700px);

O exemplo mostra que "mobstyle.css" <strong>
somente</strong> será utilizada quando for uma tela com largura superior a 700px).
<br><br>

## Relação de força entre os elementos - Efeito Cascata

No HTML podem existir elementos de um mesmo tipo mas que definem diferentes corpos de texto. 

Para fazer uma caracterização de cada um no CSS, é importante considerar que: 

<strong>O mais específico se sobressai ao mais geral.</strong>

Por exemplo, se eu tenho uma tag < body > definida no CSS com font-size: 12px e dentro dele há uma tag < h1 >, ela também terá tamanho 12px. 

Mas, se eu defino < h1 > como 14px, o efeito cascata ocorre e essa especificação ocorrerá com < h1 >, a qual passará a ter font-size de 14px. O restante dentro de < body > - caso não seja definido - permanecerá com 12px.

<strong>Em caso de repetição de um elemento no CSS, o último digitado irá sobressair-se.</strong>

Se por duas vezes eu defino propriedades para a tag < body > dentro do arquivo CSS, a que surtirá efeitos será a última definição.
<br><br>

## Inspecionar elementos de uma página

A fim de verificar e modificar as propriedades em elementos no CSS, basta visitar qualquer site e clicar com botão direito para <em>Inspecionar elemento</em> - recurso dos browsers que permite verificar o código fonte e sua estilização.
<br><br>

### Sempre consultar documentações oficiais

 <a href="https://developer.mozilla.org/pt-BR/docs/Web/HTML/Element">MDN</a>

 <a href="https://www.w3schools.com/tags/ref_byfunc.asp">W3</a>


### Outros recursos

 <a href="https://www.tutorialrepublic.com/css-tutorial/">TutorialRepublic</a>

<p align="center"> Feito com 💛 por <a href="https://www.linkedin.com/in/viviane-de-santana-queiroz-1a5a4b155/">Viviane Queiroz</a> 🦋 </p>
