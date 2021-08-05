function exibeInfosCarro() {
  const carroObj = {
    marca: "Chevrolet",
    modelo: "Prisma",
    anoFabricacao: 2011,
    precoVenda: 17597,
    dataRegistro: new Date("2011-05-17T06:00:00Z"),
  };

  const divInfoCarro = document.getElementById("dados-carro");
  let informacoesCarro = "";
  let insereHtml = (informacoesCarro +=
    "<ul><li>Marca: " +
    carroObj.marca +
    "</li><li>Modelo: " +
    carroObj.modelo +
    "</li><li>Ano de fabricação: " +
    carroObj.anoFabricacao + 
    "</li><li>Preço de venda: " +
    carroObj.precoVenda.toLocaleString("pt-br", {
        style: "currency",
        currency: "BRL",
    }) +
    "</li><li>Data de registro: " +
    carroObj.dataRegistro
    );

  divInfoCarro.innerHTML = insereHtml;

}
