import { calculaImc, validaPeso, validaAltura } from "./calculaImc.js";

export function adicionaNovoPaciente() {
  const botaoAdicionar = document.querySelector("#adicionar-paciente");
  console.log(botaoAdicionar);

  botaoAdicionar.addEventListener("click", function (event) {
    event.preventDefault();
    // let nomeForms = document.getElementById("nome");
    // let nomeNovoPaciente = nomeForms.value;
    let form = document.querySelector("#form-adiciona");
    let paciente = obtemDadosPaciente(form);
    let pacienteTr = montaTr(paciente);

    let erros = validaPaciente(paciente);

    console.log(erros);
    if (erros.length > 0) {
      exibeMensagensDeErros(erros);
      return;
    }

    let tabela = document.querySelector("#tabela-pacientes");
    tabela.appendChild(pacienteTr);

    form.reset();
    document.querySelector("#mensagens-erro").innerHTML = "";
  });

  function exibeMensagensDeErros(erros) {
    let ul = document.querySelector("#mensagens-erro");
    ul.innerHTML = "";
    erros.forEach(function (erro) {
      let li = document.createElement("li");
      li.textContent = erro;
      ul.appendChild(li);
    });
  }

  function obtemDadosPaciente(form) {
    const paciente = {
      nome: form.nome.value,
      peso: form.peso.value,
      altura: form.altura.value,
      gordura: form.gordura.value,
      imc: calculaImc(form.peso.value, form.altura.value),
    };
    console.log(paciente.nome);
    return paciente;
  }

  function montaTr(paciente) {
    var pacienteTr = document.createElement("tr");
    pacienteTr.classList.add("paciente");

    var nomeTd = montaTd(paciente.nome, "info-nome");
    var pesoTd = montaTd(paciente.peso, "info-peso");
    var alturaTd = montaTd(paciente.altura, "info-peso");
    var gorduraTd = montaTd(paciente.gordura, "info-gordura");
    var imcTd = montaTd(paciente.imc, "info-imc");

    pacienteTr.appendChild(nomeTd);
    pacienteTr.appendChild(pesoTd);
    pacienteTr.appendChild(alturaTd);
    pacienteTr.appendChild(gorduraTd);
    pacienteTr.appendChild(imcTd);

    return pacienteTr;
  }

  function montaTd(dadoPaciente, classe) {
    var td = document.createElement("td");
    td.textContent = dadoPaciente;
    td.classList.add(classe);

    return td;
  }

  function validaPaciente(paciente) {
    let erros = [];

    if (!validaPeso(paciente.peso)) erros.push("Peso inválido!");

    if (!validaAltura(paciente.altura)) erros.push("Altura inválida!");

    if (paciente.nome.length == 0) erros.push("Nome precisa ser informado!");

    if (paciente.peso.length === 0) erros.push("Peso precisa ser informado!");

    if (paciente.gordura.length === 0)
      erros.push("Gordura precisa ser informada!");

    if (paciente.altura.length === 0)
      erros.push("Altura precisa ser informada!");

    return erros;
  }
}
