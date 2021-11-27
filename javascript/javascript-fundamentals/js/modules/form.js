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

  function criaNovaTr(paciente) {
    const colunasTabela = 5;
    const tdsTabela = [];

    let pacienteTr = document.createElement("tr").classList.add("paciente");

    for (let i = 0; i < colunasTabela; i++) {
      tdsTabela[i] = document.createElement("td").classList.add("info-nome");
    }

    let nomeTd = tdsTabela[0];
    let pesoTd = tdsTabela[1];
    let alturaTd = tdsTabela[2];
    let gorduraTd = tdsTabela[3];
    let imcTd = tdsTabela[4];

    nomeTd.textContent = paciente.nome;
    pesoTd.textContent = paciente.peso;
    alturaTd.textContent = paciente.altura;
    gorduraTd.textContent = paciente.gordura;
    imcTd.textContent = paciente.imc;

    pacienteTr.appendChild(nomeTd);
    pacienteTr.appendChild(pesoTd);
    pacienteTr.appendChild(alturaTd);
    pacienteTr.appendChild(gorduraTd);
    pacienteTr.appendChild(imcTd);

    let tabela = document.querySelector("#tabela-pacientes");

    tabela.appendChild(pacienteTr);

    return pacienteTr;
  }

  criaNovaTr(paciente);
}
