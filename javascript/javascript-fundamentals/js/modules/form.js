export function adicionaNovoPaciente() {
  const botaoAdicionar = document.querySelector("#adicionar-paciente");
  console.log(botaoAdicionar);

  botaoAdicionar.addEventListener("click", function (event) {
    event.preventDefault();

    // let nomeForms = document.getElementById("nome");
    // let nomeNovoPaciente = nomeForms.value;
    let form = document.querySelector("#form-adiciona");

    let nomeNovoPaciente = form.nome.value;
    let pesoNovoPaciente = form.peso.value;
    let alturaNovoPaciente = form.altura.value;
    let gorduraNovoPaciente = form.gordura.value;

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

    nomeTd.textContent = nomeNovoPaciente;
    pesoTd.textContent = pesoNovoPaciente;
    alturaTd.textContent = alturaNovoPaciente;
    gorduraTd.textContent = gorduraNovoPaciente;

    pacienteTr.appendChild(nomeTd);
    pacienteTr.appendChild(pesoTd);
    pacienteTr.appendChild(alturaTd);
    pacienteTr.appendChild(gorduraTd);

    let tabela = document.querySelector("#tabela-pacientes");

    tabela.appendChild(pacienteTr);
  });
}
