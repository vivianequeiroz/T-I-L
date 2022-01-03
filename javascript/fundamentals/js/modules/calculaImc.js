export function validaPesoEAltura() {
  let pacientes = document.querySelectorAll(".paciente");
  let totalPacientes = pacientes.length;

  const mensagemPesoInvalido = "Peso inválido!";
  const mensagemAlturaInvalida = "Altura inválida!";

  let contador = 0;

  for (contador; contador < totalPacientes; contador++) {
    let paciente = pacientes[contador];

    let peso = paciente.querySelector(".info-peso");
    let pesoEhValido = validaPeso(peso.textContent);
    let pesoPaciente = peso.textContent;

    let altura = paciente.querySelector(".info-altura");
    let alturaEhValida = validaAltura(altura.textContent);
    let alturaPaciente = altura.textContent;

    let imc = paciente.querySelector(".info-imc");

    if (!pesoEhValido) {
      pesoEhValido = false;
      imc.textContent = mensagemPesoInvalido;
      paciente.classList.add("paciente-invalido");
    }

    if (!alturaEhValida) {
      alturaEhValida = false;
      imc.textContent = mensagemAlturaInvalida;
      paciente.classList.add("paciente-invalido");
    }

    if (pesoEhValido && alturaEhValida) {
      imc.textContent = calculaImc(pesoPaciente, alturaPaciente);
    }
  }
}

export function validaPeso(pesoInformado) {
  const pesoMaximo = 500;
  const pesoMinimo = 0.2;

  if (pesoInformado >= pesoMinimo && pesoInformado < pesoMaximo) {
    return true;
  } else {
    return false;
  }
}

export function validaAltura(altura) {
  const alturaMaxima = 2.5;
  const alturaMinima = 0.5;

  if (altura >= alturaMinima && altura < alturaMaxima) {
    return true;
  } else {
    return false;
  }
}

export function calculaImc(peso, altura) {
  let imcTotal = peso / (altura * altura);
  return imcTotal.toFixed(2);
}
