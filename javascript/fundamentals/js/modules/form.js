import { calculaImc, validaPeso } from "./calculaImc.js";

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

    let erro = validaPaciente(paciente);

    if (erro.length > 0) {
      console.log("Paciente inválido!");
      return;
    }

    let tabela = document.querySelector("#tabela-pacientes");
    tabela.appendChild(pacienteTr);

    form.reset();
  });

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
    if (validaPeso(paciente.peso)) {
      return "";
    } else {
      return "Peso inválido!";
    }
  }
}
