# Padrão MVC (Model, View, Controller)

<h1 align="center">
    <img src = "https://blog.teclogica.com.br/wp-content/uploads/2012/03/usabilidade-1.jpg" alt = "Desenho de celular com diversos ícones que remetem ao UX design" text-align="center"  width="400px">
</h1> 

  > Padrão de organização de código que visa utilizar de soluções previamente criadas a fim de fazer a separação de partes distintas da aplicação e, assim, reduzir sua dependência

## Model
<ul>
     <li>Concentra as regras de negócio</li>
     <li>Entidades</li>
     <li>Validações</li>
     <li>Camada de acesso aos dados</li>
     <li>Deve conter a lógica de como executar as tarefas</li>
     <li>Nunca entra em contato com a View</li>
</ul>

## View
<ul>
     <li>Faz a renderização das respostas das requisições</li>
     <li>JavaScript no contexto dos browsers</li>
     <li>HTML & CSS</li>
     <li>Template Engine</li>
     <li>Nunca entra em contato com o Model</li>
</ul>

## Controller
<ul>
     <li>Coordenada o fluxo da aplicacação</li>
     <li>Carrega as requisições</li>
     <li>Ponto entre View e Model</li>

</ul>



### Fluxo:

<ul>↬ Browser gera requisição a partir da URL</ul>
<ul>↬ Ela chega ao webserver e pelo endereço da URL, direciona à aplicação correta</ul> 
<ul>↬ Na aplicação, a camada que recebe o request é a Controller </ul>

<p>A partir desse momento, podem existir dois cenários:</p>

<ol>
    <ul> 1. <strong>Sem</strong> acesso de dados - não há ligação com banco de dados</ul> 
</ol>

    - Browser efetua requisição 
    - Controller recepciona request e identifica que não há acesso de dados
    - View renderiza a página e resposta enviada ao browser

<ol>
    <ul> 2 . <strong>Com</strong> acesso de dados - há ligação com banco de dados</ul> 
</ol>

    - Browser efetua requisição 
    - Controller recepciona request e identifica que existe necessidade de acesso de dados
    - Encaminha request ao Model que busca na base de dados e ao identificar a resposta, a encaminha ao Controller
    - O fluxo de coleta de dados pode ser repetido diversas vezes
    - View recebe os dados do Controller e renderiza a página e resposta que será enviada ao browser

#### Recursos: 

<p> Livro <a href="https://www.amazon.com.br/Não-faça-pensar-Steve-Krug/dp/8576088509/ref=asc_df_8576088509/?tag=googleshopp00-20&linkCode=df0&hvadid=379726290955&hvpos=&hvnetw=g&hvrand=7313052300154191141&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=1001773&hvtargid=pla-811021535400&psc=1"> Não me faça pensar</a> de Steve Krug. 

<br><br>

<p align="center"> Feito com 💛 por <a href="https://www.linkedin.com/in/viviane-de-santana-queiroz-1a5a4b155/">Viviane Queiroz</a> 🦋 </p>
