export function editarPaciente() {
  let tabela = document.querySelector("#tabela-pacientes");

  tabela.addEventListener("click", function () {
    let alvoEvento = event.target;
    let contemIconeEditar = alvoEvento.classList.contains("icone-editar");
    let eventoDeletar = alvoEvento.classList.contains("icone-deletar");

    if (contemIconeEditar) {
      let trPaciente = alvoEvento.closest(".paciente");
      let tdsPaciente = trPaciente.getElementsByTagName("td");
      console.log(tdsPaciente);
      acessaDadosTd(tdsPaciente);
    }

    if (eventoDeletar) {
      removeDadosEditar();
    }
  });
}

function acessaDadosTd(tdsPaciente) {
  let dadosObtidos = [];

  for (const tdPaciente of tdsPaciente) {
    // It is HTMLCollection and it does not have forEach method.
    console.log(tdPaciente.innerHTML);
    dadosObtidos.push(tdPaciente.innerHTML);
  }

  adicionaDadosEmEditar(dadosObtidos);
}

function adicionaDadosEmEditar(dadosObtidos) {
  let formEditar = document.querySelector("#form-edita");
  let inputsEditar = formEditar.getElementsByClassName("editar");
  let botaoEditar = formEditar.querySelector("#editar-paciente");

  habilitaCampos(inputsEditar, botaoEditar);

  let valoresExistentes = dadosObtidos.slice(0, 4);

  let nome = valoresExistentes[0];
  let peso = valoresExistentes[1];
  let altura = valoresExistentes[2];
  let gordura = valoresExistentes[3];

  inputsEditar[0].value = nome;
  inputsEditar[1].value = peso;
  inputsEditar[2].value = altura;
  inputsEditar[3].value = gordura;
}

function removeDadosEditar() {
  let formEditar = document.querySelector("#form-edita");
  let inputsEditar = formEditar.getElementsByClassName("editar");
  let botaoEditar = formEditar.querySelector("#editar-paciente");

  [...inputsEditar].forEach((inputEditar) => {
    inputEditar.value = "";
  });

  botaoEditar.disabled = true;
}

function habilitaCampos(inputs, botao) {
  inputs.disabled = false;
  botao.disabled = false;
}
