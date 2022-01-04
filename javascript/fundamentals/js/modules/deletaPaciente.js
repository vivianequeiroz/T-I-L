export function deletarPaciente() {
  let pacientes = document.querySelectorAll(".paciente");

  pacientes.forEach(function (paciente) {
    paciente.addEventListener("click", function () {
      console.log("Delete paciente clicked");
      this.remove();
    });
  });

  console.log("teste da deletarPaciente");
}
