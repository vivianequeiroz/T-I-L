# CSS Básico - Seletores

<h1 align="center">
    <img src = "https://www.tutorialrepublic.com/lib/images/css-illustration.png" alt = "CSS 3 escrito em preto e ao lado direito desenho de um notebook com código css na tela" text-align="center"  width="500px">
</h1> 

> Os seletores são padrões utilizados para referenciar, dentro do CSS, os elementos do arquivo HTML que serão formatados. 

# Seletores

## Seletor universal

Ele seleciona e aplica os estilos definidos nas propriedades entre chaves para <strong>todo o documento HTML</strong>.

Caracteriado por:

<strong>Asterisco ( * )</strong>

Exemplo:

    * {
        margin: 0;
        padding: 0;
    }
    
#### Caso haja específição de algum elemento, essa irá se sobressair ao estilo dado pelo seletor, possui mais força.
    
<br><br>


## Elemento

Esse tipo de seletor é constituído pela própria tag HTML sendo diretamente referenciada. O estilo será aplicado a <strong>todas as tags HTML com aquele nome no documento inteiro</strong>.

Caracteriado por:

<strong> Tag HTML pura </strong>

Exemplo:

    p {
        color: grape;
    }

<br><br>

## ID 

O seletor do tipo ID é único, portanto, <strong> somente pode ser utilizado uma única vez no documento HTML</strong>. 

Caracteriado por:

<strong> Hashtag (#) e valor do ID </strong>

Exemplo:

    #error {
        color: red;
    }   

<br><br>

## Class 

O seletor do tipo  class <strong>pode ser utiliado por mais de uma vez no documento HTML</strong>.

Caracteriado por:

<strong> Sinal de ponto (.) e valor da Class </strong>

Exemplo:

    p.blue {
        color: blue;
    } 

#### *** O exemplo acima demonstra que somento os elementos p dentro da tag que possuem class blue serão coloridos de azul.

<br><br>

## Elementos filhos

Com esse padrão é possível definir que apenas os elementos que são os primeiros descendentes de um elemento X - os filhos - receberão determina(s) propriedade(s). <strong>Esses elementos devem ter uma relação direta de pai - filho</strong>.

Caracteriado por:

<strong> Elemento pai, sinal de maior (>) e o elemento filho </strong>

Exemplo:

     ul > li {
        list-style: square;
     }

#### *** O exemplo acima mostra que apenas os elementos < li > que são filhos de < ul > receberão a propriedade list-style com valor square. Demais listas dentro de < ul > não serão afetadas.


<br><br>

## Irmãos adjacentes

Esse padrão permite definir propriedade para um elemento X que é irmão de um elemento Z que o antecede. <strong>A ordem como as tags são inseridas definem o requisito para que tal propriedade seja aplicada. O alvo precisa ser imediatamento sucessor do primeiro elemento</strong>

Caracteriado por:

<strong> Elemento antecessor, sinal de mais (+) e o elemento sucessor 

(ambos filhos de um mesmo elemento pai) </strong>

Exemplo:

     h1 + p {
        color: blue;
        font-size: 18px;
     }

#### *** O exemplo acima mostra que apenas os elementos < p > que são imediatamente precedidos de < h1 > - e filhos de um mesmo elemento pai - receberão a propriedade color e valor azul, bem cmo font-size com valor 18px. Demais elementos < p <> que não sigam exatamente esse padrão dentro do documento não serão afetados.

<br><br>


## Seletores gerais de irmãos

Esse padrão também permite definir propriedade para um elemento X que é irmão de um elemento Z que o antecede, mas de maneira menos estrita. <strong> O alvo não necessariamente precisa ser o sucessor do primeiro elemento </strong>.

Caracteriado por:

<strong> Elemento antecessor, til (∼) e o elemento sucessor 

(ambos filhos de um mesmo elemento pai) </strong>

Exemplo:

     h1 ∼ p {
        color: blue;
        font-size: 18px;
     }

#### *** O exemplo acima mostra que apenas os elementos < h1 > que são precedidos de < h1 > - mas não necessariamente em sequência -  receberão a propriedade color e valor azul, bem cmo font-size com valor 18px. Demais < p > que não tenham um < h1 > os precedendo em algum momento, não serão afetados.

<br><br>

## Agrupamento de seletores

Quando compartilham as mesmas propriedades no ducumentos, diversos seletores podem ser declarados simultaneamente a fim de economizar linhas de código.

Caracteriado por:

<strong> Seletor 1, sinal de mais (+), seletor 2, sinal de mais (+), seletor 3 </strong>

Exemplo:

     h1, h2, h3 {
        font-weight: normal;
     }


<br><br>


## Seletores de atributos CSS - úteis para quando não houver uma Class ou ID

<strong>Consultar:</strong> 
https://www.tutorialrepublic.com/css-tutorial/css-attribute-selectors.php
<br><br>

### Sempre consultar documentações oficiais

 <a href="https://developer.mozilla.org/pt-BR/docs/Web/HTML/Element">MDN</a>

 <a href="https://www.w3schools.com/tags/ref_byfunc.asp">W3</a>


### Outros recursos

 <a href="https://www.tutorialrepublic.com/css-tutorial/">TutorialRepublic</a>

<p align="center"> Feito com 💛 por <a href="https://www.linkedin.com/in/viviane-de-santana-queiroz-1a5a4b155/">Viviane Queiroz</a> 🦋 </p>
