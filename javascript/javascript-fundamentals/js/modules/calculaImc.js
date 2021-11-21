export function validaPesoEAltura() {
  let pacientes = document.querySelectorAll(".paciente");
  let totalPacientes = pacientes.length;

  let pesoValido = true;
  let alturaValida = true;

  const mensagemPesoInvalido = "Peso inválido!";
  const mensagemAlturaInvalida = "Altura inválida!";

  let contador = 0;

  for (contador; contador < totalPacientes; contador++) {
    let paciente = pacientes[contador];

    let peso = paciente.querySelector(".info-peso");
    let pesoPaciente = peso.textContent;

    let altura = paciente.querySelector(".info-altura");
    let alturaPaciente = altura.textContent;

    let imc = paciente.querySelector(".info-imc");

    if (pesoPaciente > 600) {
      console.log(mensagemPesoInvalido);
      pesoValido = false;
      imc.textContent = mensagemPesoInvalido;
    }

    if (alturaPaciente > 2.5) {
      console.log(mensagemAlturaInvalida);
      alturaValida = false;
      imc.textContent = mensagemAlturaInvalida;
    }

    if (pesoValido && alturaValida) {
      imc.textContent = calculoImc(pesoPaciente, alturaPaciente);
    }
  }
}

function calculoImc(peso, altura) {
  let imcTotal = peso / (altura * altura);
  return imcTotal.toFixed(2);
}
