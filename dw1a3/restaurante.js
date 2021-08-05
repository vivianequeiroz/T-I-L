
(function () {
  const formulario = document.getElementById("calculo-consumo");
  formulario.addEventListener("submit", function (evento) {
    evento.preventDefault();

    const precoKg = parseFloat(document.getElementById("preco-kg").value);
    const pesoGramas = parseInt(document.getElementById("consumo-g").value);

    if (pesoGramas > 1000) {
      document.getElementById("preco-excedido").style.visibility = "visible";
      throw Error("Preço máximo excedido!!!")
    }

    document.getElementById("preco-excedido").style.visibility = "hidden";

    const pesoKilograma = pesoGramas / 1000;
    const total = parseFloat(precoKg / pesoKilograma).toFixed(2);

    document.getElementById("total").innerHTML = total;

    const totalAnterior = localStorage.getItem("total");

    if (totalAnterior && totalAnterior < total) {
      localStorage.setItem("total", total);
    }

    if (!totalAnterior) {
      localStorage.setItem("total", total);
    }

    const vendasAnterior = localStorage.getItem("vendas");

    const novaVenda = {
      preco: total,
      peso: pesoGramas
    };

    if (vendasAnterior) {
      const vendas = JSON.parse(vendasAnterior);
      vendas.push(novaVenda);

      localStorage.setItem("vendas", JSON.stringify(vendas));
    } else {
      localStorage.setItem("vendas", JSON.stringify([novaVenda]));
    }

  });

  const botaoListagem = document.getElementById("listar");
  botaoListagem.addEventListener("click", function () {
    const vendas = localStorage.getItem("vendas");

    if (vendas) {
      const vendasParsed = JSON.parse(vendas);
      const totalPreco = vendasParsed.reduce((total, venda) => total + parseFloat(venda.preco), 0);
      const totalPeso = vendasParsed.reduce((total, venda) => total + parseInt(venda.peso), 0);

      document.getElementById("total-vendido").innerHTML = totalPreco;
      document.getElementById("total-peso").innerHTML = totalPeso;


      vendasParsed.forEach(venda => {
        const preco = parseFloat(venda.preco);
        const peso = parseInt(venda.peso);
        const precoPeso = preco / peso;

        const precoPesoFormatado = precoPeso.toFixed(2);

        const linha = document.createElement("li");
        linha.innerHTML = `Preço por kilo: ${precoPesoFormatado}R$/kg - Peso: ${peso}g - Preço: ${preco} R$`;

        document.getElementById("todas-vendas").appendChild(linha);
      });
    }
  });
})();