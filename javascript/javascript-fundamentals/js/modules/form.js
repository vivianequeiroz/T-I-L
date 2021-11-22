import { calculaImc } from "./calculaImc.js";

export function adicionaNovoPaciente() {
  const botaoAdicionar = document.querySelector("#adicionar-paciente");
  console.log(botaoAdicionar);

  botaoAdicionar.addEventListener("click", function (event) {
    event.preventDefault();

    // let nomeForms = document.getElementById("nome");
    // let nomeNovoPaciente = nomeForms.value;
    let form = document.querySelector("#form-adiciona");

    let paciente = obtemDadosPaciente(form);
    console.log(paciente);

    const colunasTabela = 5;
    const tdsTabela = [];

    var pacienteTr = document.createElement("tr");

    for (let i = 0; i < colunasTabela; i++) {
      tdsTabela[i] = document.createElement("td");
    }

    let nomeTd = tdsTabela[0];
    let pesoTd = tdsTabela[1];
    let alturaTd = tdsTabela[2];
    let gorduraTd = tdsTabela[3];
    let imcTd = tdsTabela[4];

    nomeTd.textContent = nome;
    pesoTd.textContent = peso;
    alturaTd.textContent = altura;
    gorduraTd.textContent = gordura;
    imcTd.textContent = calculaImc(peso, altura);

    pacienteTr.appendChild(nomeTd);
    pacienteTr.appendChild(pesoTd);
    pacienteTr.appendChild(alturaTd);
    pacienteTr.appendChild(gorduraTd);
    pacienteTr.appendChild(gorduraTd);

    let tabela = document.querySelector("#tabela-pacientes");

    tabela.appendChild(pacienteTr);
  });

  function obtemDadosPaciente(form) {
    const paciente = {
      nome: form.nome.value,
      pesoa: form.peso.value,
      altura: form.altura.value,
      gordura: form.gordura.value,
      imc: calculaImc(form.peso.value, form.altura.value),
    };

    return paciente;
  }
}
