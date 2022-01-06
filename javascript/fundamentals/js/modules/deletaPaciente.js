export function deletarPaciente() {
  let tabela = document.querySelector("#tabela-pacientes");

  tabela.addEventListener("click", function () {
    let alvoEvento = event.target;
    let contemIconeDeletar = alvoEvento.classList.contains("icone-deletar");

    if (contemIconeDeletar) {
      let linhaPaciente = alvoEvento.closest(".paciente");

      linhaPaciente.classList.add("fadeOut")

      setTimeout(function() {
        linhaPaciente.remove();
      }, 500)
    }
  });
}
