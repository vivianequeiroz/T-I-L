export function editarPaciente() {
  let tabela = document.querySelector("#tabela-pacientes");

  tabela.addEventListener("click", function () {
    let alvoEvento = event.target;
    let contemIconeEditar = alvoEvento.classList.contains("icone-editar");

    if (contemIconeEditar) {
      let linhaPaciente = alvoEvento.closest(".paciente");
      // linhaPaciente.remove();
    }
  });
}
